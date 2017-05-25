#pragma once

namespace Phone3 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Label^  Display;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  buttonRed;
	private: System::Windows::Forms::Button^  buttonYellow;
	private: System::Windows::Forms::Button^  buttonGreen;









	private: System::Windows::Forms::Button^  button7;

	private: System::Windows::Forms::Button^  buttonStar;
	private: System::Windows::Forms::Button^  button0;
	private: System::Windows::Forms::Button^  buttonDiez;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;
		int status;
#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->Display = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->buttonRed = (gcnew System::Windows::Forms::Button());
			this->buttonYellow = (gcnew System::Windows::Forms::Button());
			this->buttonGreen = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->buttonStar = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->buttonDiez = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(62, 31);
			this->button1->TabIndex = 0;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// Display
			// 
			this->Display->AutoEllipsis = true;
			this->Display->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Display->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->Display->Font = (gcnew System::Drawing::Font(L"Agency FB", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Display->ForeColor = System::Drawing::Color::Lime;
			this->Display->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Display->Location = System::Drawing::Point(1, 0);
			this->Display->Name = L"Display";
			this->Display->Size = System::Drawing::Size(228, 57);
			this->Display->TabIndex = 1;
			this->Display->Text = L"+380663262104";
			this->Display->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(80, 77);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(62, 31);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(148, 77);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(62, 31);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(12, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(62, 31);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(81, 115);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(62, 31);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(148, 114);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(62, 31);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(80, 151);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(62, 31);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(148, 151);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(62, 31);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// buttonRed
			// 
			this->buttonRed->BackColor = System::Drawing::Color::Red;
			this->buttonRed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonRed->Location = System::Drawing::Point(12, 225);
			this->buttonRed->Name = L"buttonRed";
			this->buttonRed->Size = System::Drawing::Size(62, 31);
			this->buttonRed->TabIndex = 10;
			this->buttonRed->Text = L"X";
			this->buttonRed->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonRed->UseVisualStyleBackColor = false;
			this->buttonRed->Click += gcnew System::EventHandler(this, &MyForm::buttonRed_Click);
			// 
			// buttonYellow
			// 
			this->buttonYellow->BackColor = System::Drawing::Color::Yellow;
			this->buttonYellow->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonYellow->Location = System::Drawing::Point(80, 225);
			this->buttonYellow->Name = L"buttonYellow";
			this->buttonYellow->Size = System::Drawing::Size(62, 31);
			this->buttonYellow->TabIndex = 11;
			this->buttonYellow->Text = L">";
			this->buttonYellow->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->buttonYellow->UseVisualStyleBackColor = false;
			this->buttonYellow->Click += gcnew System::EventHandler(this, &MyForm::buttonYellow_Click);
			// 
			// buttonGreen
			// 
			this->buttonGreen->BackColor = System::Drawing::Color::Lime;
			this->buttonGreen->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonGreen->Location = System::Drawing::Point(148, 225);
			this->buttonGreen->Name = L"buttonGreen";
			this->buttonGreen->Size = System::Drawing::Size(62, 31);
			this->buttonGreen->TabIndex = 12;
			this->buttonGreen->Text = L"V";
			this->buttonGreen->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->buttonGreen->UseVisualStyleBackColor = false;
			this->buttonGreen->Click += gcnew System::EventHandler(this, &MyForm::buttonGreen_Click);
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(12, 151);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(62, 31);
			this->button7->TabIndex = 13;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// buttonStar
			// 
			this->buttonStar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonStar->Location = System::Drawing::Point(12, 188);
			this->buttonStar->Name = L"buttonStar";
			this->buttonStar->Size = System::Drawing::Size(62, 31);
			this->buttonStar->TabIndex = 14;
			this->buttonStar->Text = L"*";
			this->buttonStar->UseVisualStyleBackColor = true;
			this->buttonStar->Click += gcnew System::EventHandler(this, &MyForm::buttonStar_Click);
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(80, 188);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(62, 31);
			this->button0->TabIndex = 15;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			this->button0->Click += gcnew System::EventHandler(this, &MyForm::button0_Click);
			// 
			// buttonDiez
			// 
			this->buttonDiez->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->buttonDiez->Location = System::Drawing::Point(148, 188);
			this->buttonDiez->Name = L"buttonDiez";
			this->buttonDiez->Size = System::Drawing::Size(62, 31);
			this->buttonDiez->TabIndex = 16;
			this->buttonDiez->Text = L"#";
			this->buttonDiez->UseVisualStyleBackColor = true;
			this->buttonDiez->Click += gcnew System::EventHandler(this, &MyForm::buttonDiez_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(225, 272);
			this->Controls->Add(this->buttonDiez);
			this->Controls->Add(this->button0);
			this->Controls->Add(this->buttonStar);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->buttonGreen);
			this->Controls->Add(this->buttonYellow);
			this->Controls->Add(this->buttonRed);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->Display);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"Phone";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
		status = 0;
		Display->Text = "";
	}
	private: System::Void buttonGreen_Click(System::Object^  sender, System::EventArgs^  e) {
		if (status==0) {
			status = 1;
			Display->Text = "Welcome!";
		}
		else if (Display->Text!="Welcome!") SendCall();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		DisplayNumber(1);
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		DisplayNumber(2);
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		DisplayNumber(3);
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e){
		DisplayNumber(4);
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	DisplayNumber(5);
}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		DisplayNumber(6);
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	DisplayNumber(7);
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	DisplayNumber(8);
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		DisplayNumber(9);
	}
	private: System::Void button0_Click(System::Object^  sender, System::EventArgs^  e) {
		DisplayNumber(0);
}
	private: void DisplayNumber(int n) {
		if (status != 0) {
			if (status == 1) Display->Text = "";
			status = 2;
			Display->Text = Display->Text + n;
		}
		else Display->Text = "Click V button";
	};
	private: System::Void buttonStar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (status != 0) {
			if (status == 1) Display->Text = "";
			status = 2;
			Display->Text = Display->Text + "*";
		}
		else Display->Text = "Click V button";
}
	private: System::Void buttonDiez_Click(System::Object^  sender, System::EventArgs^  e) {
		if (status != 0) {
			if (status == 1) Display->Text = "";
			status = 2;
			Display->Text = Display->Text + "#";
		}
		else Display->Text = "Click V button";
	}
	private: System::Void buttonRed_Click(System::Object^  sender, System::EventArgs^  e)
	{	
		if (status == 0) Display->Text = "Click V button";
		else {
			status = 0;
			Display->Text = "";
		}
	}
	private: System::Void buttonYellow_Click(System::Object^  sender, System::EventArgs^  e) {
		if (Display->Text->Length > 0) {
			status == 0 ? Display->Text = "Click V button" : Display->Text = Display->Text->Remove(Display->Text->Length - 1);
		}
	}
	private: void SendCall(){
		Display->Text = "Making Call...";
		};
		
};
};