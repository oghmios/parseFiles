#pragma once
#include "stdafx.h"
#include <stdio.h>
#include <tchar.h>
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <conio.h>
#include <Windows.h>
#include <WinUser.h>
#include <vector>




namespace FinalParser {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Collections::Generic;
	using namespace System::Runtime::InteropServices;

	/// <summary>
	/// Summary for parserGUI
	/// </summary>
	public ref class parserGUI : public System::Windows::Forms::Form
	{
	public:
		parserGUI(void)
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
		~parserGUI()
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
	private: System::Windows::Forms::Label^  nameFileLabel;
	private: System::Windows::Forms::Button^  emulatorCoordButton;

	private: System::Windows::Forms::Label^  assignEmulatorLabel;
	private: System::Windows::Forms::Label^  cordinatesEmuLabel;
	private: System::Windows::Forms::Label^  coordinatesParserLabel;


	private: System::Windows::Forms::Label^  assignParserLabel;

	private: System::Windows::Forms::Button^  parserCoordButton;
	private: System::Windows::Forms::Button^  youButton;
	private: System::Windows::Forms::Label^  charactersLabel;
	private: System::Windows::Forms::Button^  narratorButton;
	private: System::Windows::Forms::Button^  char3Button;
	private: System::Windows::Forms::Button^  char4Button;
	private: System::Windows::Forms::Button^  char5Button;
	private: System::Windows::Forms::Button^  char10Button;

	private: System::Windows::Forms::Button^  char9Button;
	private: System::Windows::Forms::Button^  char8Button;
	private: System::Windows::Forms::Button^  char7Button;
	private: System::Windows::Forms::Button^  char6Button;
	private: System::Windows::Forms::Label^  othersLabel;
	private: System::Windows::Forms::Button^  nextLineButton;
	private: System::Windows::Forms::Button^  musicButton;


	private: System::Windows::Forms::Button^  backgroundButton;

	private: System::Windows::Forms::Splitter^  splitter1;

	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::Label^  actualLineLabel;



	private: System::Windows::Forms::Label^  actualLine;

	private: System::Windows::Forms::Button^  choiceButton;
	private: System::Windows::Forms::Button^  optionButton;
	private: System::Windows::Forms::Button^  textFromOtherOptionButton;
	private: System::Windows::Forms::Label^  resultingLine;



	private: System::Windows::Forms::Label^  resultingLineLabel;
	private: System::Windows::Forms::Button^  saveFile;
	private: System::Windows::Forms::Button^  selectedOptionButton;
	private: System::Windows::Forms::Button^  customizationButton;
	private: System::Windows::Forms::Label^  choicesOptionsLabel;
	private: System::Windows::Forms::Button^  premiumOptionButton;
	private: System::Windows::Forms::Button^  premiumSelectedOption;
	private: System::Windows::Forms::Button^  lastLineButton;
	private: System::Windows::Forms::Label^  linesLabel;
	private: System::Windows::Forms::Button^  assignCharButton;
	private: System::Windows::Forms::TextBox^  charManualTextBox;
	private: System::Windows::Forms::Label^  contadorLabel;
	private: System::Windows::Forms::Label^  actualOptionLabel;


	private: System::Windows::Forms::Button^  char15Button;
	private: System::Windows::Forms::Button^  char14Button;
	private: System::Windows::Forms::Button^  char13Button;
	private: System::Windows::Forms::Button^  char12Button;
	private: System::Windows::Forms::Button^  char11Button;
	private: System::Windows::Forms::Button^  char20Button;
	private: System::Windows::Forms::Button^  char19Button;
	private: System::Windows::Forms::Button^  char18Button;
	private: System::Windows::Forms::Button^  char17Button;
	private: System::Windows::Forms::Button^  char16Button;
	private: System::Windows::Forms::Button^  specialButton;
	private: System::Windows::Forms::Button^  finishOptionButton;
private: System::Windows::Forms::Button^  earlierOptionButton;
private: System::Windows::Forms::Button^  earlierOptButton;






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
			this->nameFileLabel = (gcnew System::Windows::Forms::Label());
			this->emulatorCoordButton = (gcnew System::Windows::Forms::Button());
			this->assignEmulatorLabel = (gcnew System::Windows::Forms::Label());
			this->cordinatesEmuLabel = (gcnew System::Windows::Forms::Label());
			this->coordinatesParserLabel = (gcnew System::Windows::Forms::Label());
			this->assignParserLabel = (gcnew System::Windows::Forms::Label());
			this->parserCoordButton = (gcnew System::Windows::Forms::Button());
			this->youButton = (gcnew System::Windows::Forms::Button());
			this->charactersLabel = (gcnew System::Windows::Forms::Label());
			this->narratorButton = (gcnew System::Windows::Forms::Button());
			this->char3Button = (gcnew System::Windows::Forms::Button());
			this->char4Button = (gcnew System::Windows::Forms::Button());
			this->char5Button = (gcnew System::Windows::Forms::Button());
			this->char10Button = (gcnew System::Windows::Forms::Button());
			this->char9Button = (gcnew System::Windows::Forms::Button());
			this->char8Button = (gcnew System::Windows::Forms::Button());
			this->char7Button = (gcnew System::Windows::Forms::Button());
			this->char6Button = (gcnew System::Windows::Forms::Button());
			this->othersLabel = (gcnew System::Windows::Forms::Label());
			this->nextLineButton = (gcnew System::Windows::Forms::Button());
			this->musicButton = (gcnew System::Windows::Forms::Button());
			this->backgroundButton = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->actualLineLabel = (gcnew System::Windows::Forms::Label());
			this->actualLine = (gcnew System::Windows::Forms::Label());
			this->choiceButton = (gcnew System::Windows::Forms::Button());
			this->optionButton = (gcnew System::Windows::Forms::Button());
			this->textFromOtherOptionButton = (gcnew System::Windows::Forms::Button());
			this->resultingLine = (gcnew System::Windows::Forms::Label());
			this->resultingLineLabel = (gcnew System::Windows::Forms::Label());
			this->saveFile = (gcnew System::Windows::Forms::Button());
			this->selectedOptionButton = (gcnew System::Windows::Forms::Button());
			this->customizationButton = (gcnew System::Windows::Forms::Button());
			this->choicesOptionsLabel = (gcnew System::Windows::Forms::Label());
			this->premiumOptionButton = (gcnew System::Windows::Forms::Button());
			this->premiumSelectedOption = (gcnew System::Windows::Forms::Button());
			this->lastLineButton = (gcnew System::Windows::Forms::Button());
			this->linesLabel = (gcnew System::Windows::Forms::Label());
			this->assignCharButton = (gcnew System::Windows::Forms::Button());
			this->charManualTextBox = (gcnew System::Windows::Forms::TextBox());
			this->contadorLabel = (gcnew System::Windows::Forms::Label());
			this->actualOptionLabel = (gcnew System::Windows::Forms::Label());
			this->char15Button = (gcnew System::Windows::Forms::Button());
			this->char14Button = (gcnew System::Windows::Forms::Button());
			this->char13Button = (gcnew System::Windows::Forms::Button());
			this->char12Button = (gcnew System::Windows::Forms::Button());
			this->char11Button = (gcnew System::Windows::Forms::Button());
			this->char20Button = (gcnew System::Windows::Forms::Button());
			this->char19Button = (gcnew System::Windows::Forms::Button());
			this->char18Button = (gcnew System::Windows::Forms::Button());
			this->char17Button = (gcnew System::Windows::Forms::Button());
			this->char16Button = (gcnew System::Windows::Forms::Button());
			this->specialButton = (gcnew System::Windows::Forms::Button());
			this->finishOptionButton = (gcnew System::Windows::Forms::Button());
			this->earlierOptionButton = (gcnew System::Windows::Forms::Button());
			this->earlierOptButton = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// openButton
			// 
			this->openButton->Location = System::Drawing::Point(191, 30);
			this->openButton->Name = L"openButton";
			this->openButton->Size = System::Drawing::Size(75, 23);
			this->openButton->TabIndex = 0;
			this->openButton->Text = L"Open";
			this->openButton->UseVisualStyleBackColor = true;
			this->openButton->Click += gcnew System::EventHandler(this, &parserGUI::openButton_Click);
			// 
			// openLabel
			// 
			this->openLabel->AutoSize = true;
			this->openLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->openLabel->Location = System::Drawing::Point(40, 30);
			this->openLabel->Name = L"openLabel";
			this->openLabel->Size = System::Drawing::Size(133, 17);
			this->openLabel->TabIndex = 1;
			this->openLabel->Text = L"Select a file to open";
			// 
			// openDialog
			// 
			this->openDialog->FileName = L"openDialog";
			// 
			// nameFileLabel
			// 
			this->nameFileLabel->AutoSize = true;
			this->nameFileLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->nameFileLabel->Location = System::Drawing::Point(289, 36);
			this->nameFileLabel->Name = L"nameFileLabel";
			this->nameFileLabel->Size = System::Drawing::Size(85, 17);
			this->nameFileLabel->TabIndex = 2;
			this->nameFileLabel->Text = L"Opened File";
			// 
			// emulatorCoordButton
			// 
			this->emulatorCoordButton->Location = System::Drawing::Point(74, 101);
			this->emulatorCoordButton->Name = L"emulatorCoordButton";
			this->emulatorCoordButton->Size = System::Drawing::Size(75, 23);
			this->emulatorCoordButton->TabIndex = 3;
			this->emulatorCoordButton->Text = L"Assign";
			this->emulatorCoordButton->UseVisualStyleBackColor = true;
			this->emulatorCoordButton->Click += gcnew System::EventHandler(this, &parserGUI::emulatorCoordButton_Click);
			// 
			// assignEmulatorLabel
			// 
			this->assignEmulatorLabel->AutoSize = true;
			this->assignEmulatorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->assignEmulatorLabel->Location = System::Drawing::Point(74, 67);
			this->assignEmulatorLabel->Name = L"assignEmulatorLabel";
			this->assignEmulatorLabel->Size = System::Drawing::Size(187, 17);
			this->assignEmulatorLabel->TabIndex = 4;
			this->assignEmulatorLabel->Text = L"Assign emulator coordinates";
			// 
			// cordinatesEmuLabel
			// 
			this->cordinatesEmuLabel->AutoSize = true;
			this->cordinatesEmuLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->cordinatesEmuLabel->Location = System::Drawing::Point(177, 104);
			this->cordinatesEmuLabel->Name = L"cordinatesEmuLabel";
			this->cordinatesEmuLabel->Size = System::Drawing::Size(84, 17);
			this->cordinatesEmuLabel->TabIndex = 5;
			this->cordinatesEmuLabel->Text = L"Coordinates";
			// 
			// coordinatesParserLabel
			// 
			this->coordinatesParserLabel->AutoSize = true;
			this->coordinatesParserLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->coordinatesParserLabel->Location = System::Drawing::Point(460, 104);
			this->coordinatesParserLabel->Name = L"coordinatesParserLabel";
			this->coordinatesParserLabel->Size = System::Drawing::Size(84, 17);
			this->coordinatesParserLabel->TabIndex = 8;
			this->coordinatesParserLabel->Text = L"Coordinates";
			// 
			// assignParserLabel
			// 
			this->assignParserLabel->AutoSize = true;
			this->assignParserLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->assignParserLabel->Location = System::Drawing::Point(357, 67);
			this->assignParserLabel->Name = L"assignParserLabel";
			this->assignParserLabel->Size = System::Drawing::Size(173, 17);
			this->assignParserLabel->TabIndex = 7;
			this->assignParserLabel->Text = L"Assign parser coordinates";
			// 
			// parserCoordButton
			// 
			this->parserCoordButton->Location = System::Drawing::Point(360, 101);
			this->parserCoordButton->Name = L"parserCoordButton";
			this->parserCoordButton->Size = System::Drawing::Size(75, 23);
			this->parserCoordButton->TabIndex = 6;
			this->parserCoordButton->Text = L"Assign";
			this->parserCoordButton->UseVisualStyleBackColor = true;
			this->parserCoordButton->Click += gcnew System::EventHandler(this, &parserGUI::parserCoordButton_Click);
			// 
			// youButton
			// 
			this->youButton->Location = System::Drawing::Point(62, 252);
			this->youButton->Name = L"youButton";
			this->youButton->Size = System::Drawing::Size(75, 23);
			this->youButton->TabIndex = 9;
			this->youButton->Text = L"You(1)";
			this->youButton->UseVisualStyleBackColor = true;
			this->youButton->Click += gcnew System::EventHandler(this, &parserGUI::youButton_Click);
			// 
			// charactersLabel
			// 
			this->charactersLabel->AutoSize = true;
			this->charactersLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->charactersLabel->Location = System::Drawing::Point(263, 218);
			this->charactersLabel->Name = L"charactersLabel";
			this->charactersLabel->Size = System::Drawing::Size(77, 17);
			this->charactersLabel->TabIndex = 10;
			this->charactersLabel->Text = L"Characters";
			// 
			// narratorButton
			// 
			this->narratorButton->Location = System::Drawing::Point(168, 252);
			this->narratorButton->Name = L"narratorButton";
			this->narratorButton->Size = System::Drawing::Size(75, 23);
			this->narratorButton->TabIndex = 11;
			this->narratorButton->Text = L"Narrator(2)";
			this->narratorButton->UseVisualStyleBackColor = true;
			this->narratorButton->Click += gcnew System::EventHandler(this, &parserGUI::narratorButton_Click);
			// 
			// char3Button
			// 
			this->char3Button->Location = System::Drawing::Point(266, 252);
			this->char3Button->Name = L"char3Button";
			this->char3Button->Size = System::Drawing::Size(75, 23);
			this->char3Button->TabIndex = 12;
			this->char3Button->Text = L"Char 3(3)";
			this->char3Button->UseVisualStyleBackColor = true;
			this->char3Button->Click += gcnew System::EventHandler(this, &parserGUI::char3Button_Click);
			// 
			// char4Button
			// 
			this->char4Button->Location = System::Drawing::Point(365, 252);
			this->char4Button->Name = L"char4Button";
			this->char4Button->Size = System::Drawing::Size(75, 23);
			this->char4Button->TabIndex = 13;
			this->char4Button->Text = L"Char 4(4)";
			this->char4Button->UseVisualStyleBackColor = true;
			this->char4Button->Click += gcnew System::EventHandler(this, &parserGUI::char4Button_Click);
			// 
			// char5Button
			// 
			this->char5Button->Location = System::Drawing::Point(457, 252);
			this->char5Button->Name = L"char5Button";
			this->char5Button->Size = System::Drawing::Size(75, 23);
			this->char5Button->TabIndex = 14;
			this->char5Button->Text = L"Char 5(5)";
			this->char5Button->UseVisualStyleBackColor = true;
			this->char5Button->Click += gcnew System::EventHandler(this, &parserGUI::char5Button_Click);
			// 
			// char10Button
			// 
			this->char10Button->Location = System::Drawing::Point(457, 295);
			this->char10Button->Name = L"char10Button";
			this->char10Button->Size = System::Drawing::Size(75, 23);
			this->char10Button->TabIndex = 19;
			this->char10Button->Text = L"Char 10(0)";
			this->char10Button->UseVisualStyleBackColor = true;
			this->char10Button->Click += gcnew System::EventHandler(this, &parserGUI::char10Button_Click);
			// 
			// char9Button
			// 
			this->char9Button->Location = System::Drawing::Point(365, 295);
			this->char9Button->Name = L"char9Button";
			this->char9Button->Size = System::Drawing::Size(75, 23);
			this->char9Button->TabIndex = 18;
			this->char9Button->Text = L"Char 9(9)";
			this->char9Button->UseVisualStyleBackColor = true;
			this->char9Button->Click += gcnew System::EventHandler(this, &parserGUI::char9Button_Click);
			// 
			// char8Button
			// 
			this->char8Button->Location = System::Drawing::Point(266, 295);
			this->char8Button->Name = L"char8Button";
			this->char8Button->Size = System::Drawing::Size(75, 23);
			this->char8Button->TabIndex = 17;
			this->char8Button->Text = L"Char 8(8)";
			this->char8Button->UseVisualStyleBackColor = true;
			this->char8Button->Click += gcnew System::EventHandler(this, &parserGUI::char8Button_Click);
			// 
			// char7Button
			// 
			this->char7Button->Location = System::Drawing::Point(168, 295);
			this->char7Button->Name = L"char7Button";
			this->char7Button->Size = System::Drawing::Size(75, 23);
			this->char7Button->TabIndex = 16;
			this->char7Button->Text = L"Char 7(7)";
			this->char7Button->UseVisualStyleBackColor = true;
			this->char7Button->Click += gcnew System::EventHandler(this, &parserGUI::char7Button_Click);
			// 
			// char6Button
			// 
			this->char6Button->Location = System::Drawing::Point(62, 295);
			this->char6Button->Name = L"char6Button";
			this->char6Button->Size = System::Drawing::Size(75, 23);
			this->char6Button->TabIndex = 15;
			this->char6Button->Text = L"Char 6(6)";
			this->char6Button->UseVisualStyleBackColor = true;
			this->char6Button->Click += gcnew System::EventHandler(this, &parserGUI::char6Button_Click);
			// 
			// othersLabel
			// 
			this->othersLabel->AutoSize = true;
			this->othersLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->othersLabel->Location = System::Drawing::Point(261, 643);
			this->othersLabel->Name = L"othersLabel";
			this->othersLabel->Size = System::Drawing::Size(79, 17);
			this->othersLabel->TabIndex = 20;
			this->othersLabel->Text = L"Enviroment";
			// 
			// nextLineButton
			// 
			this->nextLineButton->Location = System::Drawing::Point(59, 771);
			this->nextLineButton->Name = L"nextLineButton";
			this->nextLineButton->Size = System::Drawing::Size(470, 23);
			this->nextLineButton->TabIndex = 23;
			this->nextLineButton->Text = L"Next Line(N)";
			this->nextLineButton->UseVisualStyleBackColor = true;
			this->nextLineButton->Click += gcnew System::EventHandler(this, &parserGUI::nextLineButton_Click);
			// 
			// musicButton
			// 
			this->musicButton->Location = System::Drawing::Point(347, 672);
			this->musicButton->Name = L"musicButton";
			this->musicButton->Size = System::Drawing::Size(125, 23);
			this->musicButton->TabIndex = 22;
			this->musicButton->Text = L"Music(M)";
			this->musicButton->UseVisualStyleBackColor = true;
			this->musicButton->Click += gcnew System::EventHandler(this, &parserGUI::musicButton_Click);
			// 
			// backgroundButton
			// 
			this->backgroundButton->Location = System::Drawing::Point(136, 672);
			this->backgroundButton->Name = L"backgroundButton";
			this->backgroundButton->Size = System::Drawing::Size(125, 23);
			this->backgroundButton->TabIndex = 21;
			this->backgroundButton->Text = L"Background(B)";
			this->backgroundButton->UseVisualStyleBackColor = true;
			this->backgroundButton->Click += gcnew System::EventHandler(this, &parserGUI::backgroundButton_Click);
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 868);
			this->splitter1->TabIndex = 24;
			this->splitter1->TabStop = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// actualLineLabel
			// 
			this->actualLineLabel->AutoSize = true;
			this->actualLineLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->actualLineLabel->Location = System::Drawing::Point(41, 153);
			this->actualLineLabel->Name = L"actualLineLabel";
			this->actualLineLabel->Size = System::Drawing::Size(77, 17);
			this->actualLineLabel->TabIndex = 25;
			this->actualLineLabel->Text = L"Actual line:";
			// 
			// actualLine
			// 
			this->actualLine->AutoSize = true;
			this->actualLine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->actualLine->Location = System::Drawing::Point(141, 153);
			this->actualLine->Name = L"actualLine";
			this->actualLine->Size = System::Drawing::Size(45, 17);
			this->actualLine->TabIndex = 26;
			this->actualLine->Text = L"(Line)";
			// 
			// choiceButton
			// 
			this->choiceButton->Location = System::Drawing::Point(60, 489);
			this->choiceButton->Name = L"choiceButton";
			this->choiceButton->Size = System::Drawing::Size(105, 23);
			this->choiceButton->TabIndex = 27;
			this->choiceButton->Text = L"Choice(C)";
			this->choiceButton->UseVisualStyleBackColor = true;
			this->choiceButton->Click += gcnew System::EventHandler(this, &parserGUI::choiceButton_Click);
			// 
			// optionButton
			// 
			this->optionButton->Location = System::Drawing::Point(181, 489);
			this->optionButton->Name = L"optionButton";
			this->optionButton->Size = System::Drawing::Size(105, 23);
			this->optionButton->TabIndex = 28;
			this->optionButton->Text = L"Option(O)";
			this->optionButton->UseVisualStyleBackColor = true;
			this->optionButton->Click += gcnew System::EventHandler(this, &parserGUI::optionButton_Click);
			// 
			// textFromOtherOptionButton
			// 
			this->textFromOtherOptionButton->Location = System::Drawing::Point(60, 530);
			this->textFromOtherOptionButton->Name = L"textFromOtherOptionButton";
			this->textFromOtherOptionButton->Size = System::Drawing::Size(105, 23);
			this->textFromOtherOptionButton->TabIndex = 29;
			this->textFromOtherOptionButton->Text = L"Insert Option(Z)";
			this->textFromOtherOptionButton->UseVisualStyleBackColor = true;
			this->textFromOtherOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::textFromOtherOptionButton_Click);
			// 
			// resultingLine
			// 
			this->resultingLine->AutoSize = true;
			this->resultingLine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->resultingLine->Location = System::Drawing::Point(141, 188);
			this->resultingLine->Name = L"resultingLine";
			this->resultingLine->Size = System::Drawing::Size(45, 17);
			this->resultingLine->TabIndex = 30;
			this->resultingLine->Text = L"(Line)";
			// 
			// resultingLineLabel
			// 
			this->resultingLineLabel->AutoSize = true;
			this->resultingLineLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->resultingLineLabel->Location = System::Drawing::Point(40, 188);
			this->resultingLineLabel->Name = L"resultingLineLabel";
			this->resultingLineLabel->Size = System::Drawing::Size(97, 17);
			this->resultingLineLabel->TabIndex = 31;
			this->resultingLineLabel->Text = L"Resulting line:";
			// 
			// saveFile
			// 
			this->saveFile->Location = System::Drawing::Point(425, 33);
			this->saveFile->Name = L"saveFile";
			this->saveFile->Size = System::Drawing::Size(75, 23);
			this->saveFile->TabIndex = 32;
			this->saveFile->Text = L"Save";
			this->saveFile->UseVisualStyleBackColor = true;
			this->saveFile->Click += gcnew System::EventHandler(this, &parserGUI::saveFile_Click);
			// 
			// selectedOptionButton
			// 
			this->selectedOptionButton->Location = System::Drawing::Point(181, 530);
			this->selectedOptionButton->Name = L"selectedOptionButton";
			this->selectedOptionButton->Size = System::Drawing::Size(105, 23);
			this->selectedOptionButton->TabIndex = 33;
			this->selectedOptionButton->Text = L"Insert Selected(S)";
			this->selectedOptionButton->UseVisualStyleBackColor = true;
			this->selectedOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::selectedOptionButton_Click);
			// 
			// customizationButton
			// 
			this->customizationButton->Location = System::Drawing::Point(347, 711);
			this->customizationButton->Name = L"customizationButton";
			this->customizationButton->Size = System::Drawing::Size(125, 23);
			this->customizationButton->TabIndex = 34;
			this->customizationButton->Text = L"Customization(Y)";
			this->customizationButton->UseVisualStyleBackColor = true;
			this->customizationButton->Click += gcnew System::EventHandler(this, &parserGUI::customizationButton_Click);
			// 
			// choicesOptionsLabel
			// 
			this->choicesOptionsLabel->AutoSize = true;
			this->choicesOptionsLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->choicesOptionsLabel->Location = System::Drawing::Point(238, 454);
			this->choicesOptionsLabel->Name = L"choicesOptionsLabel";
			this->choicesOptionsLabel->Size = System::Drawing::Size(136, 17);
			this->choicesOptionsLabel->TabIndex = 35;
			this->choicesOptionsLabel->Text = L"Choices and options";
			// 
			// premiumOptionButton
			// 
			this->premiumOptionButton->Location = System::Drawing::Point(306, 489);
			this->premiumOptionButton->Name = L"premiumOptionButton";
			this->premiumOptionButton->Size = System::Drawing::Size(105, 23);
			this->premiumOptionButton->TabIndex = 36;
			this->premiumOptionButton->Text = L"Premium Option(P)";
			this->premiumOptionButton->UseVisualStyleBackColor = true;
			this->premiumOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::premiumOptionButton_Click);
			// 
			// premiumSelectedOption
			// 
			this->premiumSelectedOption->Location = System::Drawing::Point(306, 530);
			this->premiumSelectedOption->Name = L"premiumSelectedOption";
			this->premiumSelectedOption->Size = System::Drawing::Size(105, 23);
			this->premiumSelectedOption->TabIndex = 37;
			this->premiumSelectedOption->Text = L"Insert Premium(X)";
			this->premiumSelectedOption->UseVisualStyleBackColor = true;
			this->premiumSelectedOption->Click += gcnew System::EventHandler(this, &parserGUI::premiumSelectedOption_Click);
			// 
			// lastLineButton
			// 
			this->lastLineButton->Location = System::Drawing::Point(59, 815);
			this->lastLineButton->Name = L"lastLineButton";
			this->lastLineButton->Size = System::Drawing::Size(470, 23);
			this->lastLineButton->TabIndex = 38;
			this->lastLineButton->Text = L"Last Line(L)";
			this->lastLineButton->UseVisualStyleBackColor = true;
			this->lastLineButton->Click += gcnew System::EventHandler(this, &parserGUI::lastLineButton_Click);
			// 
			// linesLabel
			// 
			this->linesLabel->AutoSize = true;
			this->linesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->linesLabel->Location = System::Drawing::Point(275, 737);
			this->linesLabel->Name = L"linesLabel";
			this->linesLabel->Size = System::Drawing::Size(42, 17);
			this->linesLabel->TabIndex = 39;
			this->linesLabel->Text = L"Lines";
			// 
			// assignCharButton
			// 
			this->assignCharButton->Location = System::Drawing::Point(325, 412);
			this->assignCharButton->Name = L"assignCharButton";
			this->assignCharButton->Size = System::Drawing::Size(147, 23);
			this->assignCharButton->TabIndex = 40;
			this->assignCharButton->Text = L"Assign character manually";
			this->assignCharButton->UseVisualStyleBackColor = true;
			this->assignCharButton->Click += gcnew System::EventHandler(this, &parserGUI::assignCharButton_Click);
			// 
			// charManualTextBox
			// 
			this->charManualTextBox->Location = System::Drawing::Point(122, 415);
			this->charManualTextBox->Name = L"charManualTextBox";
			this->charManualTextBox->Size = System::Drawing::Size(160, 20);
			this->charManualTextBox->TabIndex = 41;
			this->charManualTextBox->GotFocus += gcnew System::EventHandler(this, &parserGUI::charManualTextBox_TextChanged);
			// 
			// contadorLabel
			// 
			this->contadorLabel->AutoSize = true;
			this->contadorLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->contadorLabel->Location = System::Drawing::Point(59, 604);
			this->contadorLabel->Name = L"contadorLabel";
			this->contadorLabel->Size = System::Drawing::Size(97, 17);
			this->contadorLabel->TabIndex = 42;
			this->contadorLabel->Text = L"Actual Option:";
			// 
			// actualOptionLabel
			// 
			this->actualOptionLabel->AutoSize = true;
			this->actualOptionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->actualOptionLabel->Location = System::Drawing::Point(165, 604);
			this->actualOptionLabel->Name = L"actualOptionLabel";
			this->actualOptionLabel->Size = System::Drawing::Size(57, 17);
			this->actualOptionLabel->TabIndex = 43;
			this->actualOptionLabel->Text = L"(option)";
			// 
			// char15Button
			// 
			this->char15Button->Location = System::Drawing::Point(457, 337);
			this->char15Button->Name = L"char15Button";
			this->char15Button->Size = System::Drawing::Size(75, 23);
			this->char15Button->TabIndex = 49;
			this->char15Button->Text = L"Char 15(T)";
			this->char15Button->UseVisualStyleBackColor = true;
			this->char15Button->Click += gcnew System::EventHandler(this, &parserGUI::char15Button_Click);
			// 
			// char14Button
			// 
			this->char14Button->Location = System::Drawing::Point(365, 337);
			this->char14Button->Name = L"char14Button";
			this->char14Button->Size = System::Drawing::Size(75, 23);
			this->char14Button->TabIndex = 48;
			this->char14Button->Text = L"Char 14(R)";
			this->char14Button->UseVisualStyleBackColor = true;
			this->char14Button->Click += gcnew System::EventHandler(this, &parserGUI::char14Button_Click);
			// 
			// char13Button
			// 
			this->char13Button->Location = System::Drawing::Point(266, 337);
			this->char13Button->Name = L"char13Button";
			this->char13Button->Size = System::Drawing::Size(75, 23);
			this->char13Button->TabIndex = 47;
			this->char13Button->Text = L"Char 13(E)";
			this->char13Button->UseVisualStyleBackColor = true;
			this->char13Button->Click += gcnew System::EventHandler(this, &parserGUI::char13Button_Click);
			// 
			// char12Button
			// 
			this->char12Button->Location = System::Drawing::Point(168, 337);
			this->char12Button->Name = L"char12Button";
			this->char12Button->Size = System::Drawing::Size(75, 23);
			this->char12Button->TabIndex = 46;
			this->char12Button->Text = L"Char 12(W)";
			this->char12Button->UseVisualStyleBackColor = true;
			this->char12Button->Click += gcnew System::EventHandler(this, &parserGUI::char12Button_Click);
			// 
			// char11Button
			// 
			this->char11Button->Location = System::Drawing::Point(62, 337);
			this->char11Button->Name = L"char11Button";
			this->char11Button->Size = System::Drawing::Size(75, 23);
			this->char11Button->TabIndex = 45;
			this->char11Button->Text = L"Char 11(Q)";
			this->char11Button->UseVisualStyleBackColor = true;
			this->char11Button->Click += gcnew System::EventHandler(this, &parserGUI::char11Button_Click);
			// 
			// char20Button
			// 
			this->char20Button->Location = System::Drawing::Point(457, 378);
			this->char20Button->Name = L"char20Button";
			this->char20Button->Size = System::Drawing::Size(75, 23);
			this->char20Button->TabIndex = 54;
			this->char20Button->Text = L"Char 20()";
			this->char20Button->UseVisualStyleBackColor = true;
			this->char20Button->Click += gcnew System::EventHandler(this, &parserGUI::char20Button_Click);
			// 
			// char19Button
			// 
			this->char19Button->Location = System::Drawing::Point(365, 378);
			this->char19Button->Name = L"char19Button";
			this->char19Button->Size = System::Drawing::Size(75, 23);
			this->char19Button->TabIndex = 53;
			this->char19Button->Text = L"Char 19()";
			this->char19Button->UseVisualStyleBackColor = true;
			this->char19Button->Click += gcnew System::EventHandler(this, &parserGUI::char19Button_Click);
			// 
			// char18Button
			// 
			this->char18Button->Location = System::Drawing::Point(266, 378);
			this->char18Button->Name = L"char18Button";
			this->char18Button->Size = System::Drawing::Size(75, 23);
			this->char18Button->TabIndex = 52;
			this->char18Button->Text = L"Char 18()";
			this->char18Button->UseVisualStyleBackColor = true;
			this->char18Button->Click += gcnew System::EventHandler(this, &parserGUI::char18Button_Click);
			// 
			// char17Button
			// 
			this->char17Button->Location = System::Drawing::Point(168, 378);
			this->char17Button->Name = L"char17Button";
			this->char17Button->Size = System::Drawing::Size(75, 23);
			this->char17Button->TabIndex = 51;
			this->char17Button->Text = L"Char 17(I)";
			this->char17Button->UseVisualStyleBackColor = true;
			this->char17Button->Click += gcnew System::EventHandler(this, &parserGUI::char17Button_Click);
			// 
			// char16Button
			// 
			this->char16Button->Location = System::Drawing::Point(62, 378);
			this->char16Button->Name = L"char16Button";
			this->char16Button->Size = System::Drawing::Size(75, 23);
			this->char16Button->TabIndex = 50;
			this->char16Button->Text = L"Char 16(U)";
			this->char16Button->UseVisualStyleBackColor = true;
			this->char16Button->Click += gcnew System::EventHandler(this, &parserGUI::char16Button_Click);
			// 
			// specialButton
			// 
			this->specialButton->Location = System::Drawing::Point(136, 711);
			this->specialButton->Name = L"specialButton";
			this->specialButton->Size = System::Drawing::Size(125, 23);
			this->specialButton->TabIndex = 55;
			this->specialButton->Text = L"Special(V)";
			this->specialButton->UseVisualStyleBackColor = true;
			this->specialButton->Click += gcnew System::EventHandler(this, &parserGUI::specialButton_Click);
			// 
			// finishOptionButton
			// 
			this->finishOptionButton->Location = System::Drawing::Point(241, 575);
			this->finishOptionButton->Name = L"finishOptionButton";
			this->finishOptionButton->Size = System::Drawing::Size(105, 23);
			this->finishOptionButton->TabIndex = 56;
			this->finishOptionButton->Text = L"Finish Options(.)";
			this->finishOptionButton->UseVisualStyleBackColor = true;
			this->finishOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::finishOptionButton_Click);
			// 
			// earlierOptionButton
			// 
			this->earlierOptionButton->Location = System::Drawing::Point(427, 530);
			this->earlierOptionButton->Name = L"earlierOptionButton";
			this->earlierOptionButton->Size = System::Drawing::Size(105, 23);
			this->earlierOptionButton->TabIndex = 57;
			this->earlierOptionButton->Text = L"Inser Earlier(,)";
			this->earlierOptionButton->UseVisualStyleBackColor = true;
			this->earlierOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::earlierOptionButton_Click);
			// 
			// earlierOptButton
			// 
			this->earlierOptButton->Location = System::Drawing::Point(427, 489);
			this->earlierOptButton->Name = L"earlierOptButton";
			this->earlierOptButton->Size = System::Drawing::Size(105, 23);
			this->earlierOptButton->TabIndex = 58;
			this->earlierOptButton->Text = L"Earlier Option(-)";
			this->earlierOptButton->UseVisualStyleBackColor = true;
			this->earlierOptButton->Click += gcnew System::EventHandler(this, &parserGUI::earlierOptButton_Click);
			// 
			// parserGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 868);
			this->Controls->Add(this->earlierOptButton);
			this->Controls->Add(this->earlierOptionButton);
			this->Controls->Add(this->finishOptionButton);
			this->Controls->Add(this->specialButton);
			this->Controls->Add(this->char20Button);
			this->Controls->Add(this->char19Button);
			this->Controls->Add(this->char18Button);
			this->Controls->Add(this->char17Button);
			this->Controls->Add(this->char16Button);
			this->Controls->Add(this->char15Button);
			this->Controls->Add(this->char14Button);
			this->Controls->Add(this->char13Button);
			this->Controls->Add(this->char12Button);
			this->Controls->Add(this->char11Button);
			this->Controls->Add(this->actualOptionLabel);
			this->Controls->Add(this->contadorLabel);
			this->Controls->Add(this->charManualTextBox);
			this->Controls->Add(this->assignCharButton);
			this->Controls->Add(this->linesLabel);
			this->Controls->Add(this->lastLineButton);
			this->Controls->Add(this->premiumSelectedOption);
			this->Controls->Add(this->premiumOptionButton);
			this->Controls->Add(this->choicesOptionsLabel);
			this->Controls->Add(this->customizationButton);
			this->Controls->Add(this->selectedOptionButton);
			this->Controls->Add(this->saveFile);
			this->Controls->Add(this->resultingLineLabel);
			this->Controls->Add(this->resultingLine);
			this->Controls->Add(this->textFromOtherOptionButton);
			this->Controls->Add(this->optionButton);
			this->Controls->Add(this->choiceButton);
			this->Controls->Add(this->actualLine);
			this->Controls->Add(this->actualLineLabel);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->nextLineButton);
			this->Controls->Add(this->musicButton);
			this->Controls->Add(this->backgroundButton);
			this->Controls->Add(this->othersLabel);
			this->Controls->Add(this->char10Button);
			this->Controls->Add(this->char9Button);
			this->Controls->Add(this->char8Button);
			this->Controls->Add(this->char7Button);
			this->Controls->Add(this->char6Button);
			this->Controls->Add(this->char5Button);
			this->Controls->Add(this->char4Button);
			this->Controls->Add(this->char3Button);
			this->Controls->Add(this->narratorButton);
			this->Controls->Add(this->charactersLabel);
			this->Controls->Add(this->youButton);
			this->Controls->Add(this->coordinatesParserLabel);
			this->Controls->Add(this->assignParserLabel);
			this->Controls->Add(this->parserCoordButton);
			this->Controls->Add(this->cordinatesEmuLabel);
			this->Controls->Add(this->assignEmulatorLabel);
			this->Controls->Add(this->emulatorCoordButton);
			this->Controls->Add(this->nameFileLabel);
			this->Controls->Add(this->openLabel);
			this->Controls->Add(this->openButton);
			this->KeyPreview = true;
			this->Name = L"parserGUI";
			this->Text = L"Parche Choices";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &parserGUI::keyboard_KeyDown);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void parserGUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}

