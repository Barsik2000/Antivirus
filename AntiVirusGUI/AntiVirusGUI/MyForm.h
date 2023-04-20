#pragma once
#include "SignandHash.h"
#include <stdio.h>
namespace AntiVirusGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button7;
	protected:
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker2;
	private: System::Windows::Forms::DateTimePicker^ dateTimePicker1;
	private: System::Windows::Forms::Button^ Hashbtn;

	protected:















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
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->dateTimePicker2 = (gcnew System::Windows::Forms::DateTimePicker());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->Hashbtn = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(64, 267);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(163, 52);
			this->button7->TabIndex = 58;
			this->button7->Text = L"Запланировать сканирование";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(233, 168);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(163, 65);
			this->button6->TabIndex = 57;
			this->button6->Text = L"Остановить мониторинг";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(64, 168);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(163, 65);
			this->button5->TabIndex = 56;
			this->button5->Text = L"Запустить мониторинг директории";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(233, 72);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(163, 58);
			this->button4->TabIndex = 55;
			this->button4->Text = L"Остановить сканирование";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(290, 479);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(141, 60);
			this->button3->TabIndex = 54;
			this->button3->Text = L"Дописать log файл";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(143, 479);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(141, 60);
			this->button2->TabIndex = 53;
			this->button2->Text = L"Создать log файл";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(64, 72);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(163, 58);
			this->button1->TabIndex = 52;
			this->button1->Text = L"Сканировать элемент";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(445, 72);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(555, 383);
			this->richTextBox1->TabIndex = 51;
			this->richTextBox1->Text = L"";
			// 
			// dateTimePicker2
			// 
			this->dateTimePicker2->Format = System::Windows::Forms::DateTimePickerFormat::Time;
			this->dateTimePicker2->Location = System::Drawing::Point(231, 299);
			this->dateTimePicker2->Name = L"dateTimePicker2";
			this->dateTimePicker2->ShowUpDown = true;
			this->dateTimePicker2->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker2->TabIndex = 50;
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Location = System::Drawing::Point(231, 273);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 20);
			this->dateTimePicker1->TabIndex = 49;
			// 
			// Hashbtn
			// 
			this->Hashbtn->Location = System::Drawing::Point(874, 571);
			this->Hashbtn->Name = L"Hashbtn";
			this->Hashbtn->Size = System::Drawing::Size(178, 27);
			this->Hashbtn->TabIndex = 59;
			this->Hashbtn->Text = L"Открыть Сигнатуры и Хеши";
			this->Hashbtn->UseVisualStyleBackColor = true;
			this->Hashbtn->Click += gcnew System::EventHandler(this, &MyForm::Hashbtn_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1064, 610);
			this->Controls->Add(this->Hashbtn);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->dateTimePicker2);
			this->Controls->Add(this->dateTimePicker1);
			this->Name = L"MyForm";
			this->Text = L"Antivirus";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		bool form2 = true;
		SignandHash^ f2 = gcnew SignandHash();
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void Hashbtn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (form2) {
		f2->Close();
		form2 = false;
	}

		form2 = true;
		f2 = gcnew SignandHash();
		f2->Show();
	
	/*SignandHash^ f2 = gcnew SignandHash();
	if (!f2->Visible) {
		//SignandHash^ f2 = gcnew SignandHash();
		//form2 = true;

		f2->Show(); // Shows Form2
	}
//	else f2->Hide();*/
}
	private: System::Void MyForm_Close(System::Object^ sender, System::EventArgs^ e) {
		f2->Close();
	}

};
}
