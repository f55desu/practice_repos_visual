#pragma once
#include "geometry/Shape.h"
#include "geometry/figures/Pyramid.h"

namespace JABA 
{
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Pyramid_Form
	/// </summary>
	public ref class Pyramid_Form : public System::Windows::Forms::Form
	{
	public:

		Peak** peaks;
		Shape* figure;
		double volume;
		double all_square;
		double brink;
		double a, h;

		Pyramid_Form(void)
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
		~Pyramid_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ Enter_Side;
	private: System::Windows::Forms::Label^ Side;
	private: System::Windows::Forms::TextBox^ Enter_Height;
	private: System::Windows::Forms::Label^ Height;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button2;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Pyramid_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Enter_Side = (gcnew System::Windows::Forms::TextBox());
			this->Side = (gcnew System::Windows::Forms::Label());
			this->Enter_Height = (gcnew System::Windows::Forms::TextBox());
			this->Height = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(302, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(288, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Создание пирамиды\r\n";
			// 
			// Enter_Side
			// 
			this->Enter_Side->Location = System::Drawing::Point(29, 99);
			this->Enter_Side->Name = L"Enter_Side";
			this->Enter_Side->Size = System::Drawing::Size(202, 22);
			this->Enter_Side->TabIndex = 1;
			this->Enter_Side->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Side
			// 
			this->Side->AutoSize = true;
			this->Side->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Side->Location = System::Drawing::Point(51, 61);
			this->Side->Name = L"Side";
			this->Side->Size = System::Drawing::Size(171, 25);
			this->Side->TabIndex = 3;
			this->Side->Text = L"Введите сторону";
			this->Side->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Enter_Height
			// 
			this->Enter_Height->Location = System::Drawing::Point(29, 201);
			this->Enter_Height->Name = L"Enter_Height";
			this->Enter_Height->Size = System::Drawing::Size(202, 22);
			this->Enter_Height->TabIndex = 4;
			this->Enter_Height->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// Height
			// 
			this->Height->AutoSize = true;
			this->Height->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Height->Location = System::Drawing::Point(51, 164);
			this->Height->Name = L"Height";
			this->Height->Size = System::Drawing::Size(162, 25);
			this->Height->TabIndex = 5;
			this->Height->Text = L"Введите высоту";
			this->Height->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(326, 61);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Объём:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(402, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Pyramid_Form::textBox1_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(533, 61);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Площадь грани:";
			this->label3->Click += gcnew System::EventHandler(this, &Pyramid_Form::label3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(685, 58);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 10;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(326, 101);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 20);
			this->label4->TabIndex = 11;
			this->label4->Text = L"Площадь поверхности:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(537, 101);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 12;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(324, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 20);
			this->label5->TabIndex = 13;
			this->label5->Text = L"Координаты точек:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(355, 258);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(57, 22);
			this->textBox4->TabIndex = 14;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(355, 296);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(57, 22);
			this->textBox5->TabIndex = 15;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(355, 334);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(57, 22);
			this->textBox6->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(324, 258);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 20);
			this->label6->TabIndex = 17;
			this->label6->Text = L"X:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(325, 298);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 20);
			this->label7->TabIndex = 18;
			this->label7->Text = L"Y:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(326, 334);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 20);
			this->label8->TabIndex = 19;
			this->label8->Text = L"Z:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(326, 219);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 20);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Точка А:";
			this->label9->Click += gcnew System::EventHandler(this, &Pyramid_Form::label9_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(465, 258);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(57, 22);
			this->textBox9->TabIndex = 21;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(465, 296);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(57, 22);
			this->textBox8->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(465, 334);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(57, 22);
			this->textBox7->TabIndex = 23;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(434, 258);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 20);
			this->label13->TabIndex = 24;
			this->label13->Text = L"X:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(435, 298);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 20);
			this->label12->TabIndex = 25;
			this->label12->Text = L"Y:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(436, 334);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 20);
			this->label11->TabIndex = 26;
			this->label11->Text = L"Z:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(436, 219);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 20);
			this->label10->TabIndex = 27;
			this->label10->Text = L"Точка B:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(580, 258);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(57, 22);
			this->textBox12->TabIndex = 28;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(580, 296);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(57, 22);
			this->textBox11->TabIndex = 29;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(580, 334);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(57, 22);
			this->textBox10->TabIndex = 30;
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(549, 258);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 20);
			this->label17->TabIndex = 31;
			this->label17->Text = L"X:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(550, 298);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 20);
			this->label16->TabIndex = 32;
			this->label16->Text = L"Y:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(551, 334);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 20);
			this->label15->TabIndex = 33;
			this->label15->Text = L"Z:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(551, 219);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 20);
			this->label14->TabIndex = 34;
			this->label14->Text = L"Точка C:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(685, 258);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(57, 22);
			this->textBox15->TabIndex = 35;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(685, 296);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(57, 22);
			this->textBox14->TabIndex = 36;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(685, 334);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(57, 22);
			this->textBox13->TabIndex = 37;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(654, 258);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 20);
			this->label21->TabIndex = 38;
			this->label21->Text = L"X:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(655, 298);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 20);
			this->label20->TabIndex = 39;
			this->label20->Text = L"Y:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(656, 334);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 20);
			this->label19->TabIndex = 40;
			this->label19->Text = L"Z:";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(656, 219);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 20);
			this->label18->TabIndex = 41;
			this->label18->Text = L"Точка D:";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(799, 258);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(57, 22);
			this->textBox18->TabIndex = 42;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(799, 296);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(57, 22);
			this->textBox17->TabIndex = 43;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(799, 334);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(57, 22);
			this->textBox16->TabIndex = 44;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(768, 258);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(25, 20);
			this->label25->TabIndex = 45;
			this->label25->Text = L"X:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(769, 298);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 20);
			this->label24->TabIndex = 46;
			this->label24->Text = L"Y:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(770, 334);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 20);
			this->label23->TabIndex = 47;
			this->label23->Text = L"Z:";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(770, 219);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(79, 20);
			this->label22->TabIndex = 48;
			this->label22->Text = L"Точка S:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(333, 392);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(241, 61);
			this->button1->TabIndex = 49;
			this->button1->Text = L"Рассчитать всё";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Pyramid_Form::Result_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 245);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 208);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 50;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->Location = System::Drawing::Point(608, 392);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(241, 61);
			this->button2->TabIndex = 51;
			this->button2->Text = L"Назад";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Pyramid_Form::Back_Click);
			// 
			// Pyramid_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 508);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label22);
			this->Controls->Add(this->label23);
			this->Controls->Add(this->label24);
			this->Controls->Add(this->label25);
			this->Controls->Add(this->textBox16);
			this->Controls->Add(this->textBox17);
			this->Controls->Add(this->textBox18);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label20);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->textBox13);
			this->Controls->Add(this->textBox14);
			this->Controls->Add(this->textBox15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label16);
			this->Controls->Add(this->label17);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
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
			this->Name = L"Pyramid_Form";
			this->Text = L"Pyramid Dash";
			this->Load += gcnew System::EventHandler(this, &Pyramid_Form::Pyramid_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label9_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Result_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		a = Convert::ToDouble(Enter_Side->Text);
		h = Convert::ToDouble(Enter_Height->Text);

		figure = new Pyramid(a, h);
		volume = figure->find_volume();
		all_square = figure->find_all_square();
		brink = figure->find_brink();
		peaks = figure->find_peaks();

		textBox1->Text = Convert::ToString(volume);
		textBox2->Text = Convert::ToString(all_square);
		textBox3->Text = Convert::ToString(brink);
		//A
		textBox4->Text = Convert::ToString(peaks[0]->get_x());
		textBox5->Text = Convert::ToString(peaks[0]->get_y());
		textBox6->Text = Convert::ToString(peaks[0]->get_z());
		//B
		textBox9->Text = Convert::ToString(peaks[1]->get_x());
		textBox8->Text = Convert::ToString(peaks[1]->get_y());
		textBox7->Text = Convert::ToString(peaks[1]->get_z());
		//C
		textBox12->Text = Convert::ToString(peaks[2]->get_x());
		textBox11->Text = Convert::ToString(peaks[2]->get_y());
		textBox10->Text = Convert::ToString(peaks[2]->get_z());
		//D
		textBox15->Text = Convert::ToString(peaks[3]->get_x());
		textBox14->Text = Convert::ToString(peaks[3]->get_y());
		textBox13->Text = Convert::ToString(peaks[3]->get_z());
		//S
		textBox18->Text = Convert::ToString(peaks[4]->get_x());
		textBox17->Text = Convert::ToString(peaks[4]->get_y());
		textBox16->Text = Convert::ToString(peaks[4]->get_z());
	}
	catch (...)
	{
		MessageBox::Show("Ошибка, введите значения!");
	}
}
private: System::Void Pyramid_Form_Load(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Back_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Pyramid_Form::Hide();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) 
{

}
};
}