/////////////////////////////////////LOCAL VARIABLES////////////////////////////////////////////
			//Inicializamos el array de lineas fuera, puesto que vamos a trabajar con él durante toda la ejecución del programa
			System::Collections::ArrayList fileLines;
			System::Collections::ArrayList finalLines;
			System::String^ line2Add;
			System::String^ pausedLine;
			System::String^ nextLineWrongText;
			System::String^ optionToWait1 = "non";
			System::String^ optionToWait2 = "non";
			System::String^ optionToWait3 = "non";
			System::String^ optionToWait4 = "non";
			System::String^ optionToWait5 = "non";
			System::String^ optionToWait6 = "non";
			System::String^ optionToWait7 = "non";
			System::String^ optionToWait8 = "non";

			
			//Declaramos un id para poder controlar la línea del array sobre la cual estamos trabajando
			int lineID					= 0;
			bool captureCoordinatesEmu	= false;
			bool captureCoordinatesTer	= false;
			bool fileopened				= false;
			bool pauseLine				= false;
			bool nextLineWrong			= false;
			bool choiceComes			= false;
			bool boolOption				= false;
			bool nonNumberEntered;
			double emuX;
			double emuY;
			double terX;
			double terY;
			//Declaramos el archivo csv que vamos a editar
			
/////////////////////////////////////OPEN FILE AND ANALIZE/////////////////////////////////////////////////
	// Open file
	private: System::Void openButton_Click(System::Object^  sender, System::EventArgs^  e) {
		openDialog->ShowDialog();
		String^ systemFileName = openDialog->FileName;

		

		std::string fileName = managedStrToNative(systemFileName);
		std::vector<std::string> fileNameToShow = split(fileName, 92);
		
		nameFileLabel->Text = managedNativetoStr(fileNameToShow.at(fileNameToShow.size() - 1));
		

		std::fstream inFile;
		inFile.open(fileName);

		if (inFile.is_open()) {

			bool getCharacters = true;
			std::string line;
			cli::array<Button^>^ buttons = getCharacterButtons();
			int counter = 0;
			while (getCharacters) {
				std::getline(inFile, line);
				if (line == "Character:") {
					std::getline(inFile, line);
					if (counter + 3 < 11) {
						String^ buttonText = managedNativetoStr(line + "(" + std::to_string(counter+3) + ")");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 11) {
						String^ buttonText = managedNativetoStr(line + "(Q)");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 12) {
						String^ buttonText = managedNativetoStr(line + "(W)");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 13) {
						String^ buttonText = managedNativetoStr(line + "(E)");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 14) {
						String^ buttonText = managedNativetoStr(line + "(R)");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 15) {
						String^ buttonText = managedNativetoStr(line + "(T)");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 16) {
						String^ buttonText = managedNativetoStr(line + "(U)");
						buttons[counter]->Text = buttonText;
					}
					else if (counter + 3 == 17) {
						String^ buttonText = managedNativetoStr(line + "(I)");
						buttons[counter]->Text = buttonText;
					}
					else {
						String^ buttonText = managedNativetoStr(line + "()");
						buttons[counter]->Text = buttonText;
					}
					counter++;
				}
				else if (line == "ENDOFCHARACTERS") {
					getCharacters = false;
				}
			}

			while (std::getline(inFile, line)) {
				std::string strLine(line);
				String^ systemLine = gcnew String(strLine.c_str());
				fileLines.Add(systemLine);
			}
			

			inFile.close();
		}
			
		if (youButton->Enabled == false) {
			disableEnableButtons(true);
		}
		fileopened = true;
		// Save all the charachters into their respective buttons

		String^ newLine = static_cast<String^>(fileLines[lineID]);
		actualLine->Text = newLine;

	}

	// Assign each character to each button
	private: cli::array<Button^>^ getCharacterButtons() {
		cli::array<Button^, 1>^ buttons = gcnew cli::array<Button^, 1>(21);
		buttons[0] = (char3Button);
		buttons[1] = (char4Button);
		buttons[2] = (char5Button);
		buttons[3] = (char6Button);
		buttons[4] = (char7Button);
		buttons[5] = (char8Button);
		buttons[6] = (char9Button);
		buttons[7] = (char10Button);
		buttons[8] = (char11Button);
		buttons[9] = (char12Button);
		buttons[10] = (char13Button);
		buttons[11] = (char14Button);
		buttons[12] = (char15Button);
		buttons[13] = (char16Button);
		buttons[14] = (char17Button);
		buttons[15] = (char18Button);
		buttons[16] = (char19Button);
		buttons[17] = (char20Button);
		return buttons;
	}

	
