#pragma once
#include <stdlib.h>

namespace Lab5 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Drawing2D;

	struct Drawing_list
	{
		int figure;
		int x1, y1, x2, y2;
		int red, green, blue;
		int filled;
		int currentLineWidth;
		struct Drawing_list* next;
	};

	/// <summary>
	/// Summary for Zavd1
	/// </summary>
	public ref class Zavd1 : public System::Windows::Forms::Form
	{
	public:
		String^ openedFileName;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::RadioButton^ btn_rectf;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::RadioButton^ btn_ellipsef;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::CheckBox^ checkBox1;
	public:

		   String^ openedFilePath;
		Zavd1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Zavd1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: Pen^ SolidPen;
	private: Pen^ DashedPen;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ CreateTxtFile;
	private: System::Windows::Forms::ToolStripMenuItem^ OpenTxtFile;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveTxtFile;
	private: System::Windows::Forms::ToolStripMenuItem^ SaveTxtFileAs;
	private: System::Windows::Forms::ToolStripMenuItem^ toolStripMenuItem2;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::NumericUpDown^ numericUpDown1;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::RadioButton^ btn_pen;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::RadioButton^ btn_ellipse;

	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::RadioButton^ btn_circle;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::RadioButton^ btn_dot;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::RadioButton^ btn_line;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::RadioButton^ btn_sqr;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::RadioButton^ btn_tri;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::RadioButton^ btn_rect;
	private: System::Windows::Forms::Label^ label12;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->toolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->CreateTxtFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->OpenTxtFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveTxtFile = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->SaveTxtFileAs = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripMenuItem2 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->btn_sqr = (gcnew System::Windows::Forms::RadioButton());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->btn_tri = (gcnew System::Windows::Forms::RadioButton());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->btn_ellipsef = (gcnew System::Windows::Forms::RadioButton());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->btn_rectf = (gcnew System::Windows::Forms::RadioButton());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->btn_rect = (gcnew System::Windows::Forms::RadioButton());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->btn_ellipse = (gcnew System::Windows::Forms::RadioButton());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->btn_circle = (gcnew System::Windows::Forms::RadioButton());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->btn_dot = (gcnew System::Windows::Forms::RadioButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->btn_line = (gcnew System::Windows::Forms::RadioButton());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->btn_pen = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->BackColor = System::Drawing::Color::SlateBlue;
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->toolStripMenuItem1,
					this->toolStripMenuItem2
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(734, 36);
			this->menuStrip1->TabIndex = 17;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// toolStripMenuItem1
			// 
			this->toolStripMenuItem1->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->toolStripMenuItem1->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->CreateTxtFile,
					this->OpenTxtFile, this->SaveTxtFile, this->SaveTxtFileAs
			});
			this->toolStripMenuItem1->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem1->ForeColor = System::Drawing::SystemColors::Control;
			this->toolStripMenuItem1->Name = L"toolStripMenuItem1";
			this->toolStripMenuItem1->Padding = System::Windows::Forms::Padding(25, 0, 4, 0);
			this->toolStripMenuItem1->Size = System::Drawing::Size(93, 32);
			this->toolStripMenuItem1->Text = L"Меню";
			// 
			// CreateTxtFile
			// 
			this->CreateTxtFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->CreateTxtFile->Name = L"CreateTxtFile";
			this->CreateTxtFile->Size = System::Drawing::Size(192, 22);
			this->CreateTxtFile->Text = L"Створити";
			this->CreateTxtFile->Click += gcnew System::EventHandler(this, &Zavd1::CreateTxtFile_Click);
			// 
			// OpenTxtFile
			// 
			this->OpenTxtFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->OpenTxtFile->Name = L"OpenTxtFile";
			this->OpenTxtFile->Size = System::Drawing::Size(192, 22);
			this->OpenTxtFile->Text = L"Відкрити";
			this->OpenTxtFile->Click += gcnew System::EventHandler(this, &Zavd1::OpenTxtFile_Click);
			// 
			// SaveTxtFile
			// 
			this->SaveTxtFile->Enabled = false;
			this->SaveTxtFile->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveTxtFile->Name = L"SaveTxtFile";
			this->SaveTxtFile->Size = System::Drawing::Size(192, 22);
			this->SaveTxtFile->Text = L"Зберегти";
			this->SaveTxtFile->Click += gcnew System::EventHandler(this, &Zavd1::SaveTxtFile_Click);
			// 
			// SaveTxtFileAs
			// 
			this->SaveTxtFileAs->Enabled = false;
			this->SaveTxtFileAs->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->SaveTxtFileAs->Name = L"SaveTxtFileAs";
			this->SaveTxtFileAs->Size = System::Drawing::Size(192, 22);
			this->SaveTxtFileAs->Text = L"Зберегти як...";
			this->SaveTxtFileAs->Click += gcnew System::EventHandler(this, &Zavd1::SaveTxtFileAs_Click);
			// 
			// toolStripMenuItem2
			// 
			this->toolStripMenuItem2->Alignment = System::Windows::Forms::ToolStripItemAlignment::Right;
			this->toolStripMenuItem2->BackColor = System::Drawing::Color::DarkSlateBlue;
			this->toolStripMenuItem2->Font = (gcnew System::Drawing::Font(L"Cascadia Code", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->toolStripMenuItem2->ForeColor = System::Drawing::SystemColors::Control;
			this->toolStripMenuItem2->Margin = System::Windows::Forms::Padding(0, 0, 7, 0);
			this->toolStripMenuItem2->Name = L"toolStripMenuItem2";
			this->toolStripMenuItem2->Size = System::Drawing::Size(84, 32);
			this->toolStripMenuItem2->Text = L"Вихід";
			this->toolStripMenuItem2->Click += gcnew System::EventHandler(this, &Zavd1::toolStripMenuItem2_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Location = System::Drawing::Point(72, 49);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(650, 650);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Zavd1::pictureBox1_Paint);
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Zavd1::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Zavd1::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Zavd1::pictureBox1_MouseUp);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->checkBox1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->btn_sqr);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->btn_tri);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->btn_ellipsef);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->btn_rectf);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->btn_rect);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->btn_ellipse);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->btn_circle);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->btn_dot);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->btn_line);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->btn_pen);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->button2);
			this->groupBox1->Controls->Add(this->numericUpDown1);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(8, 43);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(56, 656);
			this->groupBox1->TabIndex = 19;
			this->groupBox1->TabStop = false;
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->BackColor = System::Drawing::Color::Transparent;
			this->label15->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->Location = System::Drawing::Point(1, 368);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(55, 15);
			this->label15->TabIndex = 22;
			this->label15->Text = L"Градіент";
			this->label15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Enabled = false;
			this->checkBox1->Location = System::Drawing::Point(17, 386);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(15, 14);
			this->checkBox1->TabIndex = 21;
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->Location = System::Drawing::Point(4, 566);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(49, 15);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Товщина";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->Location = System::Drawing::Point(3, 238);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(49, 15);
			this->label11->TabIndex = 19;
			this->label11->Text = L"Квадрат";
			this->label11->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_sqr
			// 
			this->btn_sqr->AutoSize = true;
			this->btn_sqr->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_sqr->Location = System::Drawing::Point(17, 254);
			this->btn_sqr->Name = L"btn_sqr";
			this->btn_sqr->Size = System::Drawing::Size(14, 13);
			this->btn_sqr->TabIndex = 18;
			this->btn_sqr->TabStop = true;
			this->btn_sqr->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->Location = System::Drawing::Point(5, 206);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 15);
			this->label10->TabIndex = 19;
			this->label10->Text = L"Трикут";
			this->label10->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_tri
			// 
			this->btn_tri->AutoSize = true;
			this->btn_tri->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_tri->Location = System::Drawing::Point(17, 222);
			this->btn_tri->Name = L"btn_tri";
			this->btn_tri->Size = System::Drawing::Size(14, 13);
			this->btn_tri->TabIndex = 18;
			this->btn_tri->TabStop = true;
			this->btn_tri->UseVisualStyleBackColor = true;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::Transparent;
			this->label14->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(1, 271);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(49, 30);
			this->label14->TabIndex = 19;
			this->label14->Text = L" Еліпс \r\nзафар\r\n";
			this->label14->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_ellipsef
			// 
			this->btn_ellipsef->AutoSize = true;
			this->btn_ellipsef->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_ellipsef->Location = System::Drawing::Point(17, 304);
			this->btn_ellipsef->Name = L"btn_ellipsef";
			this->btn_ellipsef->Size = System::Drawing::Size(14, 13);
			this->btn_ellipsef->TabIndex = 18;
			this->btn_ellipsef->TabStop = true;
			this->btn_ellipsef->UseVisualStyleBackColor = true;
			this->btn_ellipsef->CheckedChanged += gcnew System::EventHandler(this, &Zavd1::radioButton1_CheckedChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->BackColor = System::Drawing::Color::Transparent;
			this->label13->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->Location = System::Drawing::Point(0, 319);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(55, 30);
			this->label13->TabIndex = 19;
			this->label13->Text = L"Прямокут\r\nзафар\r\n";
			this->label13->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_rectf
			// 
			this->btn_rectf->AutoSize = true;
			this->btn_rectf->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_rectf->Location = System::Drawing::Point(17, 352);
			this->btn_rectf->Name = L"btn_rectf";
			this->btn_rectf->Size = System::Drawing::Size(14, 13);
			this->btn_rectf->TabIndex = 18;
			this->btn_rectf->TabStop = true;
			this->btn_rectf->UseVisualStyleBackColor = true;
			this->btn_rectf->CheckedChanged += gcnew System::EventHandler(this, &Zavd1::radioButton1_CheckedChanged);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(0, 174);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(55, 15);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Прямокут";
			this->label9->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_rect
			// 
			this->btn_rect->AutoSize = true;
			this->btn_rect->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_rect->Location = System::Drawing::Point(17, 190);
			this->btn_rect->Name = L"btn_rect";
			this->btn_rect->Size = System::Drawing::Size(14, 13);
			this->btn_rect->TabIndex = 18;
			this->btn_rect->TabStop = true;
			this->btn_rect->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(6, 142);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(37, 15);
			this->label8->TabIndex = 17;
			this->label8->Text = L"Еліпс";
			this->label8->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_ellipse
			// 
			this->btn_ellipse->AutoSize = true;
			this->btn_ellipse->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_ellipse->Location = System::Drawing::Point(17, 158);
			this->btn_ellipse->Name = L"btn_ellipse";
			this->btn_ellipse->Size = System::Drawing::Size(14, 13);
			this->btn_ellipse->TabIndex = 16;
			this->btn_ellipse->TabStop = true;
			this->btn_ellipse->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(8, 110);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(31, 15);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Коло";
			this->label7->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// btn_circle
			// 
			this->btn_circle->AutoSize = true;
			this->btn_circle->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_circle->Location = System::Drawing::Point(17, 126);
			this->btn_circle->Name = L"btn_circle";
			this->btn_circle->Size = System::Drawing::Size(14, 13);
			this->btn_circle->TabIndex = 16;
			this->btn_circle->TabStop = true;
			this->btn_circle->UseVisualStyleBackColor = true;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(3, 78);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(49, 15);
			this->label6->TabIndex = 17;
			this->label6->Text = L"П.Лінія";
			this->label6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_dot
			// 
			this->btn_dot->AutoSize = true;
			this->btn_dot->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_dot->Location = System::Drawing::Point(17, 94);
			this->btn_dot->Name = L"btn_dot";
			this->btn_dot->Size = System::Drawing::Size(14, 13);
			this->btn_dot->TabIndex = 16;
			this->btn_dot->TabStop = true;
			this->btn_dot->UseVisualStyleBackColor = true;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(6, 45);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 15);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Лінія";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_line
			// 
			this->btn_line->AutoSize = true;
			this->btn_line->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_line->Location = System::Drawing::Point(17, 62);
			this->btn_line->Name = L"btn_line";
			this->btn_line->Size = System::Drawing::Size(14, 13);
			this->btn_line->TabIndex = 14;
			this->btn_line->TabStop = true;
			this->btn_line->UseVisualStyleBackColor = true;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(3, 11);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(49, 15);
			this->label4->TabIndex = 13;
			this->label4->Text = L"Пензель";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_pen
			// 
			this->btn_pen->AutoSize = true;
			this->btn_pen->CheckAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->btn_pen->Location = System::Drawing::Point(17, 29);
			this->btn_pen->Name = L"btn_pen";
			this->btn_pen->Size = System::Drawing::Size(14, 13);
			this->btn_pen->TabIndex = 12;
			this->btn_pen->TabStop = true;
			this->btn_pen->UseVisualStyleBackColor = true;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(12, 605);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(37, 15);
			this->label3->TabIndex = 11;
			this->label3->Text = L"Колір";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 472);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 15);
			this->label2->TabIndex = 10;
			this->label2->Text = L"Undo";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cascadia Code Light", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(11, 519);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(31, 15);
			this->label1->TabIndex = 9;
			this->label1->Text = L"Redo";
			this->label1->Click += gcnew System::EventHandler(this, &Zavd1::label1_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			this->button3->Location = System::Drawing::Point(14, 535);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(28, 28);
			this->button3->TabIndex = 8;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &Zavd1::button3_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			this->button2->Location = System::Drawing::Point(15, 488);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(28, 28);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &Zavd1::button2_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->Location = System::Drawing::Point(11, 582);
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(37, 20);
			this->numericUpDown1->TabIndex = 5;
			this->numericUpDown1->ValueChanged += gcnew System::EventHandler(this, &Zavd1::numericUpDown1_ValueChanged);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Black;
			this->button1->Location = System::Drawing::Point(14, 620);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(28, 28);
			this->button1->TabIndex = 3;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Zavd1::button1_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// Zavd1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(734, 711);
			this->ControlBox = false;
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(750, 750);
			this->MinimizeBox = false;
			this->Name = L"Zavd1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Pseudoshop";
			this->Load += gcnew System::EventHandler(this, &Zavd1::Zavd1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Pen^ MyPen;//створення пера чорного кольору
		Pen^ NewPen;
		Pen^ Eraser;
		Graphics^ MyGraphic; //створення об'єкта класу Graphics
		Bitmap^ bmp;
		int x1, y1;
		int width;
		int height;
		bool Created = false;
		bool Draw_ = false;
		TextBox^ textBox1;
		TextBox^ textBox2;
		Form^ form1;

		Drawing_list* head = NULL;
		void CreateNode(int figure, int x1, int y1, int x2, int y2, int red, int green, int blue, int currentLineWidth, int filled)
		{
			if (head == NULL)
			{
				head = (Drawing_list*)malloc(sizeof(Drawing_list));
				head->figure = figure;
				head->x1 = x1;
				head->x2 = x2;
				head->y1 = y1;
				head->y2 = y2;
				head->red = colorDialog1->Color.R;
				head->blue = colorDialog1->Color.B;
				head->green = colorDialog1->Color.G;
				head->filled = filled;
				head->currentLineWidth = currentLineWidth;
				head->next = NULL;
			}
			else
			{
				Drawing_list* tmp = (Drawing_list*)malloc(sizeof(Drawing_list));
				tmp->figure = figure;
				tmp->x1 = x1;
				tmp->x2 = x2;
				tmp->y1 = y1;
				tmp->y2 = y2;
				tmp->next = head;
				tmp->red = colorDialog1->Color.R;
				tmp->blue = colorDialog1->Color.B;
				tmp->green = colorDialog1->Color.G;
				tmp->currentLineWidth = currentLineWidth; // Присвойте тут значення
				tmp->filled = filled;
				head = tmp;
			}
		}

		void Delete_list()
		{
			Drawing_list* iter;
			while (head)
			{
				iter = head;
				head = head->next;
				free(iter);
			}
			head = NULL;
		}
		Drawing_list* redoHead = NULL;

		void Undo()
		{
			if (head == NULL)
				return; // Немає елементів для видалення

			Drawing_list* temp = head;
			head = head->next; // Переміщаємо голову наступного елемента

			// Додаємо видалений елемент до списку "redo"
			temp->next = redoHead;
			redoHead = temp;

			pictureBox1->Invalidate();
		}

		void Redo()
		{
			if (redoHead == NULL)
				return; // Немає елементів для повторного виконання

			Drawing_list* redoNode = redoHead;
			redoHead = redoHead->next;

			// Якщо "head" є порожнім, просто встановіть його на перший вузол зі списку "redo"
			if (head == NULL)
			{
				head = redoNode;
				head->next = NULL;
			}
			else
			{
				// Додаємо вузол зі списку "redo" в кінець списку "head"
				Drawing_list* iter = head;
				while (iter->next != NULL)
				{
					iter = iter->next;
				}
				iter->next = redoNode;
				redoNode->next = NULL;
			}

			pictureBox1->Invalidate();
		}

		void Draw_figures()
		{
			SolidBrush^ brush;
			Drawing_list* iter = head;
			array<Single>^ temp0 = { 5.0F, 5.0F, 5.0F, 5.0F };
			while (iter)
			{
				Color color = Color::FromArgb(iter->red, iter->green, iter->blue);
				switch (iter->figure)
				{
				case -1:
					MyGraphic->DrawLine(gcnew Pen(color, iter->currentLineWidth), iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 0:
					MyGraphic->DrawRectangle(gcnew Pen(color, iter->currentLineWidth), iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 1:
					MyGraphic->DrawEllipse(gcnew Pen(color, iter->currentLineWidth), iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 2:
					NewPen = gcnew Pen(color, iter->currentLineWidth);
					NewPen->DashPattern = temp0;
					MyGraphic->DrawLine(NewPen, iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 3:
					MyGraphic->DrawLine(gcnew Pen(color, iter->currentLineWidth), iter->x1, iter->y1, iter->x2, iter->y2);
					break;
				case 4:
					MyGraphic->DrawRectangle(gcnew Pen(color, iter->currentLineWidth), iter->x1, iter->y1, iter->x2 - iter->x1, iter->y2 - iter->y1);
					brush = gcnew SolidBrush(Color::FromArgb(iter->red, iter->green, iter->blue));
					MyGraphic->FillRectangle(brush, iter->x1, iter->y1, iter->x2 - iter->x1, iter->y2 - iter->y1);
					delete brush;
					break;
				case 5:
					MyGraphic->DrawEllipse(gcnew Pen(color, iter->currentLineWidth), iter->x1, iter->y1, iter->x2 - iter->x1, iter->y2 - iter->y1);
					brush = gcnew SolidBrush(Color::FromArgb(iter->red, iter->green, iter->blue));
					MyGraphic->FillEllipse(brush, iter->x1, iter->y1, iter->x2 - iter->x1, iter->y2 - iter->y1);
					delete brush;
					break;
				case 6:
				{
					Color startColor = Color::Red;
					Color endColor = Color::Violet;
					int width = iter->x2 - iter->x1;
					int height = iter->y2 - iter->y1;
					if (width > 0 && height > 0) {
						Rectangle rect = Rectangle(iter->x1, iter->y1, width, height);
						LinearGradientBrush^ gradientBrush = gcnew LinearGradientBrush(rect, startColor, endColor, LinearGradientMode::ForwardDiagonal);
						MyGraphic->FillRectangle(gradientBrush, rect);
						delete gradientBrush;
					}
					break;
				}
				default:
					break;
				}
				iter = iter->next;
			}
		}

	private: System::Void toolStripMenuItem2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (Created == true) {
			x1 = e->X;
			y1 = e->Y;
			Draw_ = true;
		}
	}

	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		Draw_ = false;
		if (btn_line->Checked) {
			MyGraphic->DrawLine(MyPen, x1, y1, e->X, e->Y);
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(-1, x1, y1, e->X, e->Y, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_ellipse->Checked) {
			MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->Y - y1);
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(1, x1, y1, e->X - x1, e->Y - y1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_circle->Checked) {
			MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->X - x1);
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(1, x1, y1, e->X - x1, e->X - x1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_rect->Checked) {
			MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->Y - y1);
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(0, x1, y1, e->X - x1, e->Y - y1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_tri->Checked) {
			Color lineColor = button1->BackColor;
			MyGraphic->DrawLine(MyPen, x1, e->Y, (x1 + e->X) / 2, y1);
			MyGraphic->DrawLine(MyPen, x1, e->Y, x1, y1);
			MyGraphic->DrawLine(MyPen, x1, y1, (x1 + e->X) / 2, y1);
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(-1, x1, e->Y, (x1 + e->X) / 2, y1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
			CreateNode(-1, x1, e->Y, x1, y1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
			CreateNode(-1, x1, y1, (x1 + e->X) / 2, y1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_sqr->Checked) {
			MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->X - x1);
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(0, x1, y1, e->X - x1, e->X - x1, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_dot->Checked) {
			MyGraphic->DrawLine(NewPen, x1, y1, e->X, e->Y);
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(2, x1, y1, e->X, e->Y, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
		}
		if (btn_rectf->Checked) {
			if (checkBox1->Checked) {
				Color startColor = Color::Red;
				Color endColor = Color::Violet;
				int width = Math::Max(1, e->X - x1);
				int height = Math::Max(1, e->Y - y1);
				if (width > 0 && height > 0) {
					Rectangle rect(x1, y1, width, height);
					LinearGradientBrush^ gradientBrush = gcnew LinearGradientBrush(rect, startColor, endColor, LinearGradientMode::ForwardDiagonal);
					MyGraphic->FillRectangle(gradientBrush, rect);
					MyGraphic->DrawRectangle(gcnew Pen(Color::Black), rect);
					Color lineColor = button1->BackColor;
					int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
					CreateNode(6, x1, y1, e->X, e->Y, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 1);
				}
			}
			else {
				Color lineColor = button1->BackColor;
				int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
				CreateNode(4, x1, y1, e->X, e->Y, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 1);
			}
		}
		if (btn_ellipsef->Checked) {
			Color lineColor = button1->BackColor;
			int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
			CreateNode(5, x1, y1, e->X, e->Y, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 1);
		}
		pictureBox1->Invalidate();
	}

	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (Draw_ == true) {
			MyGraphic->Clear(Color::White);
			if (btn_line->Checked == true) {
				MyGraphic->DrawLine(MyPen, x1, y1, e->X, e->Y);
			}

			if (btn_ellipse->Checked == true) MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->Y - y1);

			if (btn_circle->Checked == true) MyGraphic->DrawEllipse(MyPen, x1, y1, e->X - x1, e->X - x1);

			if (btn_rect->Checked == true) MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->Y - y1);

			if (btn_tri->Checked == true) {
				MyGraphic->DrawLine(MyPen, x1, e->Y, (x1 + e->X) / 2, y1);
				MyGraphic->DrawLine(MyPen, x1, e->Y, x1, y1);
				MyGraphic->DrawLine(MyPen, x1, y1, (x1 + e->X) / 2, y1);
			}

			if (btn_sqr->Checked == true) MyGraphic->DrawRectangle(MyPen, x1, y1, e->X - x1, e->X - x1);

			if (btn_dot->Checked == true) {
				MyGraphic->DrawLine(NewPen, x1, y1, e->X, e->Y);
			}

			if (btn_rectf->Checked == true) {
				if (checkBox1->Checked) {
					if (e->X != x1 && e->Y != y1) { 
						Color startColor = Color::Red;
						Color endColor = Color::Violet;
						Rectangle rect(x1, y1, e->X - x1, e->Y - y1);
						LinearGradientBrush^ gradientBrush = gcnew LinearGradientBrush(rect, startColor, endColor, LinearGradientMode::ForwardDiagonal);
						MyGraphic->FillRectangle(gradientBrush, rect);
					}
				}
				else {
					SolidBrush^ brush = gcnew SolidBrush(MyPen->Color);
					MyGraphic->FillRectangle(brush, x1, y1, e->X - x1, e->Y - y1);
					delete brush;
				}
			}

			if (btn_ellipsef->Checked == true) {
				SolidBrush^ brush = gcnew SolidBrush(MyPen->Color);
				MyGraphic->FillEllipse(brush, x1, y1, e->X - x1, e->Y - y1);
				delete brush;
			}

			if (btn_pen->Checked == true) {
				PointF point1 = Point(x1, y1);
				PointF point2 = Point(e->Location);
				MyGraphic->DrawLine(MyPen, point1, point2);
				Color lineColor = button1->BackColor;
				int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
				CreateNode(-1, x1, y1, e->X, e->Y, lineColor.R, lineColor.G, lineColor.B, currentLineWidth, 0);
				x1 = e->X;
				y1 = e->Y;
			}

			Draw_figures();
			pictureBox1->Invalidate();
		}
	}

	private: System::Void pictureBox1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: System::Void CreateTxtFile_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Enabled = true;
		openedFileName = nullptr;
		this->SaveTxtFile->Enabled = true;
		this->SaveTxtFileAs->Enabled = true;
		this->pictureBox1->Enabled = true;
		this->Text = L"Pseudoshop - Новий (Не збережено)";
		Delete_list();
		height = 650;
		width = 650;
		bmp = gcnew System::Drawing::Bitmap(width, height); // створення нової бітової
		pictureBox1->Width = width; // задаємо розміри pictureBox
		pictureBox1->Height = height;
		pictureBox1->Image = bmp; // завантаження в pictureBox створеної бітової карти
		MyGraphic = System::Drawing::Graphics::FromImage(pictureBox1->Image); //підготовка
		MyGraphic->Clear(Color::White);
		Created = true;
		pictureBox1->Invalidate();
	}
	private: System::Void Zavd1_Load(System::Object^ sender, System::EventArgs^ e) {
		MyPen = gcnew Pen(Color::Black);
		NewPen = gcnew Pen(Color::Black);
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		colorDialog1->ShowDialog();
		NewPen->Color = colorDialog1->Color;
		MyPen->Color = colorDialog1->Color;
		button1->BackColor = colorDialog1->Color;
		pictureBox1->Invalidate();
	}

	private: System::Void numericUpDown1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		int currentLineWidth = Convert::ToInt32(numericUpDown1->Value);
		MyPen->Width = currentLineWidth;
		NewPen->Width = currentLineWidth;
		pictureBox1->Invalidate();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Undo();
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		Redo();
	}
	private: System::Void OpenTxtFile_Click(System::Object^ sender, System::EventArgs^ e) {
		groupBox1->Enabled = true;
		this->SaveTxtFile->Enabled = true;
		this->SaveTxtFileAs->Enabled = true;
		this->pictureBox1->Enabled = true;
		Delete_list();
		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog();
		openFileDialog1->Filter = "BMP Images (*.bmp)|*.bmp|All Files (*.*)|*.*";
		openFileDialog1->FilterIndex = 1;
		openFileDialog1->RestoreDirectory = true;
		if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			openedFileName = openFileDialog1->FileName;
			openedFilePath = System::IO::Path::GetFileName(openedFileName);
			this->Text = "Pseudoshop - " + openedFilePath;
			Image^ loadedImage = Image::FromFile(openedFileName);
			bmp = gcnew Bitmap(loadedImage->Width, loadedImage->Height);
			Graphics^ g = Graphics::FromImage(bmp);
			g->DrawImage(loadedImage, Point(0, 0));
			pictureBox1->Image = bmp;
			MyGraphic = g; // Зберегти посилання на графічний контекст
			delete loadedImage;
			Created = true;
			pictureBox1->Invalidate();
		}
	}

	private: System::Void SaveTxtFile_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "BMP Images (*.bmp)|*.bmp|All Files (*.*)|*.*";
		if (!String::IsNullOrEmpty(openedFileName)) {
			pictureBox1->Image->Save(openedFileName, System::Drawing::Imaging::ImageFormat::Bmp);
		}
		else if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ fileName = saveFileDialog1->FileName;
			pictureBox1->Image->Save(fileName, System::Drawing::Imaging::ImageFormat::Bmp);
			openedFileName = fileName;
			openedFilePath = System::IO::Path::GetFileName(openedFileName);
			this->Text = "Pseudoshop - " + openedFilePath;
		}
	}

	private: System::Void SaveTxtFileAs_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "BMP Images (*.bmp)|*.bmp|All Files (*.*)|*.*";
		if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ fileName = saveFileDialog1->FileName;
			pictureBox1->Image->Save(fileName, System::Drawing::Imaging::ImageFormat::Bmp);
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		checkBox1->Enabled = btn_rectf->Checked;
		if (!btn_rectf->Checked) {
			checkBox1->Checked = false;
		}
	}
};
}
