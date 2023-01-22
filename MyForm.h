#pragma once
extern int snake_colour;
extern int field_colour;
extern int fruit_colour;
namespace kutsovaya_Trishin {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;

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

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ button1;



	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::RadioButton^ radioButton3;
	private: System::Windows::Forms::RadioButton^ radioButton4;
	private: System::Windows::Forms::RadioButton^ radioButton5;
	private: System::Windows::Forms::RadioButton^ radioButton6;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::RadioButton^ radioButton7;
	private: System::Windows::Forms::RadioButton^ radioButton8;
	private: System::Windows::Forms::RadioButton^ radioButton9;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::RadioButton^ radioButton3_field;

	private: System::Windows::Forms::RadioButton^ radioButton2_field;

	private: System::Windows::Forms::RadioButton^ radioButton1_field;

	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::RadioButton^ radioButton3_fruit;

	private: System::Windows::Forms::RadioButton^ radioButton2_fruit;

	private: System::Windows::Forms::RadioButton^ radioButton1_fruit;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton4 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton5 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton6 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton7 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton8 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton9 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3_field = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_field = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1_field = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3_fruit = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2_fruit = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1_fruit = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(55, 46);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(61, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Цвет змеи";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(55, 166);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(61, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Цвет Поля";
			this->label2->Click += gcnew System::EventHandler(this, &MyForm::label2_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(271, 46);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Цвет Фрукта";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(517, 319);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(45, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"В меню";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(507, 344);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 7;
			this->button1->Text = L"Меню";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(274, 120);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(56, 17);
			this->radioButton1->TabIndex = 13;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"Синий";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Location = System::Drawing::Point(274, 97);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(70, 17);
			this->radioButton2->TabIndex = 12;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"Зелёный";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(274, 74);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(70, 17);
			this->radioButton3->TabIndex = 11;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"Красный";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton4
			// 
			this->radioButton4->AutoSize = true;
			this->radioButton4->Location = System::Drawing::Point(58, 238);
			this->radioButton4->Name = L"radioButton4";
			this->radioButton4->Size = System::Drawing::Size(56, 17);
			this->radioButton4->TabIndex = 16;
			this->radioButton4->TabStop = true;
			this->radioButton4->Text = L"Синий";
			this->radioButton4->UseVisualStyleBackColor = true;
			// 
			// radioButton5
			// 
			this->radioButton5->AutoSize = true;
			this->radioButton5->Location = System::Drawing::Point(58, 215);
			this->radioButton5->Name = L"radioButton5";
			this->radioButton5->Size = System::Drawing::Size(70, 17);
			this->radioButton5->TabIndex = 15;
			this->radioButton5->TabStop = true;
			this->radioButton5->Text = L"Зелёный";
			this->radioButton5->UseVisualStyleBackColor = true;
			// 
			// radioButton6
			// 
			this->radioButton6->AutoSize = true;
			this->radioButton6->Location = System::Drawing::Point(58, 192);
			this->radioButton6->Name = L"radioButton6";
			this->radioButton6->Size = System::Drawing::Size(70, 17);
			this->radioButton6->TabIndex = 14;
			this->radioButton6->TabStop = true;
			this->radioButton6->Text = L"Красный";
			this->radioButton6->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton7);
			this->groupBox1->Controls->Add(this->radioButton8);
			this->groupBox1->Controls->Add(this->radioButton9);
			this->groupBox1->Location = System::Drawing::Point(12, 63);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(200, 100);
			this->groupBox1->TabIndex = 17;
			this->groupBox1->TabStop = false;
			// 
			// radioButton7
			// 
			this->radioButton7->AutoSize = true;
			this->radioButton7->Location = System::Drawing::Point(65, 65);
			this->radioButton7->Name = L"radioButton7";
			this->radioButton7->Size = System::Drawing::Size(56, 17);
			this->radioButton7->TabIndex = 13;
			this->radioButton7->TabStop = true;
			this->radioButton7->Text = L"Синий";
			this->radioButton7->UseVisualStyleBackColor = true;
			this->radioButton7->Click += gcnew System::EventHandler(this, &MyForm::radioButton7_Click);
			// 
			// radioButton8
			// 
			this->radioButton8->AutoSize = true;
			this->radioButton8->Location = System::Drawing::Point(65, 42);
			this->radioButton8->Name = L"radioButton8";
			this->radioButton8->Size = System::Drawing::Size(70, 17);
			this->radioButton8->TabIndex = 12;
			this->radioButton8->TabStop = true;
			this->radioButton8->Text = L"Зелёный";
			this->radioButton8->UseVisualStyleBackColor = true;
			this->radioButton8->Click += gcnew System::EventHandler(this, &MyForm::radioButton8_Click);
			// 
			// radioButton9
			// 
			this->radioButton9->AutoSize = true;
			this->radioButton9->Location = System::Drawing::Point(65, 19);
			this->radioButton9->Name = L"radioButton9";
			this->radioButton9->Size = System::Drawing::Size(70, 17);
			this->radioButton9->TabIndex = 11;
			this->radioButton9->TabStop = true;
			this->radioButton9->Text = L"Красный";
			this->radioButton9->UseVisualStyleBackColor = true;
			this->radioButton9->Click += gcnew System::EventHandler(this, &MyForm::radioButton9_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->radioButton3_field);
			this->groupBox2->Controls->Add(this->radioButton2_field);
			this->groupBox2->Controls->Add(this->radioButton1_field);
			this->groupBox2->Location = System::Drawing::Point(12, 182);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(200, 100);
			this->groupBox2->TabIndex = 18;
			this->groupBox2->TabStop = false;
			// 
			// radioButton3_field
			// 
			this->radioButton3_field->AutoSize = true;
			this->radioButton3_field->Location = System::Drawing::Point(65, 65);
			this->radioButton3_field->Name = L"radioButton3_field";
			this->radioButton3_field->Size = System::Drawing::Size(56, 17);
			this->radioButton3_field->TabIndex = 13;
			this->radioButton3_field->TabStop = true;
			this->radioButton3_field->Text = L"Синий";
			this->radioButton3_field->UseVisualStyleBackColor = true;
			this->radioButton3_field->Click += gcnew System::EventHandler(this, &MyForm::radioButton3_field_Click);
			// 
			// radioButton2_field
			// 
			this->radioButton2_field->AutoSize = true;
			this->radioButton2_field->Location = System::Drawing::Point(65, 42);
			this->radioButton2_field->Name = L"radioButton2_field";
			this->radioButton2_field->Size = System::Drawing::Size(70, 17);
			this->radioButton2_field->TabIndex = 12;
			this->radioButton2_field->TabStop = true;
			this->radioButton2_field->Text = L"Зелёный";
			this->radioButton2_field->UseVisualStyleBackColor = true;
			this->radioButton2_field->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_field_Click);
			// 
			// radioButton1_field
			// 
			this->radioButton1_field->AutoSize = true;
			this->radioButton1_field->Location = System::Drawing::Point(65, 19);
			this->radioButton1_field->Name = L"radioButton1_field";
			this->radioButton1_field->Size = System::Drawing::Size(70, 17);
			this->radioButton1_field->TabIndex = 11;
			this->radioButton1_field->TabStop = true;
			this->radioButton1_field->Text = L"Красный";
			this->radioButton1_field->UseVisualStyleBackColor = true;
			this->radioButton1_field->Click += gcnew System::EventHandler(this, &MyForm::radioButton1_field_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->radioButton3_fruit);
			this->groupBox3->Controls->Add(this->radioButton2_fruit);
			this->groupBox3->Controls->Add(this->radioButton1_fruit);
			this->groupBox3->Location = System::Drawing::Point(231, 63);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(200, 100);
			this->groupBox3->TabIndex = 19;
			this->groupBox3->TabStop = false;
			// 
			// radioButton3_fruit
			// 
			this->radioButton3_fruit->AutoSize = true;
			this->radioButton3_fruit->Location = System::Drawing::Point(65, 65);
			this->radioButton3_fruit->Name = L"radioButton3_fruit";
			this->radioButton3_fruit->Size = System::Drawing::Size(56, 17);
			this->radioButton3_fruit->TabIndex = 13;
			this->radioButton3_fruit->TabStop = true;
			this->radioButton3_fruit->Text = L"Синий";
			this->radioButton3_fruit->UseVisualStyleBackColor = true;
			this->radioButton3_fruit->Click += gcnew System::EventHandler(this, &MyForm::radioButton3_fruit_Click);
			// 
			// radioButton2_fruit
			// 
			this->radioButton2_fruit->AutoSize = true;
			this->radioButton2_fruit->Location = System::Drawing::Point(65, 42);
			this->radioButton2_fruit->Name = L"radioButton2_fruit";
			this->radioButton2_fruit->Size = System::Drawing::Size(70, 17);
			this->radioButton2_fruit->TabIndex = 12;
			this->radioButton2_fruit->TabStop = true;
			this->radioButton2_fruit->Text = L"Зелёный";
			this->radioButton2_fruit->UseVisualStyleBackColor = true;
			this->radioButton2_fruit->Click += gcnew System::EventHandler(this, &MyForm::radioButton2_fruit_Click);
			// 
			// radioButton1_fruit
			// 
			this->radioButton1_fruit->AutoSize = true;
			this->radioButton1_fruit->Location = System::Drawing::Point(65, 19);
			this->radioButton1_fruit->Name = L"radioButton1_fruit";
			this->radioButton1_fruit->Size = System::Drawing::Size(70, 17);
			this->radioButton1_fruit->TabIndex = 11;
			this->radioButton1_fruit->TabStop = true;
			this->radioButton1_fruit->Text = L"Красный";
			this->radioButton1_fruit->UseVisualStyleBackColor = true;
			this->radioButton1_fruit->Click += gcnew System::EventHandler(this, &MyForm::radioButton1_fruit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(612, 392);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->radioButton4);
			this->Controls->Add(this->radioButton5);
			this->Controls->Add(this->radioButton6);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"MyForm";
			this->Text = L"Настройки";
			this->Activated += gcnew System::EventHandler(this, &MyForm::MyForm_Activated);
			this->Load += gcnew System::EventHandler(this, &MyForm::Help_note_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void checkedListBox2_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Help_note_Load(System::Object^ sender, System::EventArgs^ e) {
		radioButton9->Checked = true;
		radioButton2_field->Checked = true;
		radioButton3_fruit->Checked = true;

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Owner->Show();
	}
private: System::Void checkedListBox1_ItemCheck(System::Object^ sender, System::Windows::Forms::ItemCheckEventArgs^ e) {

}
private: System::Void radioButton9_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton9->Checked=true;
	snake_colour = 1;
}
private: System::Void radioButton8_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton8->Checked = true;
	snake_colour = 2;
}
private: System::Void radioButton7_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton7->Checked = true;
	snake_colour = 3;
}
private: System::Void radioButton1_fruit_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton1_fruit->Checked = true;
	fruit_colour = 1;
}
private: System::Void radioButton2_fruit_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton2_fruit->Checked = true;
	fruit_colour = 2;
}
private: System::Void radioButton3_fruit_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton3_fruit->Checked = true;
	fruit_colour = 3;
}
private: System::Void radioButton1_field_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton1_field->Checked = true;
	field_colour = 1;
}
private: System::Void radioButton2_field_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton2_field->Checked = true;
	field_colour = 2;
}
private: System::Void radioButton3_field_Click(System::Object^ sender, System::EventArgs^ e) {
	radioButton3_field->Checked = true;
	field_colour = 3;
}
private: System::Void MyForm_Activated(System::Object^ sender, System::EventArgs^ e) {
	switch (snake_colour)
	{
	case 1:
		radioButton9->Checked = true;
		break;
	case 2:
		radioButton8->Checked = true;
		break;
	case 3:
		radioButton7->Checked = true;
		break;
	default:
		break;

	}
	switch (fruit_colour)
	{
	case 1:
		radioButton1_fruit->Checked = true;
		break;
	case 2:
		radioButton2_fruit->Checked = true;
		break;
	case 3:
		radioButton3_fruit->Checked = true;
		break;
	default:
		break;
	}
	switch (field_colour)
	{
	case 1:
		radioButton1_field->Checked = true;
		break;
	case 2:
		radioButton2_field->Checked = true;
		break;
	case 3:
		radioButton3_field->Checked = true;
		break;
	default:
		break;
	}

}
};
}