//////////////////////////////////////TRANSFORM METHODS/////////////////////////////////////////////////////
	// System string to std string
	private: std::string managedStrToNative(System::String^ sysstr){
	
		using System::IntPtr;		 
		using System::Runtime::InteropServices::Marshal;

		IntPtr ip = Marshal::StringToHGlobalAnsi(sysstr);
		std::string outString = static_cast<const char*>(ip.ToPointer());
		Marshal::FreeHGlobal(ip);
		return outString;
	}
	
	 //std string to system string
	private: System::String^ managedNativetoStr(std::string str)
	{
		 
		String^ systemLine = gcnew String(str.c_str());
		return systemLine;

	}

	//Divides a string by the specified delimiter and stores every part in a vector
	private: std::vector<std::string> split(const std::string& s, char delimiter){
		std::vector<std::string> tokens;
		std::string token;
		std::istringstream tokenStream(s);
		while (std::getline(tokenStream, token, delimiter))
		{
			tokens.push_back(token);
		}
		return tokens;
	}

	private: System::Void disableEnableButtons(bool state) {
		youButton->Enabled					= state;
		narratorButton->Enabled				= state;
		char3Button->Enabled				= state;
		char4Button->Enabled				= state;
		char5Button->Enabled				= state;
		char10Button->Enabled				= state;
		char9Button->Enabled				= state;
		char8Button->Enabled				= state;
		char7Button->Enabled				= state;
		char6Button->Enabled				= state;
		char11Button->Enabled = state;
		char12Button->Enabled = state;
		char13Button->Enabled = state;
		char14Button->Enabled = state;
		char15Button->Enabled = state;
		char16Button->Enabled = state;
		char17Button->Enabled = state;
		char18Button->Enabled = state;
		char19Button->Enabled = state;
		char20Button->Enabled = state;
		nextLineButton->Enabled				= state;
		lastLineButton->Enabled				= state;
		backgroundButton->Enabled			= state;
		musicButton->Enabled				= state;
		customizationButton->Enabled		= state;
		choiceButton->Enabled				= state;
		optionButton->Enabled				= state;
		selectedOptionButton->Enabled		= state;
		premiumOptionButton->Enabled		= state;
		premiumSelectedOption->Enabled		= state;
		textFromOtherOptionButton->Enabled	= state;
	}
	
