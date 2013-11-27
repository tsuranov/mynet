#pragma once

namespace MyNetGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			this->dataGridView1->Rows->Add("00", "00", "00", "00");
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^  tabControl1;
	private: System::Windows::Forms::TabPage^  tabARP;

	protected: 

	protected: 

	protected: 

	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column7;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column8;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column9;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column10;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column11;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column12;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column13;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column14;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column15;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column16;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column17;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column18;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column19;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column20;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column21;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column22;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column23;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column24;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column25;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column26;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column27;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column28;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column29;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column30;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column31;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column32;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox1;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox2;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox7;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox6;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox4;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox8;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox12;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox10;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox11;
	private: System::Windows::Forms::MaskedTextBox^  maskedTextBox9;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label14;

































































	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabARP = (gcnew System::Windows::Forms::TabPage());
			this->maskedTextBox7 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox6 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox5 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox4 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox3 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox2 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox1 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column8 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column9 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column10 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column11 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column12 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column13 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column14 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column15 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column16 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column17 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column18 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column19 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column20 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column21 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column22 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column23 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column24 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column25 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column26 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column27 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column28 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column29 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column30 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column31 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column32 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox8 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox9 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox10 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->maskedTextBox11 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->maskedTextBox12 = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabARP->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->tabControl1->Controls->Add(this->tabARP);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(715, 159);
			this->tabControl1->TabIndex = 0;
			// 
			// tabARP
			// 
			this->tabARP->Controls->Add(this->maskedTextBox7);
			this->tabARP->Controls->Add(this->maskedTextBox6);
			this->tabARP->Controls->Add(this->maskedTextBox5);
			this->tabARP->Controls->Add(this->maskedTextBox8);
			this->tabARP->Controls->Add(this->maskedTextBox4);
			this->tabARP->Controls->Add(this->maskedTextBox3);
			this->tabARP->Controls->Add(this->maskedTextBox2);
			this->tabARP->Controls->Add(this->label8);
			this->tabARP->Controls->Add(this->maskedTextBox12);
			this->tabARP->Controls->Add(this->maskedTextBox10);
			this->tabARP->Controls->Add(this->maskedTextBox11);
			this->tabARP->Controls->Add(this->maskedTextBox9);
			this->tabARP->Controls->Add(this->maskedTextBox1);
			this->tabARP->Controls->Add(this->label7);
			this->tabARP->Controls->Add(this->label9);
			this->tabARP->Controls->Add(this->label6);
			this->tabARP->Controls->Add(this->label5);
			this->tabARP->Controls->Add(this->label3);
			this->tabARP->Controls->Add(this->label2);
			this->tabARP->Controls->Add(this->label14);
			this->tabARP->Controls->Add(this->label13);
			this->tabARP->Controls->Add(this->label12);
			this->tabARP->Controls->Add(this->label11);
			this->tabARP->Controls->Add(this->label10);
			this->tabARP->Controls->Add(this->label1);
			this->tabARP->Font = (gcnew System::Drawing::Font(L"Arial", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->tabARP->Location = System::Drawing::Point(4, 22);
			this->tabARP->Name = L"tabARP";
			this->tabARP->Padding = System::Windows::Forms::Padding(3);
			this->tabARP->Size = System::Drawing::Size(707, 133);
			this->tabARP->TabIndex = 0;
			this->tabARP->Text = L"ARP";
			this->tabARP->UseVisualStyleBackColor = true;
			// 
			// maskedTextBox7
			// 
			this->maskedTextBox7->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox7->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox7->Location = System::Drawing::Point(304, 77);
			this->maskedTextBox7->Mask = L"<aa";
			this->maskedTextBox7->Name = L"maskedTextBox7";
			this->maskedTextBox7->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox7->Size = System::Drawing::Size(23, 21);
			this->maskedTextBox7->TabIndex = 3;
			this->maskedTextBox7->Text = L"04";
			this->maskedTextBox7->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// maskedTextBox6
			// 
			this->maskedTextBox6->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox6->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox6->Location = System::Drawing::Point(304, 56);
			this->maskedTextBox6->Mask = L"<aa";
			this->maskedTextBox6->Name = L"maskedTextBox6";
			this->maskedTextBox6->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox6->Size = System::Drawing::Size(23, 21);
			this->maskedTextBox6->TabIndex = 3;
			this->maskedTextBox6->Text = L"06";
			this->maskedTextBox6->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// maskedTextBox5
			// 
			this->maskedTextBox5->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox5->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox5->Location = System::Drawing::Point(304, 33);
			this->maskedTextBox5->Mask = L"<aa:aa";
			this->maskedTextBox5->Name = L"maskedTextBox5";
			this->maskedTextBox5->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox5->Size = System::Drawing::Size(47, 21);
			this->maskedTextBox5->TabIndex = 3;
			this->maskedTextBox5->Text = L"0800";
			this->maskedTextBox5->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// maskedTextBox4
			// 
			this->maskedTextBox4->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox4->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox4->Location = System::Drawing::Point(304, 7);
			this->maskedTextBox4->Mask = L"<aa:aa";
			this->maskedTextBox4->Name = L"maskedTextBox4";
			this->maskedTextBox4->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox4->Size = System::Drawing::Size(47, 21);
			this->maskedTextBox4->TabIndex = 3;
			this->maskedTextBox4->Text = L"0001";
			this->maskedTextBox4->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// maskedTextBox3
			// 
			this->maskedTextBox3->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox3->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox3->Location = System::Drawing::Point(71, 61);
			this->maskedTextBox3->Mask = L"<aa:aa";
			this->maskedTextBox3->Name = L"maskedTextBox3";
			this->maskedTextBox3->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox3->Size = System::Drawing::Size(47, 21);
			this->maskedTextBox3->TabIndex = 3;
			this->maskedTextBox3->Text = L"0806";
			this->maskedTextBox3->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// maskedTextBox2
			// 
			this->maskedTextBox2->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox2->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox2->Location = System::Drawing::Point(71, 33);
			this->maskedTextBox2->Mask = L"<aa:aa:aa:aa:aa:aa";
			this->maskedTextBox2->Name = L"maskedTextBox2";
			this->maskedTextBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox2->Size = System::Drawing::Size(141, 21);
			this->maskedTextBox2->TabIndex = 3;
			this->maskedTextBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(242, 84);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 14);
			this->label8->TabIndex = 2;
			this->label8->Text = L"Prot length";
			// 
			// maskedTextBox1
			// 
			this->maskedTextBox1->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox1->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox1->Location = System::Drawing::Point(71, 6);
			this->maskedTextBox1->Mask = L"<aa:aa:aa:aa:aa:aa";
			this->maskedTextBox1->Name = L"maskedTextBox1";
			this->maskedTextBox1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox1->Size = System::Drawing::Size(141, 21);
			this->maskedTextBox1->TabIndex = 3;
			this->maskedTextBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(242, 63);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 14);
			this->label7->TabIndex = 2;
			this->label7->Text = L"Hard length";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(242, 40);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 14);
			this->label6->TabIndex = 2;
			this->label6->Text = L"Prot Type";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(242, 14);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(56, 14);
			this->label5->TabIndex = 2;
			this->label5->Text = L"Hard Type";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 68);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(58, 14);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ether Type";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(50, 14);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Src MAC";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(9, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(55, 14);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Dest MAC";
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(707, 104);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"tabPage2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(-1, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Send";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// dataGridView1
			// 
			this->dataGridView1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCellsExceptHeader;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(32) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6, this->Column7, this->Column8, this->Column9, this->Column10, 
				this->Column11, this->Column12, this->Column13, this->Column14, this->Column15, this->Column16, this->Column17, this->Column18, 
				this->Column19, this->Column20, this->Column21, this->Column22, this->Column23, this->Column24, this->Column25, this->Column26, 
				this->Column27, this->Column28, this->Column29, this->Column30, this->Column31, this->Column32});
			this->dataGridView1->Location = System::Drawing::Point(0, 195);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(715, 251);
			this->dataGridView1->TabIndex = 1;
			// 
			// Column1
			// 
			this->Column1->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column1->HeaderText = L"00";
			this->Column1->Name = L"Column1";
			this->Column1->Width = 21;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column2->HeaderText = L"01";
			this->Column2->Name = L"Column2";
			this->Column2->Width = 21;
			// 
			// Column3
			// 
			this->Column3->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column3->HeaderText = L"02";
			this->Column3->Name = L"Column3";
			this->Column3->Width = 21;
			// 
			// Column4
			// 
			this->Column4->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column4->HeaderText = L"03";
			this->Column4->Name = L"Column4";
			this->Column4->Width = 21;
			// 
			// Column5
			// 
			this->Column5->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column5->HeaderText = L"04";
			this->Column5->Name = L"Column5";
			this->Column5->Width = 21;
			// 
			// Column6
			// 
			this->Column6->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column6->HeaderText = L"05";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 21;
			// 
			// Column7
			// 
			this->Column7->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column7->HeaderText = L"06";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 21;
			// 
			// Column8
			// 
			this->Column8->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column8->HeaderText = L"07";
			this->Column8->Name = L"Column8";
			this->Column8->Width = 21;
			// 
			// Column9
			// 
			this->Column9->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column9->HeaderText = L"08";
			this->Column9->Name = L"Column9";
			this->Column9->Width = 21;
			// 
			// Column10
			// 
			this->Column10->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column10->HeaderText = L"09";
			this->Column10->Name = L"Column10";
			this->Column10->Width = 21;
			// 
			// Column11
			// 
			this->Column11->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column11->HeaderText = L"0A";
			this->Column11->Name = L"Column11";
			this->Column11->Width = 21;
			// 
			// Column12
			// 
			this->Column12->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column12->HeaderText = L"0B";
			this->Column12->Name = L"Column12";
			this->Column12->Width = 21;
			// 
			// Column13
			// 
			this->Column13->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column13->HeaderText = L"0C";
			this->Column13->Name = L"Column13";
			this->Column13->Width = 21;
			// 
			// Column14
			// 
			this->Column14->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column14->HeaderText = L"0D";
			this->Column14->Name = L"Column14";
			this->Column14->Width = 21;
			// 
			// Column15
			// 
			this->Column15->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column15->HeaderText = L"0E";
			this->Column15->Name = L"Column15";
			this->Column15->Width = 21;
			// 
			// Column16
			// 
			this->Column16->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column16->HeaderText = L"0F";
			this->Column16->Name = L"Column16";
			this->Column16->Width = 21;
			// 
			// Column17
			// 
			this->Column17->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column17->HeaderText = L"10";
			this->Column17->Name = L"Column17";
			this->Column17->Width = 21;
			// 
			// Column18
			// 
			this->Column18->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column18->HeaderText = L"11";
			this->Column18->Name = L"Column18";
			this->Column18->Width = 21;
			// 
			// Column19
			// 
			this->Column19->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column19->HeaderText = L"12";
			this->Column19->Name = L"Column19";
			this->Column19->Width = 21;
			// 
			// Column20
			// 
			this->Column20->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column20->HeaderText = L"13";
			this->Column20->Name = L"Column20";
			this->Column20->Width = 21;
			// 
			// Column21
			// 
			this->Column21->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column21->HeaderText = L"14";
			this->Column21->Name = L"Column21";
			this->Column21->Width = 21;
			// 
			// Column22
			// 
			this->Column22->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column22->HeaderText = L"15";
			this->Column22->Name = L"Column22";
			this->Column22->Width = 21;
			// 
			// Column23
			// 
			this->Column23->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column23->HeaderText = L"16";
			this->Column23->Name = L"Column23";
			this->Column23->Width = 21;
			// 
			// Column24
			// 
			this->Column24->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column24->HeaderText = L"17";
			this->Column24->Name = L"Column24";
			this->Column24->Width = 21;
			// 
			// Column25
			// 
			this->Column25->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column25->HeaderText = L"18";
			this->Column25->Name = L"Column25";
			this->Column25->Width = 21;
			// 
			// Column26
			// 
			this->Column26->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column26->HeaderText = L"19";
			this->Column26->Name = L"Column26";
			this->Column26->Width = 21;
			// 
			// Column27
			// 
			this->Column27->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column27->HeaderText = L"1A";
			this->Column27->Name = L"Column27";
			this->Column27->Width = 21;
			// 
			// Column28
			// 
			this->Column28->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column28->HeaderText = L"1B";
			this->Column28->Name = L"Column28";
			this->Column28->Width = 21;
			// 
			// Column29
			// 
			this->Column29->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column29->HeaderText = L"1C";
			this->Column29->Name = L"Column29";
			this->Column29->Width = 21;
			// 
			// Column30
			// 
			this->Column30->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column30->HeaderText = L"1D";
			this->Column30->Name = L"Column30";
			this->Column30->Width = 21;
			// 
			// Column31
			// 
			this->Column31->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column31->HeaderText = L"1E";
			this->Column31->Name = L"Column31";
			this->Column31->Width = 21;
			// 
			// Column32
			// 
			this->Column32->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Column32->HeaderText = L"1F";
			this->Column32->Name = L"Column32";
			this->Column32->Width = 21;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(334, 170);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(36, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Frame";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(242, 110);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(54, 14);
			this->label9->TabIndex = 2;
			this->label9->Text = L"Operation";
			// 
			// maskedTextBox8
			// 
			this->maskedTextBox8->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox8->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox8->Location = System::Drawing::Point(304, 103);
			this->maskedTextBox8->Mask = L"<aa:aa";
			this->maskedTextBox8->Name = L"maskedTextBox8";
			this->maskedTextBox8->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox8->Size = System::Drawing::Size(47, 21);
			this->maskedTextBox8->TabIndex = 3;
			this->maskedTextBox8->Text = L"0001";
			this->maskedTextBox8->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(383, 14);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(68, 14);
			this->label10->TabIndex = 0;
			this->label10->Text = L"Sender MAC";
			// 
			// maskedTextBox9
			// 
			this->maskedTextBox9->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox9->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox9->Location = System::Drawing::Point(449, 7);
			this->maskedTextBox9->Mask = L"<aa:aa:aa:aa:aa:aa";
			this->maskedTextBox9->Name = L"maskedTextBox9";
			this->maskedTextBox9->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox9->Size = System::Drawing::Size(141, 21);
			this->maskedTextBox9->TabIndex = 3;
			this->maskedTextBox9->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(382, 40);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(89, 14);
			this->label11->TabIndex = 0;
			this->label11->Text = L"Sender prot addr";
			// 
			// maskedTextBox10
			// 
			this->maskedTextBox10->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox10->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox10->Location = System::Drawing::Point(473, 33);
			this->maskedTextBox10->Name = L"maskedTextBox10";
			this->maskedTextBox10->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox10->Size = System::Drawing::Size(141, 21);
			this->maskedTextBox10->TabIndex = 3;
			this->maskedTextBox10->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(383, 68);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(63, 14);
			this->label12->TabIndex = 0;
			this->label12->Text = L"Target MAC";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(383, 105);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(84, 14);
			this->label13->TabIndex = 0;
			this->label13->Text = L"Target prot addr";
			// 
			// maskedTextBox11
			// 
			this->maskedTextBox11->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox11->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox11->Location = System::Drawing::Point(449, 61);
			this->maskedTextBox11->Mask = L"<aa:aa:aa:aa:aa:aa";
			this->maskedTextBox11->Name = L"maskedTextBox11";
			this->maskedTextBox11->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox11->Size = System::Drawing::Size(141, 21);
			this->maskedTextBox11->TabIndex = 3;
			this->maskedTextBox11->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// maskedTextBox12
			// 
			this->maskedTextBox12->Culture = (gcnew System::Globalization::CultureInfo(L""));
			this->maskedTextBox12->Font = (gcnew System::Drawing::Font(L"Lucida Console", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->maskedTextBox12->Location = System::Drawing::Point(473, 98);
			this->maskedTextBox12->Name = L"maskedTextBox12";
			this->maskedTextBox12->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->maskedTextBox12->Size = System::Drawing::Size(141, 21);
			this->maskedTextBox12->TabIndex = 3;
			this->maskedTextBox12->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(624, 9);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(28, 14);
			this->label14->TabIndex = 0;
			this->label14->Text = L"CRC";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(715, 458);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->tabControl1);
			this->MaximumSize = System::Drawing::Size(731, 500);
			this->MinimumSize = System::Drawing::Size(100, 300);
			this->Name = L"Form1";
			this->Text = L"MyNet";
			this->tabControl1->ResumeLayout(false);
			this->tabARP->ResumeLayout(false);
			this->tabARP->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
};
}

