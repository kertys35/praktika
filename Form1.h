#pragma once
#include "MyForm.h"
#include "Help_note.h"
#include "gameplay.h"

int snake_colour;
int field_colour;
int fruit_colour;

namespace kutsovaya_Trishin {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Zusammenfassung für Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Konstruktorcode hier hinzufügen.
			//
		}

	protected:
		/// <summary>
		/// Verwendete Ressourcen bereinigen.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button_play;
	protected:

	protected:
	private: System::ComponentModel::BackgroundWorker^ backgroundWorker1;
	private: System::Windows::Forms::Button^ button_help;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_settings;

	private:
		/// <summary>
		/// Erforderliche Designervariable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Erforderliche Methode für die Designerunterstützung.
		/// Der Inhalt der Methode darf nicht mit dem Code-Editor geändert werden.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button_play = (gcnew System::Windows::Forms::Button());
			this->backgroundWorker1 = (gcnew System::ComponentModel::BackgroundWorker());
			this->button_help = (gcnew System::Windows::Forms::Button());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_settings = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button_play
			// 
			this->button_play->Location = System::Drawing::Point(296, 60);
			this->button_play->Name = L"button_play";
			this->button_play->Size = System::Drawing::Size(136, 49);
			this->button_play->TabIndex = 0;
			this->button_play->Text = L"Èãðàòü";
			this->button_play->UseVisualStyleBackColor = true;
			this->button_play->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button_help
			// 
			this->button_help->Location = System::Drawing::Point(296, 150);
			this->button_help->Name = L"button_help";
			this->button_help->Size = System::Drawing::Size(136, 54);
			this->button_help->TabIndex = 1;
			this->button_help->Text = L"Ñïðàâêà";
			this->button_help->UseVisualStyleBackColor = true;
			this->button_help->Click += gcnew System::EventHandler(this, &Form1::button_help_Click);
			// 
			// button_exit
			// 
			this->button_exit->Location = System::Drawing::Point(296, 317);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(136, 47);
			this->button_exit->TabIndex = 2;
			this->button_exit->Text = L"Âûõîä";
			this->button_exit->UseVisualStyleBackColor = true;
			this->button_exit->Click += gcnew System::EventHandler(this, &Form1::button_exit_Click);
			// 
			// button_settings
			// 
			this->button_settings->Location = System::Drawing::Point(296, 236);
			this->button_settings->Name = L"button_settings";
			this->button_settings->Size = System::Drawing::Size(136, 47);
			this->button_settings->TabIndex = 3;
			this->button_settings->Text = L"Íàñòðîéêè";
			this->button_settings->UseVisualStyleBackColor = true;
			this->button_settings->Click += gcnew System::EventHandler(this, &Form1::button_settings_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(749, 533);
			this->Controls->Add(this->button_settings);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->button_help);
			this->Controls->Add(this->button_play);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		gameplay^ c = gcnew gameplay();
		c->Show();
		c->Owner = this;
		this->Hide();
	}
	private: System::Void button_settings_Click(System::Object^ sender, System::EventArgs^ e) {
		MyForm^ c = gcnew MyForm();
		c->Show();
		c->Owner = this;
		this->Hide();
	}
private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button_help_Click(System::Object^ sender, System::EventArgs^ e) {
	Help_note^ c = gcnew Help_note();
	c->Show();
}
private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
	 snake_colour=1;
	 field_colour=2;
	 fruit_colour=3;
}
};
}