///////////////////////////////////////CHARACTER BUTTONS//////////////////////////////////////////

	private: System::Void youButton_Click(System::Object^  sender, System::EventArgs^  e) {
		youMethod();
	}

	private: System::Void narratorButton_Click(System::Object^  sender, System::EventArgs^  e) {
		narratorMethod();
		
	}

	private: System::Void char3Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(3);
	}

	private: System::Void char4Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(4);
	}

	private: System::Void char5Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(5);
	}

	private: System::Void char6Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(6);
	}

	private: System::Void char7Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(7);
	}

	private: System::Void char8Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(8);
	}

	private: System::Void char9Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(9);
	}

	private: System::Void char10Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(0);
	}
	private: System::Void char11Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(11);
	}
	private: System::Void char12Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(12);
	}
	private: System::Void char13Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(13);
	}
	private: System::Void char14Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(14);
	}
	private: System::Void char15Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(15);
	}
	private: System::Void char16Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(16);
	}
	private: System::Void char17Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(17);
	}
	private: System::Void char18Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(18);
	}
	private: System::Void char19Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(19);
	}
	private: System::Void char20Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(20);
	}

	private: System::Void assignCharButton_Click(System::Object^  sender, System::EventArgs^  e) {
		assignCharButtonMethod();
	}
	private: System::Void charManualTextBox_TextChanged(System::Object^  sender, System::EventArgs^  e) {
		this->KeyPreview = false;
	}

