//#include <ws2tcpip.h>
#include <stdlib.h>
#include <stdio.h>
#include <pcap.h>

#define LINE_LEN 16
#define IPTOSBUFFERS    12
#define PCAP_OPENFLAG_PROMISCUOUS   1

char *iptos(u_long in)
{
    static char output[IPTOSBUFFERS][3*4+3+1];// 4 числа по 3 цифры + 3 точки + \n
    static short which;
    u_char *p;

    p = (u_char *)&in;
    which = (which + 1 == IPTOSBUFFERS ? 0 : which + 1);
    _snprintf_s(output[which], sizeof(output[which]), sizeof(output[which]),"%d.%d.%d.%d", p[0], p[1], p[2], p[3]);
    return output[which];
}

char* ip6tos(struct sockaddr *sockaddr, char *address, int addrlen)
{
    socklen_t sockaddrlen;

    sockaddrlen = sizeof(struct sockaddr_in6);
  
	if(getnameinfo(sockaddr, 
        sockaddrlen, 
        address, 
        addrlen, 
        NULL, 
        0, 
        NI_NUMERICHOST) != 0) address = NULL;

    return address;
}

int main(int argc, char **argv)
{ 
	pcap_if_t *alldevs;
	char errbuf[PCAP_ERRBUF_SIZE];
	pcap_if_t *d;
	int i=0;
	int inum;
	pcap_t *adhandle;
	pcap_addr_t *a;
	char ip6str[128];

	/* Список адаптеров */
	if(pcap_findalldevs(&alldevs, errbuf) == -1)
	{
		fprintf(stderr,"Error in pcap_findalldevs: %s\n", errbuf);
		exit(1);
	}
	
	/* Выводим список */
	for(d=alldevs; d; d=d->next)
	{
		printf("%d. %s", ++i, d->name);
		if (d->description)
			printf(" (%s)\n", d->description);
		else
			printf(" (No description available)\n");
	}
	
	if(i==0)
	{
		printf("\nNo interfaces found! Make sure WinPcap is installed.\n");
		return -1;
	}
		
	printf("Enter the interface number (1-%d):",i);
	scanf("%d", &inum);
	
	if(inum < 1 || inum > i)
	{
		printf("\nInterface number out of range.\n");
		pcap_freealldevs(alldevs);
		return -1;
	}
	
	/* Выбор нужного адаптера */
	for(d=alldevs, i=0; i< inum-1 ;d=d->next, i++);

	/* Loopback???*/
	printf("\tLoopback: %s\n",(d->flags & PCAP_IF_LOOPBACK)?"yes":"no");

	 /* IP */
	for(a=d->addresses;a;a=a->next) 
	{
		printf("\tAddress Family: #%d\n",a->addr->sa_family);

		switch(a->addr->sa_family)
		{
		case AF_INET:
			printf("\tAddress Family Name: AF_INET\n");
			if (a->addr)
				printf("\tAddress: %s\n",iptos(((struct sockaddr_in *)a->addr)->sin_addr.s_addr));
			if (a->netmask)
				printf("\tNetmask: %s\n",iptos(((struct sockaddr_in *)a->netmask)->sin_addr.s_addr));
			if (a->broadaddr)
				printf("\tBroadcast Address: %s\n",iptos(((struct sockaddr_in *)a->broadaddr)->sin_addr.s_addr));
			if (a->dstaddr)
				printf("\tDestination Address: %s\n",iptos(((struct sockaddr_in *)a->dstaddr)->sin_addr.s_addr));
			break;

		case AF_INET6:
			printf("\tAddress Family Name: AF_INET6\n");
			if (a->addr)
				printf("\tAddress: %s\n", ip6tos(a->addr, ip6str, sizeof(ip6str)));
			break;

		default:
			printf("\tAddress Family Name: Unknown\n");
			break;
		}
	}
	printf("\n");

	/* Open the device */
	/* Open the adapter */
	if ((adhandle= pcap_open_live(d->name,	// name of the device
							 65536,			// portion of the packet to capture. 
											// 65536 grants that the whole packet will be captured on all the MACs.
							 PCAP_OPENFLAG_PROMISCUOUS,				// promiscuous mode (nonzero means promiscuous)
							 1000,			// read timeout
							 errbuf			// error buffer
							 )) == NULL)
	{
		fprintf(stderr,"\nUnable to open the adapter. %s is not supported by WinPcap\n", d->name);
		/* Free the device list */
		pcap_freealldevs(alldevs);
		return -1;
	}
	
	printf("\nlistening on %s...\n", d->description);
	
	u_char packet[100];
	/* ARP request */
	/* set mac destination */
    packet[0]=0xFF;
    packet[1]=0xFF;
    packet[2]=0xFF;
    packet[3]=0xFF;
    packet[4]=0xFF;
    packet[5]=0xFF;
    
    /* set mac source  */
    packet[6]=0x00;
    packet[7]=0x1E;
    packet[8]=0x33;
    packet[9]=0x6D;
    packet[10]=0x4E;
    packet[11]=0x19;
    
	/* Ether Type - ARP*/
	packet[12]=0x08;
    packet[13]=0x06;

	/* Hardware type */
	packet[14]=0x00;
    packet[15]=0x01;

	/* Protocol type */
	packet[16]=0x08;
    packet[17]=0x00;

	/* Hardware length */
	packet[18]=0x06;

	/* Protocol length */
    packet[19]=0x04;

	/* Operation */
	packet[20]=0x00;
	packet[21]=0x01;

	/* Sender hardware address */
	packet[22]=0x00;
    packet[23]=0x1E;
    packet[24]=0x33;
    packet[25]=0x6D;
    packet[26]=0x4E;
    packet[27]=0x19;

	/* Sender protocol address */
	packet[28]=192;
    packet[29]=168;
    packet[30]=1;
    packet[31]=20;

	/* Target hardware address */
	packet[32]=0x00;
    packet[33]=0x00;
    packet[34]=0x00;
    packet[35]=0x00;
    packet[36]=0x00;
    packet[37]=0x00;

	/* Target protocol address */
	packet[38]=192;
    packet[39]=168;
    packet[40]=1;
    packet[41]=13;


	/* CRC */
	/*
	packet[38]=;
    packet[39]=;
    packet[40]=;
    packet[41]=;
	*/

    /* Fill the rest of the packet */
    for(i=42;i<60;i++)
    {
        packet[i]=(u_char)0;
    }

	for(int ip4 = 10; ip4 < 11; ip4++)
	{
		for(int ip3 = 0; ip3 < 255; ip3++)
		{
			for(int ip2 = 0; ip2 < 255; ip2++)
			{
				for(int ip1 = 0; ip1 < 255; ip1++)
				{
					packet[38]=ip4;
					packet[39]=ip3;
					packet[40]=ip2;
					packet[41]=ip1;
					/* Send down the packet */
					if (pcap_sendpacket(adhandle, packet, 60 /* size */) != 0)
					{
						fprintf(stderr,"\nError sending the packet: %s\n", pcap_geterr(adhandle));
						return 1;
					}
					Sleep(1);
				}
			}
		}
	}
	

	/* At this point, we don't need any more the device list. Free it */
	pcap_freealldevs(alldevs);
	return 0;
}