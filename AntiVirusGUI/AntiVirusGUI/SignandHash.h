#pragma once

namespace AntiVirusGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SignandHash
	/// </summary>
	public ref class SignandHash : public System::Windows::Forms::Form
	{
	public:
		SignandHash(void)
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
		~SignandHash()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ Filetype;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ VirusType;
	private: System::Windows::Forms::DataGridViewComboBoxColumn^ HashType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ HashContain;












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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->Filetype = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->VirusType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->HashType = (gcnew System::Windows::Forms::DataGridViewComboBoxColumn());
			this->HashContain = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Filetype,
					this->VirusType, this->HashType, this->HashContain
			});
			this->dataGridView1->Location = System::Drawing::Point(354, 38);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(444, 537);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(99, 133);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(120, 45);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Загрузить базу";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(99, 221);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(120, 46);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Сохранить базу";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// Filetype
			// 
			this->Filetype->HeaderText = L"Тип файла";
			this->Filetype->Items->AddRange(gcnew cli::array< System::Object^  >(5) { L"pe", L"com", L"exe", L"elf", L"java" });
			this->Filetype->Name = L"Filetype";
			this->Filetype->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Filetype->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// VirusType
			// 
			this->VirusType->HeaderText = L"Тип Вируса";
			this->VirusType->Name = L"VirusType";
			// 
			// HashType
			// 
			this->HashType->HeaderText = L"Тип хеша";
			this->HashType->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Сигнатура", L"sha256", L"md5" });
			this->HashType->Name = L"HashType";
			this->HashType->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->HashType->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			// 
			// HashContain
			// 
			this->HashContain->HeaderText = L"Содержимое хеша";
			this->HashContain->Name = L"HashContain";
			// 
			// SignandHash
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(955, 635);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"SignandHash";
			this->Text = L"Сигнатуры и Хеши";
			this->Load += gcnew System::EventHandler(this, &SignandHash::SignandHash_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void SignandHash_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