/////////////////////////////CHOICES & OPTIONS BUTTONS/////////////////////////////////////
	//AUN FALTA OTRO BOTON: TIMED CHOICE
	private: System::Void choiceButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(67);
		
	}

	private: System::Void optionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(79);
	}

	private: System::Void selectedOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(83);
	}

	private: System::Void premiumOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(80);
	}

	private: System::Void premiumSelectedOption_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(88);
	}

	private: System::Void textFromOtherOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(90);
	}
	private: System::Void finishOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(46);
	}
	private: System::Void earlierOptButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(45);
	}
	private: System::Void earlierOptionButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(44);
	}

///////////////////////////////ENVORIMENT BUTTONS/////////////////////////////////////////
	// Save as Scene
	private: System::Void backgroundButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(66);
	}
	// Save as Music
	private: System::Void musicButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(77);
	}
	// Save as Customization
	private: System::Void customizationButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(89);
	}
	// Save as Special
	private: System::Void specialButton_Click(System::Object^  sender, System::EventArgs^  e) {
		optionsMethod(86);
	}

/////////////////////////////////////////LINE MOVEMENT BUTTONS////////////////////////////////////////////////
	private: System::Void nextLineButton_Click(System::Object^  sender, System::EventArgs^  e) {
		nextLineMethod();
	}

	private: System::Void lastLineButton_Click(System::Object^  sender, System::EventArgs^  e) {
		lastLineMethod();
	}

	private: System::Void showNextLine() {
		if (!pauseLine) {
			lineID++;
			if (fileLines.Count > lineID) {
				String^ newLine = static_cast<String^>(fileLines[lineID]);
				actualLine->Text = newLine;
			}
			else {
				System::Windows::Forms::MessageBox::Show("No_Lines");
				disableEnableButtons(false);
			}
		}
		
	}

