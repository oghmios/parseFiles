#pragma once

#include "parseChoices.h"

namespace ParseChoicesFiles {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for parseGUI
	/// </summary>
	public ref class parseGUI : public System::Windows::Forms::Form
	{
	public:
		parseGUI(void)
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
		~parseGUI()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::Button^  openButton;
	protected:

	private: System::Windows::Forms::Label^  openLabel;
	private: System::Windows::Forms::OpenFileDialog^  openDialog;
	private: System::Windows::Forms::Label^  label1;

	protected:

	protected:

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
			this->openButton = (gcnew System::Windows::Forms::Button());
			this->openLabel = (gcnew System::Windows::Forms::Label());
			this->openDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// openButton
			// 
			this->openButton->Location = System::Drawing::Point(35, 64);
			this->openButton->Name = L"openButton";
			this->openButton->Size = System::Drawing::Size(75, 23);
			this->openButton->TabIndex = 0;
			this->openButton->Text = L"Open";
			this->openButton->UseVisualStyleBackColor = true;
			this->openButton->Click += gcnew System::EventHandler(this, &parseGUI::openButton_Click);
			// 
			// openLabel
			// 
			this->openLabel->AutoSize = true;
			this->openLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->openLabel->Location = System::Drawing::Point(32, 31);
			this->openLabel->Name = L"openLabel";
			this->openLabel->Size = System::Drawing::Size(133, 17);
			this->openLabel->TabIndex = 1;
			this->openLabel->Text = L"Select a file to open";
			this->openLabel->Click += gcnew System::EventHandler(this, &parseGUI::openLabel_Click);
			// 
			// openDialog
			// 
			this->openDialog->FileName = L"openDialog";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(32, 117);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(35, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// parseGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(412, 334);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->openLabel);
			this->Controls->Add(this->openButton);
			this->Name = L"parseGUI";
			this->Text = L"Parche Choices";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void openButton_Click(System::Object^  sender, System::EventArgs^  e) {
		label1->Text = "Hello";
		
	}
	private: System::Void openLabel_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	};
}
