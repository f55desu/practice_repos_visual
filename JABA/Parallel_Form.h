#pragma once
#include "geometry/figures/parallelepiped.h"
#include "geometry/Shape.h"

namespace JABA {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Parallel_Form
	/// </summary>
	public ref class Parallel_Form : public System::Windows::Forms::Form
	{
	public:
		Peak** peaks;
		Shape* figure;
		double volume;
		double all_square;
		double brink;
		double face;
		double facet;
		double a, b, h;
	public:
		Parallel_Form(void)
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
		~Parallel_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::Label^ label39;
	private: System::Windows::Forms::TextBox^ textBox30;
	private: System::Windows::Forms::Label^ label40;
	private: System::Windows::Forms::TextBox^ textBox31;
	private: System::Windows::Forms::Label^ label41;
	private: System::Windows::Forms::TextBox^ textBox29;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Parallel_Form::typeid));
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
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->label41 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(826, 257);
			this->textBox22->Name = L"textBox22";
			this->textBox22->ReadOnly = true;
			this->textBox22->Size = System::Drawing::Size(36, 22);
			this->textBox22->TabIndex = 306;
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(755, 257);
			this->textBox24->Name = L"textBox24";
			this->textBox24->ReadOnly = true;
			this->textBox24->Size = System::Drawing::Size(36, 22);
			this->textBox24->TabIndex = 305;
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(691, 257);
			this->textBox25->Name = L"textBox25";
			this->textBox25->ReadOnly = true;
			this->textBox25->Size = System::Drawing::Size(36, 22);
			this->textBox25->TabIndex = 304;
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label31->Location = System::Drawing::Point(573, 257);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(89, 20);
			this->label31->TabIndex = 303;
			this->label31->Text = L"Точка B1:";
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label32->Location = System::Drawing::Point(807, 257);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(23, 20);
			this->label32->TabIndex = 302;
			this->label32->Text = L"Z:";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label33->Location = System::Drawing::Point(735, 257);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(24, 20);
			this->label33->TabIndex = 301;
			this->label33->Text = L"Y:";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label34->Location = System::Drawing::Point(669, 257);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(25, 20);
			this->label34->TabIndex = 300;
			this->label34->Text = L"X:";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(826, 347);
			this->textBox26->Name = L"textBox26";
			this->textBox26->ReadOnly = true;
			this->textBox26->Size = System::Drawing::Size(36, 22);
			this->textBox26->TabIndex = 299;
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(755, 347);
			this->textBox27->Name = L"textBox27";
			this->textBox27->ReadOnly = true;
			this->textBox27->Size = System::Drawing::Size(36, 22);
			this->textBox27->TabIndex = 298;
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(691, 347);
			this->textBox28->Name = L"textBox28";
			this->textBox28->ReadOnly = true;
			this->textBox28->Size = System::Drawing::Size(36, 22);
			this->textBox28->TabIndex = 297;
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label35->Location = System::Drawing::Point(573, 347);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(90, 20);
			this->label35->TabIndex = 296;
			this->label35->Text = L"Точка D1:";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label36->Location = System::Drawing::Point(807, 347);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(23, 20);
			this->label36->TabIndex = 295;
			this->label36->Text = L"Z:";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label37->Location = System::Drawing::Point(735, 347);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(24, 20);
			this->label37->TabIndex = 294;
			this->label37->Text = L"Y:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label38->Location = System::Drawing::Point(669, 347);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(25, 20);
			this->label38->TabIndex = 293;
			this->label38->Text = L"X:";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(826, 303);
			this->textBox18->Name = L"textBox18";
			this->textBox18->ReadOnly = true;
			this->textBox18->Size = System::Drawing::Size(36, 22);
			this->textBox18->TabIndex = 292;
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(755, 303);
			this->textBox20->Name = L"textBox20";
			this->textBox20->ReadOnly = true;
			this->textBox20->Size = System::Drawing::Size(36, 22);
			this->textBox20->TabIndex = 291;
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(691, 303);
			this->textBox21->Name = L"textBox21";
			this->textBox21->ReadOnly = true;
			this->textBox21->Size = System::Drawing::Size(36, 22);
			this->textBox21->TabIndex = 290;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label27->Location = System::Drawing::Point(573, 303);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(89, 20);
			this->label27->TabIndex = 289;
			this->label27->Text = L"Точка C1:";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label28->Location = System::Drawing::Point(807, 303);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(23, 20);
			this->label28->TabIndex = 288;
			this->label28->Text = L"Z:";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label29->Location = System::Drawing::Point(735, 303);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(24, 20);
			this->label29->TabIndex = 287;
			this->label29->Text = L"Y:";
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label30->Location = System::Drawing::Point(669, 303);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(25, 20);
			this->label30->TabIndex = 286;
			this->label30->Text = L"X:";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(826, 216);
			this->textBox15->Name = L"textBox15";
			this->textBox15->ReadOnly = true;
			this->textBox15->Size = System::Drawing::Size(36, 22);
			this->textBox15->TabIndex = 285;
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(755, 216);
			this->textBox16->Name = L"textBox16";
			this->textBox16->ReadOnly = true;
			this->textBox16->Size = System::Drawing::Size(36, 22);
			this->textBox16->TabIndex = 284;
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(691, 216);
			this->textBox17->Name = L"textBox17";
			this->textBox17->ReadOnly = true;
			this->textBox17->Size = System::Drawing::Size(36, 22);
			this->textBox17->TabIndex = 283;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label22->Location = System::Drawing::Point(575, 216);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(88, 20);
			this->label22->TabIndex = 282;
			this->label22->Text = L"Точка A1:";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label23->Location = System::Drawing::Point(807, 216);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(23, 20);
			this->label23->TabIndex = 281;
			this->label23->Text = L"Z:";
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label24->Location = System::Drawing::Point(735, 216);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(24, 20);
			this->label24->TabIndex = 280;
			this->label24->Text = L"Y:";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label25->Location = System::Drawing::Point(669, 216);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(25, 20);
			this->label25->TabIndex = 279;
			this->label25->Text = L"X:";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(519, 347);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(36, 22);
			this->textBox12->TabIndex = 278;
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(448, 347);
			this->textBox13->Name = L"textBox13";
			this->textBox13->ReadOnly = true;
			this->textBox13->Size = System::Drawing::Size(36, 22);
			this->textBox13->TabIndex = 277;
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(384, 347);
			this->textBox14->Name = L"textBox14";
			this->textBox14->ReadOnly = true;
			this->textBox14->Size = System::Drawing::Size(36, 22);
			this->textBox14->TabIndex = 276;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(277, 347);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(81, 20);
			this->label18->TabIndex = 275;
			this->label18->Text = L"Точка D:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(500, 347);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(23, 20);
			this->label19->TabIndex = 274;
			this->label19->Text = L"Z:";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label20->Location = System::Drawing::Point(428, 347);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(24, 20);
			this->label20->TabIndex = 273;
			this->label20->Text = L"Y:";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label21->Location = System::Drawing::Point(362, 347);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(25, 20);
			this->label21->TabIndex = 272;
			this->label21->Text = L"X:";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(519, 303);
			this->textBox9->Name = L"textBox9";
			this->textBox9->ReadOnly = true;
			this->textBox9->Size = System::Drawing::Size(36, 22);
			this->textBox9->TabIndex = 271;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(448, 303);
			this->textBox10->Name = L"textBox10";
			this->textBox10->ReadOnly = true;
			this->textBox10->Size = System::Drawing::Size(36, 22);
			this->textBox10->TabIndex = 270;
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(384, 303);
			this->textBox11->Name = L"textBox11";
			this->textBox11->ReadOnly = true;
			this->textBox11->Size = System::Drawing::Size(36, 22);
			this->textBox11->TabIndex = 269;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label14->Location = System::Drawing::Point(277, 303);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(80, 20);
			this->label14->TabIndex = 268;
			this->label14->Text = L"Точка C:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label15->Location = System::Drawing::Point(500, 303);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(23, 20);
			this->label15->TabIndex = 267;
			this->label15->Text = L"Z:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label16->Location = System::Drawing::Point(428, 303);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(24, 20);
			this->label16->TabIndex = 266;
			this->label16->Text = L"Y:";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label17->Location = System::Drawing::Point(362, 303);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(25, 20);
			this->label17->TabIndex = 265;
			this->label17->Text = L"X:";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(519, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(36, 22);
			this->textBox4->TabIndex = 264;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(448, 257);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(36, 22);
			this->textBox6->TabIndex = 263;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(384, 257);
			this->textBox8->Name = L"textBox8";
			this->textBox8->ReadOnly = true;
			this->textBox8->Size = System::Drawing::Size(36, 22);
			this->textBox8->TabIndex = 262;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(277, 257);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(80, 20);
			this->label10->TabIndex = 261;
			this->label10->Text = L"Точка B:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(500, 257);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(23, 20);
			this->label11->TabIndex = 260;
			this->label11->Text = L"Z:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label12->Location = System::Drawing::Point(428, 257);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 20);
			this->label12->TabIndex = 259;
			this->label12->Text = L"Y:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label13->Location = System::Drawing::Point(362, 257);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(25, 20);
			this->label13->TabIndex = 258;
			this->label13->Text = L"X:";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(519, 216);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(36, 22);
			this->textBox7->TabIndex = 257;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(448, 216);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(36, 22);
			this->textBox5->TabIndex = 256;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(384, 216);
			this->textBox23->Name = L"textBox23";
			this->textBox23->ReadOnly = true;
			this->textBox23->Size = System::Drawing::Size(36, 22);
			this->textBox23->TabIndex = 255;
			// 
			// Back_Click
			// 
			this->Back_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Back_Click->Location = System::Drawing::Point(577, 409);
			this->Back_Click->Name = L"Back_Click";
			this->Back_Click->Size = System::Drawing::Size(241, 61);
			this->Back_Click->TabIndex = 254;
			this->Back_Click->Text = L"Назад";
			this->Back_Click->UseVisualStyleBackColor = true;
			this->Back_Click->Click += gcnew System::EventHandler(this, &Parallel_Form::Back_Click_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 276);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(200, 152);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 253;
			this->pictureBox1->TabStop = false;
			// 
			// Result_Click
			// 
			this->Result_Click->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Result_Click->Location = System::Drawing::Point(303, 409);
			this->Result_Click->Name = L"Result_Click";
			this->Result_Click->Size = System::Drawing::Size(241, 61);
			this->Result_Click->TabIndex = 252;
			this->Result_Click->Text = L"Рассчитать всё";
			this->Result_Click->UseVisualStyleBackColor = true;
			this->Result_Click->Click += gcnew System::EventHandler(this, &Parallel_Form::Result_Click_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(277, 216);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(80, 20);
			this->label9->TabIndex = 251;
			this->label9->Text = L"Точка А:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label8->Location = System::Drawing::Point(500, 216);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(23, 20);
			this->label8->TabIndex = 250;
			this->label8->Text = L"Z:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(428, 216);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(24, 20);
			this->label7->TabIndex = 249;
			this->label7->Text = L"Y:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(362, 216);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(25, 20);
			this->label6->TabIndex = 248;
			this->label6->Text = L"X:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->Location = System::Drawing::Point(279, 172);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(173, 20);
			this->label5->TabIndex = 247;
			this->label5->Text = L"Координаты точек:";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(491, 137);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(100, 22);
			this->textBox3->TabIndex = 246;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(280, 137);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(205, 20);
			this->label4->TabIndex = 245;
			this->label4->Text = L"Площадь поверхности:";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(423, 102);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(100, 22);
			this->textBox2->TabIndex = 244;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(279, 104);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(146, 20);
			this->label3->TabIndex = 243;
			this->label3->Text = L"Площадь грани:";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(355, 65);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(100, 22);
			this->textBox1->TabIndex = 242;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(279, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(70, 20);
			this->label2->TabIndex = 241;
			this->label2->Text = L"Объём:";
			// 
			// Side
			// 
			this->Side->AutoSize = true;
			this->Side->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Side->Location = System::Drawing::Point(33, 16);
			this->Side->Name = L"Side";
			this->Side->Size = System::Drawing::Size(171, 25);
			this->Side->TabIndex = 240;
			this->Side->Text = L"Введите сторону";
			this->Side->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Enter_Side
			// 
			this->Enter_Side->Location = System::Drawing::Point(15, 55);
			this->Enter_Side->Name = L"Enter_Side";
			this->Enter_Side->Size = System::Drawing::Size(202, 22);
			this->Enter_Side->TabIndex = 239;
			this->Enter_Side->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(258, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(392, 32);
			this->label1->TabIndex = 238;
			this->label1->Text = L"Создание параллелепипеда\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label26->Location = System::Drawing::Point(33, 85);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(165, 50);
			this->label26->TabIndex = 308;
			this->label26->Text = L"Введите другую \r\nсторону";
			this->label26->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(15, 137);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(202, 22);
			this->textBox19->TabIndex = 307;
			this->textBox19->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label39->Location = System::Drawing::Point(33, 179);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(162, 25);
			this->label39->TabIndex = 310;
			this->label39->Text = L"Введите высоту";
			this->label39->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(15, 218);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(202, 22);
			this->textBox29->TabIndex = 309;
			this->textBox29->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(768, 100);
			this->textBox30->Name = L"textBox30";
			this->textBox30->ReadOnly = true;
			this->textBox30->Size = System::Drawing::Size(100, 22);
			this->textBox30->TabIndex = 312;
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label40->Location = System::Drawing::Point(529, 102);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(233, 20);
			this->label40->TabIndex = 311;
			this->label40->Text = L"Площадь передней грани:";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(755, 67);
			this->textBox31->Name = L"textBox31";
			this->textBox31->ReadOnly = true;
			this->textBox31->Size = System::Drawing::Size(100, 22);
			this->textBox31->TabIndex = 314;
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label41->Location = System::Drawing::Point(530, 67);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(219, 20);
			this->label41->TabIndex = 313;
			this->label41->Text = L"Площадь верхней грани:";
			this->label41->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// Parallel_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 508);
			this->Controls->Add(this->textBox31);
			this->Controls->Add(this->label41);
			this->Controls->Add(this->textBox30);
			this->Controls->Add(this->label40);
			this->Controls->Add(this->label39);
			this->Controls->Add(this->textBox29);
			this->Controls->Add(this->label26);
			this->Controls->Add(this->textBox19);
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
			this->Name = L"Parallel_Form";
			this->Text = L"Parallelepiped Dash";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Result_Click_Click(System::Object^ sender, System::EventArgs^ e) 
{
	try 
	{
		a = Convert::ToDouble(Enter_Side->Text);
		b = Convert::ToDouble(textBox19->Text);
		h = Convert::ToDouble(textBox29->Text);

		figure = new parallelepiped(a, b, h);
		volume = figure->find_volume();
		face = figure->find_face();
		facet = figure->find_facet();
		all_square = figure->find_all_square();
		brink = figure->find_brink();
		peaks = figure->find_peaks();

		textBox1->Text = Convert::ToString(volume);
		textBox2->Text = Convert::ToString(all_square);
		textBox3->Text = Convert::ToString(brink);
		textBox30->Text = Convert::ToString(facet);
		textBox31->Text = Convert::ToString(face);

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
private: System::Void Back_Click_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Parallel_Form::Hide();
}
};
}