////////////////////////////////////////////////COORDINATES BUTTONS///////////////////////////////////////////////////
	private: System::Void parserCoordButton_Click(System::Object^  sender, System::EventArgs^  e) {
		coordinatesParserLabel->Text = "Press K to capture";
		captureCoordinatesTer = true;
	}

	private: System::Void emulatorCoordButton_Click(System::Object^  sender, System::EventArgs^  e) {
		cordinatesEmuLabel->Text = "Press J to capture";
		captureCoordinatesEmu = true;
	}
/////////////////////////////////KEYBOARD CONTROLS//////////////////////////////////////////////////////////////////
	private: System::Void keyboard_KeyDown(Object^ /*sender*/, System::Windows::Forms::KeyEventArgs^ e)
	{
		// Capture Emulator Coordinates
		if (e->KeyCode == Keys::J && captureCoordinatesEmu)
		{
			POINT p;

			GetCursorPos(&p);
			emuX = p.x;

			emuY = p.y;
			cordinatesEmuLabel->Text = "X: " + emuX.ToString() + " Y: " + emuY.ToString();

			captureCoordinatesEmu = false;
		}
		// Capture Parser Coordinates
		if (e->KeyCode == Keys::K && captureCoordinatesTer)
		{
			POINT p;

			GetCursorPos(&p);
			terX = p.x;
			terY = p.y;
			coordinatesParserLabel->Text = "X: " + terX.ToString() + " Y: " + terY.ToString();
			captureCoordinatesTer = false;
		}
		/////// Character keys //////
		if (e->KeyCode == Keys::D1 && fileopened)
		{
			youMethod();

		}
		if (e->KeyCode == Keys::D2 && fileopened)
		{
			narratorMethod();
		}
		if (e->KeyCode == Keys::D3 && fileopened)
		{
			anotherCharsMethod(3);

		}
		if (e->KeyCode == Keys::D4 && fileopened)
		{
			anotherCharsMethod(4);

		}
		if (e->KeyCode == Keys::D5 && fileopened)
		{
			anotherCharsMethod(5);

		}
		if (e->KeyCode == Keys::D6 && fileopened)
		{
			anotherCharsMethod(6);

		}
		if (e->KeyCode == Keys::D7 && fileopened)
		{
			anotherCharsMethod(7);

		}
		if (e->KeyCode == Keys::D8 && fileopened)
		{
			anotherCharsMethod(8);

		}
		if (e->KeyCode == Keys::D9 && fileopened)
		{
			anotherCharsMethod(9);

		}
		if (e->KeyCode == Keys::D0 && fileopened)
		{
			anotherCharsMethod(0);

		}
		/////// Option keys //////
		if (e->KeyCode == Keys::C && fileopened)//AUN FALTA OTRA TECLA: TIMED CHOICE
		{
			optionsMethod(67);

		}
		if (e->KeyCode == Keys::O && fileopened)
		{
			optionsMethod(79);

		}
		if (e->KeyCode == Keys::S && fileopened)
		{
			optionsMethod(83);

		}
		if (e->KeyCode == Keys::P && fileopened)
		{
			optionsMethod(80);

		}
		if (e->KeyCode == Keys::X && fileopened)
		{
			optionsMethod(88);

		}
		if (e->KeyCode == Keys::Z && fileopened)
		{
			optionsMethod(90);

		}
		////// Enviroment keys /////
		if (e->KeyCode == Keys::B && fileopened)
		{
			optionsMethod(66);

		}
		if (e->KeyCode == Keys::M && fileopened)
		{
			optionsMethod(77);

		}
		if (e->KeyCode == Keys::Y && fileopened)
		{
			optionsMethod(89);

		}
		////// Line movement keys /////
		if (e->KeyCode == Keys::N && fileopened)
		{
			nextLineMethod();
		}
		if (e->KeyCode == Keys::L && fileopened)
		{
			lastLineMethod();
		}

	}

//////////////////////////////////////////////MOUSE CLICK/////////////////////////////////////////////////////
	private: System::Void clickAndContinue() {
		
		SetCursorPos(emuX, emuY);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		SetCursorPos(terX, terY);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	}

