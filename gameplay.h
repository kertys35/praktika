#pragma once
#include <locale.h>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <sstream>
#include <string>
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

	/// <summary>
	/// —водка дл€ gameplay
	/// </summary>
	//// лассы дл€ змейки////////////

	


	/// ///////////////////////////////

	public ref class gameplay : public System::Windows::Forms::Form
	{
	public:
		gameplay(void);
	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~gameplay()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label5;

	private: System::Windows::Forms::PictureBox^ upperborder;

	private: System::Windows::Forms::PictureBox^ rightborder;
	private: System::Windows::Forms::PictureBox^ lowerborder;


	private: System::Windows::Forms::PictureBox^ leftborder;

	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Label^ label_score_num;
	private: System::Windows::Forms::Panel^ panel1;



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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->upperborder = (gcnew System::Windows::Forms::PictureBox());
			this->rightborder = (gcnew System::Windows::Forms::PictureBox());
			this->lowerborder = (gcnew System::Windows::Forms::PictureBox());
			this->leftborder = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->label_score_num = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upperborder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightborder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lowerborder))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftborder))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label5->Location = System::Drawing::Point(510, 9);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"¬аш счЄт";
			// 
			// upperborder
			// 
			this->upperborder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->upperborder->Location = System::Drawing::Point(-5, 40);
			this->upperborder->Name = L"upperborder";
			this->upperborder->Size = System::Drawing::Size(583, 11);
			this->upperborder->TabIndex = 14;
			this->upperborder->TabStop = false;
			// 
			// rightborder
			// 
			this->rightborder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->rightborder->Location = System::Drawing::Point(561, 42);
			this->rightborder->Name = L"rightborder";
			this->rightborder->Size = System::Drawing::Size(17, 352);
			this->rightborder->TabIndex = 15;
			this->rightborder->TabStop = false;
			// 
			// lowerborder
			// 
			this->lowerborder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->lowerborder->Location = System::Drawing::Point(12, 372);
			this->lowerborder->Name = L"lowerborder";
			this->lowerborder->Size = System::Drawing::Size(559, 22);
			this->lowerborder->TabIndex = 16;
			this->lowerborder->TabStop = false;
			// 
			// leftborder
			// 
			this->leftborder->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->leftborder->Location = System::Drawing::Point(-5, 42);
			this->leftborder->Name = L"leftborder";
			this->leftborder->Size = System::Drawing::Size(23, 352);
			this->leftborder->TabIndex = 17;
			this->leftborder->TabStop = false;
			// 
			// timer1
			// 
			this->timer1->Tick += gcnew System::EventHandler(this, &gameplay::timer1_Tick);
			// 
			// label_score_num
			// 
			this->label_score_num->AutoSize = true;
			this->label_score_num->ForeColor = System::Drawing::SystemColors::MenuHighlight;
			this->label_score_num->Location = System::Drawing::Point(519, 31);
			this->label_score_num->Name = L"label_score_num";
			this->label_score_num->Size = System::Drawing::Size(13, 13);
			this->label_score_num->TabIndex = 18;
			this->label_score_num->Text = L"0";
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label_score_num);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(578, 51);
			this->panel1->TabIndex = 19;
			// 
			// gameplay
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(575, 393);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->leftborder);
			this->Controls->Add(this->lowerborder);
			this->Controls->Add(this->rightborder);
			this->Controls->Add(this->upperborder);
			this->Name = L"gameplay";
			this->Text = L"gameplay";
			this->Load += gcnew System::EventHandler(this, &gameplay::gameplay_Load);
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &gameplay::gameplay_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->upperborder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rightborder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->lowerborder))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->leftborder))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	/// <summary>
	/// данные
	/// </summary>
	private: PictureBox^ fruit;
	private: array<PictureBox^>^ snake;
	private: bool play;
	private: bool die;
	private: bool firstlaunch;
	private: int step=10;
	private: float updateinterval=100;
	private: int score=0;
	/// <summary>
	/// ћетоды
	/// </summary>
	private:void GenerateFruitPosition();

	private:void Eat();
	private:void Move();
	private:void EatYourself();
	private:void GameOver();
	private:void NewGame();
	private:void CheckBorders();
	/// <summary>
	/// ќтслеживание нажати€ клавиш
	/// </summary>

	private: System::Void gameplay_Load(System::Object^ sender, System::EventArgs^ e) {
	};
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void gameplay_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e);
	
private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e);


};
}