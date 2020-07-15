#pragma once
#include "Pyramid_Form.h"
#include "Prizma_Form.h"
#include "Cube_Form.h"
#include "Parallel_Form.h"

namespace JABA 
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class Practice_Form : public System::Windows::Forms::Form
	{
	public:
		Practice_Form(void)
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
		~Practice_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Practice_Form::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(332, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(232, 32);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Создание фигур\r\n";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(358, 93);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 51);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Пирамида\r\n";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Practice_Form::Pyramid_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(358, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 51);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Призма";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Practice_Form::Prizma_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(358, 239);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(162, 51);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Параллелепипед";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Practice_Form::Parallel_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(358, 314);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(162, 51);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Куб";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Practice_Form::Cube_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(358, 387);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(162, 51);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Выход";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Practice_Form::Exit_Click);
			// 
			// Practice_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(877, 508);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Practice_Form";
			this->Text = L"Geometry Dash";
			this->Load += gcnew System::EventHandler(this, &Practice_Form::Practice_Form_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
private: System::Void Pyramid_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Pyramid_Form^ f2 = gcnew Pyramid_Form(); //Объявляем форму для рассчета пирамиды
	//Practice_Form::Hide(); //Скрываем основную форму 
	f2->Show(); //Показываем её
}
private: System::Void Prizma_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Prizma_Form^ f3 = gcnew Prizma_Form();//Объявляем форму для рассчета пирамиды
	//Practice_Form::Hide(); //Скрываем основную форму 
	f3->Show(); //Показываем её
}
private: System::Void Parallel_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Parallel_Form^ f4 = gcnew Parallel_Form();//Объявляем форму для рассчета пирамиды
	//Practice_Form::Hide(); //Скрываем основную форму 
	f4->Show(); //Показываем её
}
private: System::Void Cube_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Cube_Form^ f5 = gcnew Cube_Form();//Объявляем форму для рассчета пирамиды
	//Practice_Form::Hide(); //Скрываем основную форму 
	f5->Show(); //Показываем её
}
private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) 
{
	Application::Exit();
}
private: System::Void Practice_Form_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
