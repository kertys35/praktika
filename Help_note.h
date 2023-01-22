#pragma once
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
namespace kutsovaya_Trishin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

	/// <summary>
	/// —водка дл€ help_note
	/// </summary>
	public ref class Help_note : public System::Windows::Forms::Form
	{
	public:
		Help_note(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Help_note()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
	private: System::Windows::Forms::TextBox^ textBox1;

	protected:

	private: System::ComponentModel::IContainer^ components;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
			// 
			// textBox1
			// 
			this->textBox1->AllowDrop = true;
			this->textBox1->AutoCompleteMode = System::Windows::Forms::AutoCompleteMode::Append;
			this->textBox1->Location = System::Drawing::Point(-1, 0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->ScrollBars = System::Windows::Forms::ScrollBars::Both;
			this->textBox1->Size = System::Drawing::Size(525, 332);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Help_note::textBox1_TextChanged);
			// 
			// help_note
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(522, 330);
			this->Controls->Add(this->textBox1);
			this->Name = L"help_note";
			this->Text = L"—правка";
			this->Activated += gcnew System::EventHandler(this, &Help_note::help_note_Activated);
			this->Deactivate += gcnew System::EventHandler(this, &Help_note::help_note_Deactivate);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void help_note_Activated(System::Object^ sender, System::EventArgs^ e) {

			char* locale = setlocale(LC_ALL, "RUS");
			textBox1->Text = L"";
			if (IO::File::Exists("help.txt"))
			{
				StreamReader^ help = gcnew StreamReader("help.txt");
				textBox1->Text = help->ReadToEnd();

				help->Close();
			}
			else
				MessageBox::Show("‘айл справки не обнаружен.", "ќшибка", MessageBoxButtons::OK, MessageBoxIcon::Error);
		
	}
	private: System::Void help_note_Deactivate(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
