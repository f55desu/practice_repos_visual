#pragma once
#include "geometry/figures/Prizm.h"
#include "geometry/Shape.h"

namespace JABA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Prizma_Form
	/// </summary>
	public ref class Prizma_Form : public System::Windows::Forms::Form
	{
	public:
		Peak** peaks;
		Shape* figure;
		double volume;
		double all_square;
		double brink;
		double a, b, h;

		Prizma_Form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Prizma_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ Result_Click;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;



	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ Height;
	private: System::Windows::Forms::TextBox^ Enter_Height;
	private: System::Windows::Forms::Label^ Side;
	private: System::Windows::Forms::TextBox^ Enter_Side;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::PictureBox^ pictureBox1;




	private: System::Windows::Forms::TextBox^ textBox23;

	private: System::Windows::Forms::TextBox^ textBox5;

	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox24;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::Label^ label31;
	private: System::Windows::Forms::Label^ label32;
	private: System::Windows::Forms::Label^ label33;
	private: System::Windows::Forms::Label^ label34;
	private: System::Windows::Forms::TextBox^ textBox26;
	private: System::Windows::Forms::TextBox^ textBox27;
	private: System::Windows::Forms::TextBox^ textBox28;
	private: System::Windows::Forms::Label^ label35;
	private: System::Windows::Forms::Label^ label36;
	private: System::Windows::Forms::Label^ label37;
	private: System::Windows::Forms::Label^ label38;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Prizma_Form::typeid));
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Result_Click = (gcnew System::Windows::Forms::Button());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->Height = (gcnew System::Windows::Forms::Label());
			this->Enter_Height = (gcnew System::Windows::Forms::TextBox());
			this->Side = (gcnew System::Windows::Forms::Label());
			this->Enter_Side = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(575, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 61);
			this->button2->TabIndex = 101;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Prizma_Form::Back_Click);
			// 
			// Result_Click
			// 
			this->Result_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Result_Click->Location = System::Drawing::Point(301, 380);
			this->Result_Click->Name = L"Result_Click";
			this->Result_Click->Size = System::Drawing::Size(241, 61);
			this->Result_Click->TabIndex = 99;
			this->Result_Click->Text = L"Рассчитать всё";
			this->Result_Click->UseVisualStyleBackColor = true;
			this->Result_Click->Click += gcnew System::EventHandler(this, &Prizma_Form::button1_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(266, 186);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 20);
			this->label9->TabIndex = 70;
			this->label9->Text = L"Точка А:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(489, 186);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 20);
			this->label8->TabIndex = 69;
			this->label8->Text = L"Z:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(417, 186);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 20);
			this->label7->TabIndex = 68;
			this->label7->Text = L"Y:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(351, 186);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 20);
			this->label6->TabIndex = 67;
			this->label6->Text = L"X:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(266, 141);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 20);
			this->label5->TabIndex = 63;
			this->label5->Text = L"Координаты точек:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(477, 107);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 62;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(266, 107);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 20);
			this->label4->TabIndex = 61;
			this->label4->Text = L"Площадь поверхности:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(625, 64);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 60;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(473, 67);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 59;
			this->label3->Text = L"Площадь грани:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(342, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 58;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(266, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 57;
			this->label2->Text = L"Объём:";
			// 
			// Height
			// 
			this->Height->AutoSize = true;
			this->Height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Height->Location = System::Drawing::Point(51, 186);
			this->Height->Name = L"Height";
			this->Height->Size = System::Drawing::Size(162, 25);
			this->Height->TabIndex = 56;
			this->Height->Text = L"Введите высоту";
			this->Height->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Enter_Height
			// 
			this->Enter_Height->Location = System::Drawing::Point(33, 229);
			this->Enter_Height->Name = L"Enter_Height";
			this->Enter_Height->Size = System::Drawing::Size(202, 22);
			this->Enter_Height->TabIndex = 55;
			this->Enter_Height->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Side
			// 
			this->Side->AutoSize = true;
			this->Side->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Side->Location = System::Drawing::Point(51, 27);
			this->Side->Name = L"Side";
			this->Side->Size = System::Drawing::Size(171, 25);
			this->Side->TabIndex = 56;
			this->Side->Text = L"Введите сторону";
			this->Side->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Enter_Side
			// 
			this->Enter_Side->Location = System::Drawing::Point(33, 67);
			this->Enter_Side->Name = L"Enter_Side";
			this->Enter_Side->Size = System::Drawing::Size(202, 22);
			this->Enter_Side->TabIndex = 53;
			this->Enter_Side->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(307, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(254, 32);
			this->label1->TabIndex = 52;
			this->label1->Text = L"Создание призмы\r\n";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(51, 98);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(165, 50);
			this->label26->TabIndex = 103;
			this->label26->Text = L"Введите другую \r\nсторону ";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(33, 151);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(202, 22);
			this->textBox19->TabIndex = 102;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(33, 257);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(147, 208);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 100;
			this->pictureBox1->TabStop = false;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(373, 186);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(36, 22);
			this->textBox23->TabIndex = 111;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(437, 186);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(36, 22);
			this->textBox5->TabIndex = 113;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &Prizma_Form::textBox5_TextChanged);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(508, 186);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(36, 22);
			this->textBox7->TabIndex = 115;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(508, 227);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(36, 22);
			this->textBox4->TabIndex = 122;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(437, 227);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(36, 22);
			this->textBox6->TabIndex = 121;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(373, 227);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(36, 22);
			this->textBox8->TabIndex = 120;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(266, 227);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 20);
			this->label10->TabIndex = 119;
			this->label10->Text = L"Точка B:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(489, 227);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 20);
			this->label11->TabIndex = 118;
			this->label11->Text = L"Z:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(417, 227);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 20);
			this->label12->TabIndex = 117;
			this->label12->Text = L"Y:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(351, 227);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 20);
			this->label13->TabIndex = 116;
			this->label13->Text = L"X:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(508, 273);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(36, 22);
			this->textBox9->TabIndex = 129;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(437, 273);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(36, 22);
			this->textBox10->TabIndex = 128;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(373, 273);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(36, 22);
			this->textBox11->TabIndex = 127;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(266, 273);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 20);
			this->label14->TabIndex = 126;
			this->label14->Text = L"Точка C:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(489, 273);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 20);
			this->label15->TabIndex = 125;
			this->label15->Text = L"Z:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(417, 273);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 20);
			this->label16->TabIndex = 124;
			this->label16->Text = L"Y:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(351, 273);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 20);
			this->label17->TabIndex = 123;
			this->label17->Text = L"X:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(508, 317);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(36, 22);
			this->textBox12->TabIndex = 136;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(437, 317);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(36, 22);
			this->textBox13->TabIndex = 135;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(373, 317);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(36, 22);
			this->textBox14->TabIndex = 134;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(266, 317);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 20);
			this->label18->TabIndex = 133;
			this->label18->Text = L"Точка D:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(489, 317);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 20);
			this->label19->TabIndex = 132;
			this->label19->Text = L"Z:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(417, 317);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 20);
			this->label20->TabIndex = 131;
			this->label20->Text = L"Y:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(351, 317);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 20);
			this->label21->TabIndex = 130;
			this->label21->Text = L"X:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(809, 186);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(36, 22);
			this->textBox15->TabIndex = 143;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(738, 186);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(36, 22);
			this->textBox16->TabIndex = 142;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(674, 186);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(36, 22);
			this->textBox17->TabIndex = 141;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(567, 186);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 20);
			this->label22->TabIndex = 140;
			this->label22->Text = L"Точка E:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(790, 186);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 20);
			this->label23->TabIndex = 139;
			this->label23->Text = L"Z:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(718, 186);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 20);
			this->label24->TabIndex = 138;
			this->label24->Text = L"Y:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(652, 186);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(25, 20);
			this->label25->TabIndex = 137;
			this->label25->Text = L"X:";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(809, 273);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(36, 22);
			this->textBox18->TabIndex = 150;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(738, 273);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(36, 22);
			this->textBox20->TabIndex = 149;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(674, 273);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(36, 22);
			this->textBox21->TabIndex = 148;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(567, 273);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(81, 20);
			this->label27->TabIndex = 147;
			this->label27->Text = L"Точка G:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(790, 273);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(23, 20);
			this->label28->TabIndex = 146;
			this->label28->Text = L"Z:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(718, 273);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 20);
			this->label29->TabIndex = 145;
			this->label29->Text = L"Y:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(652, 273);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(25, 20);
			this->label30->TabIndex = 144;
			this->label30->Text = L"X:";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(809, 227);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(36, 22);
			this->textBox22->TabIndex = 164;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(738, 227);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(36, 22);
			this->textBox24->TabIndex = 163;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(674, 227);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(36, 22);
			this->textBox25->TabIndex = 162;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(567, 227);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(78, 20);
			this->label31->TabIndex = 161;
			this->label31->Text = L"Точка F:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(790, 227);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(23, 20);
			this->label32->TabIndex = 160;
			this->label32->Text = L"Z:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(718, 227);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 20);
			this->label33->TabIndex = 159;
			this->label33->Text = L"Y:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(652, 227);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(25, 20);
			this->label34->TabIndex = 158;
			this->label34->Text = L"X:";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(809, 317);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(36, 22);
			this->textBox26->TabIndex = 157;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(738, 317);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(36, 22);
			this->textBox27->TabIndex = 156;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(674, 317);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(36, 22);
			this->textBox28->TabIndex = 155;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(567, 317);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(81, 20);
			this->label35->TabIndex = 154;
			this->label35->Text = L"Точка H:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(790, 317);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 20);
			this->label36->TabIndex = 153;
			this->label36->Text = L"Z:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(718, 317);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(24, 20);
			this->label37->TabIndex = 152;
			this->label37->Text = L"Y:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(652, 317);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(25, 20);
			this->label38->TabIndex = 151;
			this->label38->Text = L"X:";
			// 
			// Prizma_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 508);
			this->Controls->Add(this->textBox22);
			this->Controls->Add(this->textBox24);
			this->Controls->Add(this->textBox25);
			this->Controls->Add(this->label31);
			this->Controls->Add(this->label32);
			this->Controls->Add(this->label33);
			this->Controls->Add(this->label34);
			this->Controls->Add(this->textBox26);
			this->Controls->Add(this->textBox27);
			this->Controls->Add(this->textBox28);
			this->Controls->Add(this->label35);
			this->Controls->Add(this->label36);
			this->Controls->Add(this->label37);
			this->Controls->Add(this->label38);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->textBox20);
			this->Controls->Add(this->textBox21);
			this->Controls->Add(this->label27);
			this->Controls->Add(this->label28);
			this->Controls->Add(this->label29);
			this->Controls->Add(this->label30);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox23);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox19);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Result_Click);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->Height);
			this->Controls->Add(this->Enter_Height);
			this->Controls->Add(this->Side);
			this->Controls->Add(this->Enter_Side);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Prizma_Form";
			this->Text = L"Prism Dash";
			this->Load += gcnew System::EventHandler(this, &Prizma_Form::Prizma_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Prizma_Form_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Prizma_Form::Hide();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		a = Convert::ToDouble(Enter_Side->Text);
		b = Convert::ToDouble(textBox19->Text);
		h = Convert::ToDouble(Enter_Height->Text);

		figure = new Prizm(a, b, h);
		volume = figure->find_volume();
		all_square = figure->find_all_square();
		brink = figure->find_brink();
		peaks = figure->find_peaks();

		textBox1->Text = Convert::ToString(volume);
		textBox2->Text = Convert::ToString(all_square);
		textBox3->Text = Convert::ToString(brink);
		//A
		textBox23->Text = Convert::ToString(peaks[0]->get_x());
		textBox5->Text = Convert::ToString(peaks[0]->get_y());
		textBox7->Text = Convert::ToString(peaks[0]->get_z());
		//B
		textBox8->Text = Convert::ToString(peaks[1]->get_x());
		textBox6->Text = Convert::ToString(peaks[1]->get_y());
		textBox4->Text = Convert::ToString(peaks[1]->get_z());
		//C
		textBox11->Text = Convert::ToString(peaks[2]->get_x());
		textBox10->Text = Convert::ToString(peaks[2]->get_y());
		textBox9->Text = Convert::ToString(peaks[2]->get_z());
		//D
		textBox14->Text = Convert::ToString(peaks[3]->get_x());
		textBox13->Text = Convert::ToString(peaks[3]->get_y());
		textBox12->Text = Convert::ToString(peaks[3]->get_z());
		//E
		textBox17->Text = Convert::ToString(peaks[4]->get_x());
		textBox16->Text = Convert::ToString(peaks[4]->get_y());
		textBox15->Text = Convert::ToString(peaks[4]->get_z());
		//F
		textBox25->Text = Convert::ToString(peaks[5]->get_x());
		textBox24->Text = Convert::ToString(peaks[5]->get_y());
		textBox22->Text = Convert::ToString(peaks[5]->get_z());
		//G
		textBox21->Text = Convert::ToString(peaks[6]->get_x());
		textBox20->Text = Convert::ToString(peaks[6]->get_y());
		textBox18->Text = Convert::ToString(peaks[6]->get_z());
		//H
		textBox28->Text = Convert::ToString(peaks[7]->get_x());
		textBox27->Text = Convert::ToString(peaks[7]->get_y());
		textBox26->Text = Convert::ToString(peaks[7]->get_z());
	}
	catch (...)
	{
		MessageBox::Show("Ошибка, введите значения!");
	}
}
};
}
