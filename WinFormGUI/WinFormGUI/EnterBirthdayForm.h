#pragma once
#include <string>

namespace WinFormGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class EnterBirthdayForm : public System::Windows::Forms::Form
	{
	public:

		EnterBirthdayForm(void)
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
		~EnterBirthdayForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBoxYear;
	private: System::Windows::Forms::TextBox^ textBoxMonth;
	private: System::Windows::Forms::TextBox^ textBoxDay;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Button^ submitDobButton;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ ZodiacSign;
	private: System::Windows::Forms::ImageList^ imageList1;



	private: System::ComponentModel::IContainer^ components;




	public:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EnterBirthdayForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBoxYear = (gcnew System::Windows::Forms::TextBox());
			this->textBoxMonth = (gcnew System::Windows::Forms::TextBox());
			this->textBoxDay = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->submitDobButton = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->ZodiacSign = (gcnew System::Windows::Forms::Label());
			this->imageList1 = (gcnew System::Windows::Forms::ImageList(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::Window;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(44, 136);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(58, 25);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Year";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Window;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(30, 194);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(72, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Month";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::Window;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(52, 251);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 25);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Day";
			// 
			// textBoxYear
			// 
			this->textBoxYear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxYear->Location = System::Drawing::Point(122, 135);
			this->textBoxYear->Margin = System::Windows::Forms::Padding(2);
			this->textBoxYear->Name = L"textBoxYear";
			this->textBoxYear->Size = System::Drawing::Size(76, 26);
			this->textBoxYear->TabIndex = 6;
			this->textBoxYear->Text = L"1";
			// 
			// textBoxMonth
			// 
			this->textBoxMonth->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxMonth->Location = System::Drawing::Point(122, 195);
			this->textBoxMonth->Margin = System::Windows::Forms::Padding(2);
			this->textBoxMonth->Name = L"textBoxMonth";
			this->textBoxMonth->Size = System::Drawing::Size(76, 26);
			this->textBoxMonth->TabIndex = 7;
			this->textBoxMonth->Text = L"1";
			// 
			// textBoxDay
			// 
			this->textBoxDay->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxDay->Location = System::Drawing::Point(122, 250);
			this->textBoxDay->Margin = System::Windows::Forms::Padding(2);
			this->textBoxDay->Name = L"textBoxDay";
			this->textBoxDay->Size = System::Drawing::Size(76, 26);
			this->textBoxDay->TabIndex = 8;
			this->textBoxDay->Text = L"1";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::Window;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::ControlText;
			this->label4->Location = System::Drawing::Point(28, 27);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(396, 42);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Enter your date of birth";
			// 
			// submitDobButton
			// 
			this->submitDobButton->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->submitDobButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->submitDobButton->Location = System::Drawing::Point(103, 343);
			this->submitDobButton->Margin = System::Windows::Forms::Padding(2);
			this->submitDobButton->Name = L"submitDobButton";
			this->submitDobButton->Size = System::Drawing::Size(95, 34);
			this->submitDobButton->TabIndex = 10;
			this->submitDobButton->Text = L"Submit";
			this->submitDobButton->UseVisualStyleBackColor = false;
			this->submitDobButton->Click += gcnew System::EventHandler(this, &EnterBirthdayForm::submitDobButton_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaption;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(11, 469);
			this->button1->Margin = System::Windows::Forms::Padding(2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &EnterBirthdayForm::button1_Click);
			// 
			// ZodiacSign
			// 
			this->ZodiacSign->AutoSize = true;
			this->ZodiacSign->BackColor = System::Drawing::SystemColors::Info;
			this->ZodiacSign->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ZodiacSign->Location = System::Drawing::Point(391, 127);
			this->ZodiacSign->Name = L"ZodiacSign";
			this->ZodiacSign->Size = System::Drawing::Size(0, 33);
			this->ZodiacSign->TabIndex = 12;
			// 
			// imageList1
			// 
			this->imageList1->ImageStream = (cli::safe_cast<System::Windows::Forms::ImageListStreamer^>(resources->GetObject(L"imageList1.ImageStream")));
			this->imageList1->TransparentColor = System::Drawing::Color::Transparent;
			this->imageList1->Images->SetKeyName(0, L"Aries_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(1, L"Taurus_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(2, L"Gemini_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(3, L"Cancer_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(4, L"Leo_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(5, L"Virgo_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(6, L"Libra_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(7, L"Scorpius_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(8, L"Sagittarius_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(9, L"Capricornus_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(10, L"Aquarius_symbol_(bold).svg.png");
			this->imageList1->Images->SetKeyName(11, L"Pisces_symbol_(bold).svg.png");
			// 
			// EnterBirthdayForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(714, 511);
			this->Controls->Add(this->ZodiacSign);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->submitDobButton);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBoxDay);
			this->Controls->Add(this->textBoxMonth);
			this->Controls->Add(this->textBoxYear);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"EnterBirthdayForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

private: System::Void submitDobButton_Click(System::Object^ sender, System::EventArgs^ e) {
	int year, month, day;
	year = Convert::ToInt32(this->textBoxYear->Text);
	month = Convert::ToInt32(this->textBoxMonth->Text);
	day = Convert::ToInt32(this->textBoxDay->Text);
	std::string zodiacString;
	switch (month) {
	case 1:
		zodiacString = "Capricorn";
		if (day >= 20)
			zodiacString = "Aquarius";
		break;
	case 2:
		zodiacString = "Aquarius";
			if (day >= 19)
				zodiacString = "Pisces";
		break;
	case 3:
		zodiacString = "Pisces";
		if (day >= 21)
			zodiacString = "Aries";
		break;
	case 4:
		zodiacString = "Aries";
		if (day >= 20)
			zodiacString = "Taurus";
		break;
	case 5:
		zodiacString = "Taurus";
		if (day >= 21)
			zodiacString = "Gemini";
		break;
	case 6:
		zodiacString = "Gemini";
		if (day >= 21)
			zodiacString = "Cancer";
		break;
	case 7:
		zodiacString = "Cancer";
		if (day >= 23)
			zodiacString = "Leo";
		break;
	case 8:
		zodiacString = "Leo";
		if (day >= 23)
			zodiacString = "Virgo";
		break;
	case 9:
		zodiacString = "Virgo";
		if (day >= 23)
			zodiacString = "Libra";
		break;
	case 10:
		zodiacString = "Libra";
		if (day >= 23)
			zodiacString = "Scorpio";
		break;
	case 11:
		zodiacString = "Scorpio";
		if (day >= 22)
			zodiacString = "Sagittarius";
		break;
	case 12:
		zodiacString = "Sagittarius";
		if (day >= 22)
			zodiacString = "Capricorn";
		break;
	default:
		break;
	}
	if (month < 1 || month>12 || day < 1 || day>31 || year < 1899 || year>2022)
		this->ZodiacSign->Text = "Enter a valid date!";
	else {
		String^ str2 = gcnew String(zodiacString.c_str());
		this->ZodiacSign->Text = "You are a " + str2;
	}
	this->ZodiacSign->Show();

}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}

};
}
