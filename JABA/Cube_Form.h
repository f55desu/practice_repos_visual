#pragma once
#include "geometry/figures/Cube.h"
#include "geometry/Shape.h"


namespace JABA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Cube_Form
	/// </summary>
	public ref class Cube_Form : public System::Windows::Forms::Form
	{
	public:
		Peak** peaks;
		Shape* figure;
		double volume;
		double all_square;
		double brink;
		double a;

		Cube_Form(void)
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
		~Cube_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox22;
	protected:
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
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label28;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Label^ label30;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::Button^ Back_Click;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
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
	private: System::Windows::Forms::Label^ Side;
	private: System::Windows::Forms::TextBox^ Enter_Side;
	private: System::Windows::Forms::Label^ label1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Cube_Form::typeid));
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
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->Back_Click = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
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
			this->Side = (gcnew System::Windows::Forms::Label());
			this->Enter_Side = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(822, 255);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(36, 22);
			this->textBox22->TabIndex = 237;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(751, 255);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(36, 22);
			this->textBox24->TabIndex = 236;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(687, 255);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(36, 22);
			this->textBox25->TabIndex = 235;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(569, 255);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(89, 20);
			this->label31->TabIndex = 234;
			this->label31->Text = L"Точка B1:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(803, 255);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(23, 20);
			this->label32->TabIndex = 233;
			this->label32->Text = L"Z:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(731, 255);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 20);
			this->label33->TabIndex = 232;
			this->label33->Text = L"Y:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(665, 255);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(25, 20);
			this->label34->TabIndex = 231;
			this->label34->Text = L"X:";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(822, 345);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(36, 22);
			this->textBox26->TabIndex = 230;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(751, 345);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(36, 22);
			this->textBox27->TabIndex = 229;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(687, 345);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(36, 22);
			this->textBox28->TabIndex = 228;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(569, 345);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(90, 20);
			this->label35->TabIndex = 227;
			this->label35->Text = L"Точка D1:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(803, 345);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 20);
			this->label36->TabIndex = 226;
			this->label36->Text = L"Z:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(731, 345);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(24, 20);
			this->label37->TabIndex = 225;
			this->label37->Text = L"Y:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(665, 345);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(25, 20);
			this->label38->TabIndex = 224;
			this->label38->Text = L"X:";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(822, 301);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(36, 22);
			this->textBox18->TabIndex = 223;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(751, 301);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(36, 22);
			this->textBox20->TabIndex = 222;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(687, 301);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(36, 22);
			this->textBox21->TabIndex = 221;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(569, 301);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 20);
			this->label27->TabIndex = 220;
			this->label27->Text = L"Точка C1:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(803, 301);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(23, 20);
			this->label28->TabIndex = 219;
			this->label28->Text = L"Z:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(731, 301);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 20);
			this->label29->TabIndex = 218;
			this->label29->Text = L"Y:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(665, 301);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(25, 20);
			this->label30->TabIndex = 217;
			this->label30->Text = L"X:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(822, 214);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(36, 22);
			this->textBox15->TabIndex = 216;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(751, 214);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(36, 22);
			this->textBox16->TabIndex = 215;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(687, 214);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(36, 22);
			this->textBox17->TabIndex = 214;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(571, 214);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(88, 20);
			this->label22->TabIndex = 213;
			this->label22->Text = L"Точка A1:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(803, 214);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 20);
			this->label23->TabIndex = 212;
			this->label23->Text = L"Z:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(731, 214);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 20);
			this->label24->TabIndex = 211;
			this->label24->Text = L"Y:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(665, 214);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(25, 20);
			this->label25->TabIndex = 210;
			this->label25->Text = L"X:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(515, 345);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(36, 22);
			this->textBox12->TabIndex = 209;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(444, 345);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(36, 22);
			this->textBox13->TabIndex = 208;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(380, 345);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(36, 22);
			this->textBox14->TabIndex = 207;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(273, 345);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 20);
			this->label18->TabIndex = 206;
			this->label18->Text = L"Точка D:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(496, 345);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 20);
			this->label19->TabIndex = 205;
			this->label19->Text = L"Z:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(424, 345);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 20);
			this->label20->TabIndex = 204;
			this->label20->Text = L"Y:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(358, 345);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 20);
			this->label21->TabIndex = 203;
			this->label21->Text = L"X:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(515, 301);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(36, 22);
			this->textBox9->TabIndex = 202;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(444, 301);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(36, 22);
			this->textBox10->TabIndex = 201;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(380, 301);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(36, 22);
			this->textBox11->TabIndex = 200;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(273, 301);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 20);
			this->label14->TabIndex = 199;
			this->label14->Text = L"Точка C:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(496, 301);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 20);
			this->label15->TabIndex = 198;
			this->label15->Text = L"Z:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(424, 301);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 20);
			this->label16->TabIndex = 197;
			this->label16->Text = L"Y:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(358, 301);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 20);
			this->label17->TabIndex = 196;
			this->label17->Text = L"X:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(515, 255);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(36, 22);
			this->textBox4->TabIndex = 195;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(444, 255);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(36, 22);
			this->textBox6->TabIndex = 194;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(380, 255);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(36, 22);
			this->textBox8->TabIndex = 193;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(273, 255);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 20);
			this->label10->TabIndex = 192;
			this->label10->Text = L"Точка B:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(496, 255);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 20);
			this->label11->TabIndex = 191;
			this->label11->Text = L"Z:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(424, 255);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 20);
			this->label12->TabIndex = 190;
			this->label12->Text = L"Y:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(358, 255);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 20);
			this->label13->TabIndex = 189;
			this->label13->Text = L"X:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(515, 214);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(36, 22);
			this->textBox7->TabIndex = 188;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(444, 214);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(36, 22);
			this->textBox5->TabIndex = 187;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(380, 214);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(36, 22);
			this->textBox23->TabIndex = 186;
			// 
			// Back_Click
			// 
			this->Back_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back_Click->Location = System::Drawing::Point(573, 407);
			this->Back_Click->Name = L"Back_Click";
			this->Back_Click->Size = System::Drawing::Size(241, 61);
			this->Back_Click->TabIndex = 183;
			this->Back_Click->Text = L"Назад";
			this->Back_Click->UseVisualStyleBackColor = true;
			this->Back_Click->Click += gcnew System::EventHandler(this, &Cube_Form::Back_Click_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 214);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 178);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 182;
			this->pictureBox1->TabStop = false;
			// 
			// Result_Click
			// 
			this->Result_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Result_Click->Location = System::Drawing::Point(299, 407);
			this->Result_Click->Name = L"Result_Click";
			this->Result_Click->Size = System::Drawing::Size(241, 61);
			this->Result_Click->TabIndex = 181;
			this->Result_Click->Text = L"Рассчитать всё";
			this->Result_Click->UseVisualStyleBackColor = true;
			this->Result_Click->Click += gcnew System::EventHandler(this, &Cube_Form::Result_Click_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(273, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 20);
			this->label9->TabIndex = 180;
			this->label9->Text = L"Точка А:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(496, 214);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 20);
			this->label8->TabIndex = 179;
			this->label8->Text = L"Z:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(424, 214);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 20);
			this->label7->TabIndex = 178;
			this->label7->Text = L"Y:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(358, 214);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 20);
			this->label6->TabIndex = 177;
			this->label6->Text = L"X:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(275, 170);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 20);
			this->label5->TabIndex = 176;
			this->label5->Text = L"Координаты точек:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(484, 126);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 175;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(273, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 20);
			this->label4->TabIndex = 174;
			this->label4->Text = L"Площадь поверхности:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(632, 83);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 173;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(480, 86);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 172;
			this->label3->Text = L"Площадь грани:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(349, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 171;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(273, 86);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 170;
			this->label2->Text = L"Объём:";
			// 
			// Side
			// 
			this->Side->AutoSize = true;
			this->Side->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Side->Location = System::Drawing::Point(51, 86);
			this->Side->Name = L"Side";
			this->Side->Size = System::Drawing::Size(171, 25);
			this->Side->TabIndex = 167;
			this->Side->Text = L"Введите сторону";
			this->Side->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Enter_Side
			// 
			this->Enter_Side->Location = System::Drawing::Point(33, 125);
			this->Enter_Side->Name = L"Enter_Side";
			this->Enter_Side->Size = System::Drawing::Size(202, 22);
			this->Enter_Side->TabIndex = 166;
			this->Enter_Side->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(342, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(212, 32);
			this->label1->TabIndex = 165;
			this->label1->Text = L"Создание куба\r\n";
			this->label1->Click += gcnew System::EventHandler(this, &Cube_Form::label1_Click);
			// 
			// Cube_Form
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
			this->Controls->Add(this->Back_Click);
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
			this->Controls->Add(this->Side);
			this->Controls->Add(this->Enter_Side);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Cube Dash";
			this->Text = L"Cube Dash";
			this->Load += gcnew System::EventHandler(this, &Cube_Form::Cube_Form_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Back_Click_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Cube_Form::Hide();
}
private: System::Void Result_Click_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try
	{
		a = Convert::ToDouble(Enter_Side->Text);

		figure = new Cube(a);
		volume = figure->find_volume();
		all_square = figure->find_all_square();
		brink = figure->find_brink();
		peaks = figure->find_peaks();

		textBox1->Text = Convert::ToString(volume);
		textBox2->Text = Convert::ToString(brink);
		textBox3->Text = Convert::ToString(all_square);
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
		//A1
		textBox17->Text = Convert::ToString(peaks[4]->get_x());
		textBox16->Text = Convert::ToString(peaks[4]->get_y());
		textBox15->Text = Convert::ToString(peaks[4]->get_z());
		//B1
		textBox25->Text = Convert::ToString(peaks[5]->get_x());
		textBox24->Text = Convert::ToString(peaks[5]->get_y());
		textBox22->Text = Convert::ToString(peaks[5]->get_z());
		//C1
		textBox21->Text = Convert::ToString(peaks[6]->get_x());
		textBox20->Text = Convert::ToString(peaks[6]->get_y());
		textBox18->Text = Convert::ToString(peaks[6]->get_z());
		//D1
		textBox28->Text = Convert::ToString(peaks[7]->get_x());
		textBox27->Text = Convert::ToString(peaks[7]->get_y());
		textBox26->Text = Convert::ToString(peaks[7]->get_z());
	}
	catch (...)
	{
		MessageBox::Show("Ошибка, введите значения!");
	}
}
private: System::Void Cube_Form_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