////////////////////////////////////////////BEHAVIOUR METHODS///////////////////////////////////////////////
	///////// Characters ///////
	private: System::Void youMethod() {
		if (choiceComes) {
			line2Add = "You ; ; ; " + actualLine->Text;
		}
		else {
			line2Add = "You ; " + actualLine->Text;
		}
		saveLine(line2Add);
		resultingLine->Text = line2Add;
		if (pauseLine) {
			actualLine->Text = pausedLine;
			pauseLine = false;
		}
		else {
			showNextLine();
			if (!choiceComes) {
				clickAndContinue();
			}
		}
	}

	private: System::Void narratorMethod() {
		if (choiceComes) {
			line2Add = "Narrator ; ; ; " + actualLine->Text;
		}
		else {
			line2Add = "Narrator ; " + actualLine->Text;
		}
		saveLine(line2Add);
		resultingLine->Text = line2Add;
		if (pauseLine) {
			actualLine->Text = pausedLine;
			pauseLine = false;
		}
		else {
			showNextLine();
			if (!choiceComes) {
				clickAndContinue();
			}
		}
	}

	private: System::Void anotherCharsMethod(int i) {

		switch (i) {
			case 3:
				writeCharacterNameInLabelFromButton(char3Button);
				break;
			case 4:
				writeCharacterNameInLabelFromButton(char4Button);
				break;
			case 5:
				writeCharacterNameInLabelFromButton(char5Button);
				break;
			case 6:
				writeCharacterNameInLabelFromButton(char6Button);
				break;
			case 7:
				writeCharacterNameInLabelFromButton(char7Button);
				break;
			case 8:
				writeCharacterNameInLabelFromButton(char8Button);
				break;
			case 9:
				writeCharacterNameInLabelFromButton(char9Button);
				break;
			case 0:
				writeCharacterNameInLabelFromButton(char10Button);
				break;
			case 10:
				writeCharacterNameInLabelFromButton(char10Button);
				break;
			case 11:
				writeCharacterNameInLabelFromButton(char11Button);
				break;
			case 12:
				writeCharacterNameInLabelFromButton(char12Button);
				break;
			case 13:
				writeCharacterNameInLabelFromButton(char13Button);
				break;
			case 14:
				writeCharacterNameInLabelFromButton(char14Button);
				break;
			case 15:
				writeCharacterNameInLabelFromButton(char15Button);
				break;
			case 16:
				writeCharacterNameInLabelFromButton(char16Button);
				break;
			case 17:
				writeCharacterNameInLabelFromButton(char17Button);
				break;
			case 18:
				writeCharacterNameInLabelFromButton(char18Button);
				break;
			case 19:
				writeCharacterNameInLabelFromButton(char19Button);
				break;
			case 20:
				writeCharacterNameInLabelFromButton(char20Button);
				break;
			default:
				break;
		}
		if (pauseLine) {
			actualLine->Text = pausedLine;
			pauseLine = false;
		}
		else {
			showNextLine();
			if (!choiceComes) {
				clickAndContinue();
			}
		}
	}

	private: System::Void assignCharButtonMethod() {
		System::String^ manualChar = charManualTextBox->Text;
		bool inserted = false;
		int numberOfChar = 3;
		while (!inserted && numberOfChar < 21) {
			switch (numberOfChar) {
				case 3:
					if (char3Button->Text == "Char " + numberOfChar + "("+ numberOfChar + ")") {
						char3Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
					break;
				case 4:
					if (char4Button->Text == "Char " + numberOfChar + "(" + numberOfChar + ")") {
						char4Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
					break;
				case 5:
					if (char5Button->Text == "Char " + numberOfChar + "(" + numberOfChar + ")") {
						char5Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
					break;
				case 6:
					if (char6Button->Text == "Char " + numberOfChar + "(" + numberOfChar + ")") {
						char6Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
					break;
				case 7:
					if (char7Button->Text == "Char " + numberOfChar + "(" + numberOfChar + ")") {
						char7Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
					break;
				case 8:
					if (char8Button->Text == "Char " + numberOfChar + "(" + numberOfChar + ")") {
						char8Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
				case 9:
					if (char9Button->Text == "Char " + numberOfChar + "(" + numberOfChar + ")") {
						char9Button->Text = manualChar + "(" + numberOfChar + ")";
						inserted = true;
					}
					break;
				case 10:
					if (char10Button->Text == "Char " + numberOfChar + "(" + 0 + ")") {
						char10Button->Text = manualChar + "(" + 0 + ")";
						inserted = true;
					}
					break;
				case 11:
					if (char11Button->Text == "Char " + numberOfChar + "(Q)") {
						char11Button->Text = manualChar + "(Q)";
						inserted = true;
					}
					break;
				case 12:
					if (char12Button->Text == "Char " + numberOfChar + "(W)") {
						char12Button->Text = manualChar + "(W)";
						inserted = true;
					}
					break;
				case 13:
					if (char13Button->Text == "Char " + numberOfChar + "(E)") {
						char13Button->Text = manualChar + "(E)";
						inserted = true;
					}
					break;
				case 14:
					if (char14Button->Text == "Char " + numberOfChar + "(R)") {
						char14Button->Text = manualChar + "(R)";
						inserted = true;
					}
					break;
				case 15:
					if (char15Button->Text == "Char " + numberOfChar + "(T)") {
						char15Button->Text = manualChar + "(T)";
						inserted = true;
					}
					break;
				case 16:
					if (char16Button->Text == "Char " + numberOfChar + "(U)") {
						char16Button->Text = manualChar + "(U)";
						inserted = true;
					}
					break;
				case 17:
					if (char17Button->Text == "Char " + numberOfChar + "(I)") {
						char17Button->Text = manualChar + "(I)";
						inserted = true;
					}
					break;
				case 18:
					if (char18Button->Text == "Char " + numberOfChar + "()") {
						char18Button->Text = manualChar + "()";
						inserted = true;
					}
					break;
				case 19:
					if (char19Button->Text == "Char " + numberOfChar + "()") {
						char19Button->Text = manualChar + "()";
						inserted = true;
					}
					break;
				case 20:
					if (char20Button->Text == "Char " + numberOfChar + "()") {
						char20Button->Text = manualChar + "()";
						inserted = true;
					}
					break;
				default:
					break;
			}
			numberOfChar++;
		}
		this->KeyPreview = true;
	}

	/////////// Options & Enviroment //////////////
	private: System::Void optionsMethod(char choose) {
		switch (choose) {
			//// Options ////
			case 67: // C Choice
				line2Add = "Choice; " + actualLine->Text;
				break;
			case 79: // O Option
				if (optionToWait1 == "non") {
					optionToWait1 = actualLine->Text;
					choiceComes = true;
				}
				else if (optionToWait2 == "non") {
					optionToWait2 = actualLine->Text;
				}
				else if (optionToWait3 == "non") {
					optionToWait3 = actualLine->Text;
				}
				else if (optionToWait4 == "non") {
					optionToWait4 = actualLine->Text;
				}
				else if (optionToWait5 == "non") {
					optionToWait5 = actualLine->Text;
				}
				else if (optionToWait6 == "non") {
					optionToWait6 = actualLine->Text;
				}
				else if (optionToWait7 == "non") {
					optionToWait7 = actualLine->Text;
				}
				else if (optionToWait8 == "non") {
					optionToWait8 = actualLine->Text;
				}
				//line2Add = "Option; ;" + actualLine->Text;
				break;
			case 80: // P Premium option
				if (optionToWait1 == "non") {
					optionToWait1 = actualLine->Text;
					choiceComes = true;
				}
				else if (optionToWait2 == "non") {
					optionToWait2 = actualLine->Text;
				}
				else if (optionToWait3 == "non") {
					optionToWait3 = actualLine->Text;
				}
				else if (optionToWait4 == "non") {
					optionToWait4 = actualLine->Text;
				}
				else if (optionToWait5 == "non") {
					optionToWait5 = actualLine->Text;
				}
				else if (optionToWait6 == "non") {
					optionToWait6 = actualLine->Text;
				}
				else if (optionToWait7 == "non") {
					optionToWait7 = actualLine->Text;
				}
				else if (optionToWait8 == "non") {
					optionToWait8 = actualLine->Text;
				}
				break;
			case 45: // - Earlier option
				if (optionToWait1 == "non") {
					optionToWait1 = actualLine->Text;
					choiceComes = true;
				}
				else if (optionToWait2 == "non") {
					optionToWait2 = actualLine->Text;
				}
				else if (optionToWait3 == "non") {
					optionToWait3 = actualLine->Text;
				}
				else if (optionToWait4 == "non") {
					optionToWait4 = actualLine->Text;
				}
				else if (optionToWait5 == "non") {
					optionToWait5 = actualLine->Text;
				}
				else if (optionToWait6 == "non") {
					optionToWait6 = actualLine->Text;
				}
				else if (optionToWait7 == "non") {
					optionToWait7 = actualLine->Text;
				}
				else if (optionToWait8 == "non") {
					optionToWait8 = actualLine->Text;
				}
				break;
			case 83: // S Selected option
				if (choiceComes) {
					if (optionToWait1 != "non") {
						line2Add = "Option ; ; **" + optionToWait1;
						optionToWait1 = "non";
						boolOption = true;
					}
					else if (optionToWait2 != "non") {
						line2Add = "Option ; ; **" + optionToWait2;
						optionToWait2 = "non";
						boolOption = true;
					}
					else if (optionToWait3 != "non") {
						line2Add = "Option ; ; **" + optionToWait3;
						optionToWait3 = "non";
						boolOption = true;
					}
					else if (optionToWait4 != "non") {
						line2Add = "Option ; ; **" + optionToWait4;
						optionToWait4 = "non";
						boolOption = true;
					}
					else if (optionToWait5 != "non") {
						line2Add = "Option ; ; **" + optionToWait5;
						optionToWait5 = "non";
						boolOption = true;
					}
					else if (optionToWait6 != "non") {
						line2Add = "Option ; ; **" + optionToWait6;
						optionToWait6 = "non";
						boolOption = true;
					}
					else if (optionToWait7 != "non") {
						line2Add = "Option ; ; **" + optionToWait7;
						optionToWait7 = "non";
						boolOption = true;
					}
					else if (optionToWait8 != "non") {
						line2Add = "Option ; ; **" + optionToWait8;
						optionToWait8 = "non";
						boolOption = true;
					}
				}
				break;
			case 90: // Z Insert the option and wait to insert next sentences
				if (choiceComes) {
					if (optionToWait1 != "non") {
						line2Add = "Option ; ; " + optionToWait1;
						optionToWait1 = "non";
						boolOption = true;
					}
					else if (optionToWait2 != "non") {
						line2Add = "Option ; ; " + optionToWait2;
						optionToWait2 = "non";
						boolOption = true;
					}
					else if (optionToWait3 != "non") {
						line2Add = "Option ; ; " + optionToWait3;
						optionToWait3 = "non";
						boolOption = true;
					}
					else if (optionToWait4 != "non") {
						line2Add = "Option ; ; " + optionToWait4;
						optionToWait4 = "non";
						boolOption = true;
					}
					else if (optionToWait5 != "non") {
						line2Add = "Option ; ; " + optionToWait5;
						optionToWait5 = "non";
						boolOption = true;
					}
					else if (optionToWait6 != "non") {
						line2Add = "Option ; ; " + optionToWait6;
						optionToWait6 = "non";
						boolOption = true;
					}
					else if (optionToWait7 != "non") {
						line2Add = "Option ; ; " + optionToWait7;
						optionToWait7 = "non";
						boolOption = true;
					}
					else if (optionToWait8 != "non") {
						line2Add = "Option ; ; " + optionToWait8;
						optionToWait8 = "non";
						boolOption = true;
					}
				}
				//line2Add = "; ; Text from other option; ;" + actualLine->Text;
				break;
			case 88: // X Premium selected option
				if (choiceComes) {
					if (optionToWait1 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait1;
						optionToWait1 = "non";
						boolOption = true;
					}
					else if (optionToWait2 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait2;
						optionToWait2 = "non";
						boolOption = true;
					}
					else if (optionToWait3 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait3;
						optionToWait3 = "non";
						boolOption = true;
					}
					else if (optionToWait4 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait4;
						optionToWait4 = "non";
						boolOption = true;
					}
					else if (optionToWait5 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait5;
						optionToWait5 = "non";
						boolOption = true;
					}
					else if (optionToWait6 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait6;
						optionToWait6 = "non";
						boolOption = true;
					}
					else if (optionToWait7 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait7;
						optionToWait7 = "non";
						boolOption = true;
					}
					else if (optionToWait8 != "non") {
						line2Add = "Premium option ; ; **" + optionToWait8;
						optionToWait8 = "non";
						boolOption = true;
					}
				}
				break;
			case 44: // , Earlier selected option
				if (choiceComes) {
					if (optionToWait1 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait1;
						optionToWait1 = "non";
						boolOption = true;
					}
					else if (optionToWait2 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait2;
						optionToWait2 = "non";
						boolOption = true;
					}
					else if (optionToWait3 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait3;
						optionToWait3 = "non";
						boolOption = true;
					}
					else if (optionToWait4 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait4;
						optionToWait4 = "non";
						boolOption = true;
					}
					else if (optionToWait5 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait5;
						optionToWait5 = "non";
						boolOption = true;
					}
					else if (optionToWait6 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait6;
						optionToWait6 = "non";
						boolOption = true;
					}
					else if (optionToWait7 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait7;
						optionToWait7 = "non";
						boolOption = true;
					}
					else if (optionToWait8 != "non") {
						line2Add = "Earlier Option ; ; **" + optionToWait8;
						optionToWait8 = "non";
						boolOption = true;
					}
				}
				break;
			case 46: // . Finish Options
				optionToWait1 = "non";
				optionToWait2 = "non";
				optionToWait3 = "non";
				optionToWait4 = "non";
				optionToWait5 = "non";
				optionToWait6 = "non";
				optionToWait7 = "non";
				optionToWait8 = "non";
				boolOption = false;
				choiceComes = false;
				actualOptionLabel->Text = "(option)";
				break;
			//// Enviroment ////
			case 66: // B Background
				line2Add = "Scene; " + actualLine->Text;
				if (choiceComes) {
					boolOption = true;
				}
				break;
			case 77: // M Music
				line2Add = "Music; " + actualLine->Text;
				if (choiceComes) {
					boolOption = true;
				}
				break;
			case 89: // Y Customization
				line2Add = "Customization; " + actualLine->Text;
				if (choiceComes) {
					boolOption = true;
				}
				break;
			case 86: // Y Special
				line2Add = "Special; " + actualLine->Text;
				if (choiceComes) {
					boolOption = true;
				}
				break;
			default:
				break;

		}
		if (choose != 46) {
			if (choiceComes) {
				if (boolOption) {
					saveLine(line2Add);
					actualOptionLabel->Text = line2Add;
					boolOption = false;
				}
				else {
					if (pauseLine) {
						actualLine->Text = pausedLine;
						pauseLine = false;
					}
					else {
						showNextLine();
					}
				}
			}
			else {
				saveLine(line2Add);
				resultingLine->Text = line2Add;
				if (pauseLine) {
					actualLine->Text = pausedLine;
					pauseLine = false;
				}
				else {
					showNextLine();
				}
			}
		}
		
		
	}

	///////// Line movement ///////////
	private: System::Void nextLineMethod() {
		if (pauseLine) {
			actualLine->Text = pausedLine;
			pauseLine = false;
		}
		else {
			//finalLines.Add(resultingLine->Text);
			nextLineWrongText = actualLine->Text;
			nextLineWrong = true;
			resultingLine->Text = "";

			lineID++;
			if (fileLines.Count > lineID) {
				String^ newLine = static_cast<String^>(fileLines[lineID]);
				actualLine->Text = newLine;
				pausedLine = actualLine->Text;
			}
			else {
				System::Windows::Forms::MessageBox::Show("No_Lines");
				disableEnableButtons(false);
			}
		}
	}

	private: System::Void lastLineMethod() {
		if (nextLineWrong) {
			actualLine->Text = nextLineWrongText;
			resultingLine->Text = "";
			pauseLine = true;
			nextLineWrong = false;
		}
		else {
			pausedLine = actualLine->Text;
			pauseLine = true;
			std::string lastLine = managedStrToNative(finalLines[finalLines.Count - 1]->ToString());
			char delimiter = 59;
			std::vector<std::string> lineSplitted = split(lastLine, delimiter);
			actualLine->Text = managedNativetoStr(lineSplitted.at(lineSplitted.size() - 1));
			resultingLine->Text = "";
			finalLines.RemoveAt(finalLines.Count - 1);
		}
	}

	
//////////////////////////////////////////////SAVE CONTROLS////////////////////////////////////////////////////
	// Write character and sentence
	private: System::Void writeCharacterNameInLabelFromButton(System::Windows::Forms::Button^ b) {
		std::string buttonText = managedStrToNative(b->Text);
		char delimiter = 40;
		std::vector<std::string> splittedButtonText = split(buttonText, delimiter);
		String^ characterName = managedNativetoStr(splittedButtonText.at(0));
		if (choiceComes) {
			line2Add = characterName + "; ; ; " + actualLine->Text;
		}
		else {
			line2Add = characterName + "; " + actualLine->Text;
		}
		saveLine(line2Add);
		resultingLine->Text = line2Add;
	}
	// Add line to an ArrayList
	private: System::Void saveLine(System::String^ lineToAdd) {
		finalLines.Add(lineToAdd);
	}

	//Create and save csv file
	private: System::Void saveFile_Click(System::Object^  sender, System::EventArgs^  e) {

		std::string filename = "parsedFile.csv";
		std::ofstream csvFile;
		csvFile.open(filename);
		for (int i = 0; i < finalLines.Count; i++) {
			String^ sysLine = static_cast<String^>(finalLines[i]);
			std::string line = managedStrToNative(sysLine);
			csvFile << line << "\n";
		}
		csvFile.close();
		System::Windows::Forms::MessageBox::Show("Saved");
	}













};
}

