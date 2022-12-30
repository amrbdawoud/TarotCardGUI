#pragma once
#include "Reading.h"

namespace WinFormGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TarotCardSelect
	/// </summary>
	public ref class TarotCardSelect : public System::Windows::Forms::Form
	{
	public:
		TarotCardSelect(void)
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
		~TarotCardSelect()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button12;
	private: System::Windows::Forms::Button^ button22;
	private: System::Windows::Forms::Button^ button33;
	private: System::Windows::Forms::Button^ button44;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;




	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TarotCardSelect::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button22 = (gcnew System::Windows::Forms::Button());
			this->button33 = (gcnew System::Windows::Forms::Button());
			this->button44 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(111, 36);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(458, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Choose Tarot Cards";
			// 
			// button1
			// 
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(72, 228);
			this->button1->Margin = System::Windows::Forms::Padding(4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(157, 219);
			this->button1->TabIndex = 1;
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TarotCardSelect::button1_Click);
			// 
			// button2
			// 
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(237, 228);
			this->button2->Margin = System::Windows::Forms::Padding(4);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(157, 219);
			this->button2->TabIndex = 2;
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TarotCardSelect::button2_Click);
			// 
			// button3
			// 
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->Location = System::Drawing::Point(403, 228);
			this->button3->Margin = System::Windows::Forms::Padding(4);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(157, 219);
			this->button3->TabIndex = 3;
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TarotCardSelect::button3_Click);
			// 
			// button4
			// 
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->Location = System::Drawing::Point(568, 228);
			this->button4->Margin = System::Windows::Forms::Padding(4);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(157, 219);
			this->button4->TabIndex = 4;
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TarotCardSelect::button4_Click);
			// 
			// button12
			// 
			this->button12->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button12.Image")));
			this->button12->Location = System::Drawing::Point(72, 228);
			this->button12->Margin = System::Windows::Forms::Padding(4);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(135, 219);
			this->button12->TabIndex = 5;
			this->button12->UseVisualStyleBackColor = true;
			// 
			// button22
			// 
			this->button22->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button22.Image")));
			this->button22->Location = System::Drawing::Point(239, 228);
			this->button22->Margin = System::Windows::Forms::Padding(4);
			this->button22->Name = L"button22";
			this->button22->Size = System::Drawing::Size(133, 219);
			this->button22->TabIndex = 6;
			this->button22->UseVisualStyleBackColor = true;
			// 
			// button33
			// 
			this->button33->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button33.Image")));
			this->button33->Location = System::Drawing::Point(404, 228);
			this->button33->Margin = System::Windows::Forms::Padding(4);
			this->button33->Name = L"button33";
			this->button33->Size = System::Drawing::Size(139, 219);
			this->button33->TabIndex = 7;
			this->button33->UseVisualStyleBackColor = true;
			// 
			// button44
			// 
			this->button44->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button44.Image")));
			this->button44->Location = System::Drawing::Point(568, 228);
			this->button44->Margin = System::Windows::Forms::Padding(4);
			this->button44->Name = L"button44";
			this->button44->Size = System::Drawing::Size(139, 219);
			this->button44->TabIndex = 8;
			this->button44->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(13, 508);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(99, 41);
			this->button5->TabIndex = 9;
			this->button5->Text = L"Back";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &TarotCardSelect::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(716, 508);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(99, 41);
			this->button6->TabIndex = 10;
			this->button6->Text = L"Next";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &TarotCardSelect::button6_Click);
			// 
			// TarotCardSelect
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(827, 561);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button44);
			this->Controls->Add(this->button33);
			this->Controls->Add(this->button22);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"TarotCardSelect";
			this->Text = L"TarotCardSelect";
			this->ResumeLayout(false);
			this->PerformLayout();

			this->button12->Hide();
			this->button22->Hide();
			this->button33->Hide();
			this->button44->Hide();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->button1->Hide();
		this->button12->Show();
	}

private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button2->Hide();
	this->button22->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button3->Hide();
	this->button33->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->button4->Hide();
	this->button44->Show();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Reading^ form = gcnew Reading;
	form->ShowDialog();
	this->Close();
}
};
}
