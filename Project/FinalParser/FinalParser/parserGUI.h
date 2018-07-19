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
	private: System::Windows::Forms::Button^  char0Button;
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
			this->char0Button = (gcnew System::Windows::Forms::Button());
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
			this->SuspendLayout();
			// 
			// openButton
			// 
			this->openButton->Location = System::Drawing::Point(212, 77);
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
			this->openLabel->Location = System::Drawing::Point(239, 45);
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
			this->nameFileLabel->Location = System::Drawing::Point(327, 80);
			this->nameFileLabel->Name = L"nameFileLabel";
			this->nameFileLabel->Size = System::Drawing::Size(85, 17);
			this->nameFileLabel->TabIndex = 2;
			this->nameFileLabel->Text = L"Opened File";
			// 
			// emulatorCoordButton
			// 
			this->emulatorCoordButton->Location = System::Drawing::Point(66, 162);
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
			this->assignEmulatorLabel->Location = System::Drawing::Point(66, 128);
			this->assignEmulatorLabel->Name = L"assignEmulatorLabel";
			this->assignEmulatorLabel->Size = System::Drawing::Size(187, 17);
			this->assignEmulatorLabel->TabIndex = 4;
			this->assignEmulatorLabel->Text = L"Assign emulator coordinates";
			// 
			// cordinatesEmuLabel
			// 
			this->cordinatesEmuLabel->AutoSize = true;
			this->cordinatesEmuLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->cordinatesEmuLabel->Location = System::Drawing::Point(169, 165);
			this->cordinatesEmuLabel->Name = L"cordinatesEmuLabel";
			this->cordinatesEmuLabel->Size = System::Drawing::Size(84, 17);
			this->cordinatesEmuLabel->TabIndex = 5;
			this->cordinatesEmuLabel->Text = L"Coordinates";
			// 
			// coordinatesParserLabel
			// 
			this->coordinatesParserLabel->AutoSize = true;
			this->coordinatesParserLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->coordinatesParserLabel->Location = System::Drawing::Point(452, 165);
			this->coordinatesParserLabel->Name = L"coordinatesParserLabel";
			this->coordinatesParserLabel->Size = System::Drawing::Size(84, 17);
			this->coordinatesParserLabel->TabIndex = 8;
			this->coordinatesParserLabel->Text = L"Coordinates";
			// 
			// assignParserLabel
			// 
			this->assignParserLabel->AutoSize = true;
			this->assignParserLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->assignParserLabel->Location = System::Drawing::Point(349, 128);
			this->assignParserLabel->Name = L"assignParserLabel";
			this->assignParserLabel->Size = System::Drawing::Size(173, 17);
			this->assignParserLabel->TabIndex = 7;
			this->assignParserLabel->Text = L"Assign parser coordinates";
			// 
			// parserCoordButton
			// 
			this->parserCoordButton->Location = System::Drawing::Point(352, 162);
			this->parserCoordButton->Name = L"parserCoordButton";
			this->parserCoordButton->Size = System::Drawing::Size(75, 23);
			this->parserCoordButton->TabIndex = 6;
			this->parserCoordButton->Text = L"Assign";
			this->parserCoordButton->UseVisualStyleBackColor = true;
			this->parserCoordButton->Click += gcnew System::EventHandler(this, &parserGUI::parserCoordButton_Click);
			// 
			// youButton
			// 
			this->youButton->Location = System::Drawing::Point(61, 363);
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
			this->charactersLabel->Location = System::Drawing::Point(262, 329);
			this->charactersLabel->Name = L"charactersLabel";
			this->charactersLabel->Size = System::Drawing::Size(77, 17);
			this->charactersLabel->TabIndex = 10;
			this->charactersLabel->Text = L"Characters";
			// 
			// narratorButton
			// 
			this->narratorButton->Location = System::Drawing::Point(167, 363);
			this->narratorButton->Name = L"narratorButton";
			this->narratorButton->Size = System::Drawing::Size(75, 23);
			this->narratorButton->TabIndex = 11;
			this->narratorButton->Text = L"Narrator(2)";
			this->narratorButton->UseVisualStyleBackColor = true;
			this->narratorButton->Click += gcnew System::EventHandler(this, &parserGUI::narratorButton_Click);
			// 
			// char3Button
			// 
			this->char3Button->Location = System::Drawing::Point(265, 363);
			this->char3Button->Name = L"char3Button";
			this->char3Button->Size = System::Drawing::Size(75, 23);
			this->char3Button->TabIndex = 12;
			this->char3Button->Text = L"Char 3(3)";
			this->char3Button->UseVisualStyleBackColor = true;
			this->char3Button->Click += gcnew System::EventHandler(this, &parserGUI::char3Button_Click);
			// 
			// char4Button
			// 
			this->char4Button->Location = System::Drawing::Point(364, 363);
			this->char4Button->Name = L"char4Button";
			this->char4Button->Size = System::Drawing::Size(75, 23);
			this->char4Button->TabIndex = 13;
			this->char4Button->Text = L"Char 4(4)";
			this->char4Button->UseVisualStyleBackColor = true;
			this->char4Button->Click += gcnew System::EventHandler(this, &parserGUI::char4Button_Click);
			// 
			// char5Button
			// 
			this->char5Button->Location = System::Drawing::Point(456, 363);
			this->char5Button->Name = L"char5Button";
			this->char5Button->Size = System::Drawing::Size(75, 23);
			this->char5Button->TabIndex = 14;
			this->char5Button->Text = L"Char 5(5)";
			this->char5Button->UseVisualStyleBackColor = true;
			this->char5Button->Click += gcnew System::EventHandler(this, &parserGUI::char5Button_Click);
			// 
			// char0Button
			// 
			this->char0Button->Location = System::Drawing::Point(456, 406);
			this->char0Button->Name = L"char0Button";
			this->char0Button->Size = System::Drawing::Size(75, 23);
			this->char0Button->TabIndex = 19;
			this->char0Button->Text = L"Char 10(0)";
			this->char0Button->UseVisualStyleBackColor = true;
			this->char0Button->Click += gcnew System::EventHandler(this, &parserGUI::char0Button_Click);
			// 
			// char9Button
			// 
			this->char9Button->Location = System::Drawing::Point(364, 406);
			this->char9Button->Name = L"char9Button";
			this->char9Button->Size = System::Drawing::Size(75, 23);
			this->char9Button->TabIndex = 18;
			this->char9Button->Text = L"Char 9(9)";
			this->char9Button->UseVisualStyleBackColor = true;
			this->char9Button->Click += gcnew System::EventHandler(this, &parserGUI::char9Button_Click);
			// 
			// char8Button
			// 
			this->char8Button->Location = System::Drawing::Point(265, 406);
			this->char8Button->Name = L"char8Button";
			this->char8Button->Size = System::Drawing::Size(75, 23);
			this->char8Button->TabIndex = 17;
			this->char8Button->Text = L"Char 8(8)";
			this->char8Button->UseVisualStyleBackColor = true;
			this->char8Button->Click += gcnew System::EventHandler(this, &parserGUI::char8Button_Click);
			// 
			// char7Button
			// 
			this->char7Button->Location = System::Drawing::Point(167, 406);
			this->char7Button->Name = L"char7Button";
			this->char7Button->Size = System::Drawing::Size(75, 23);
			this->char7Button->TabIndex = 16;
			this->char7Button->Text = L"Char 7(7)";
			this->char7Button->UseVisualStyleBackColor = true;
			this->char7Button->Click += gcnew System::EventHandler(this, &parserGUI::char7Button_Click);
			// 
			// char6Button
			// 
			this->char6Button->Location = System::Drawing::Point(61, 406);
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
			this->othersLabel->Location = System::Drawing::Point(262, 576);
			this->othersLabel->Name = L"othersLabel";
			this->othersLabel->Size = System::Drawing::Size(79, 17);
			this->othersLabel->TabIndex = 20;
			this->othersLabel->Text = L"Enviroment";
			// 
			// nextLineButton
			// 
			this->nextLineButton->Location = System::Drawing::Point(61, 691);
			this->nextLineButton->Name = L"nextLineButton";
			this->nextLineButton->Size = System::Drawing::Size(470, 23);
			this->nextLineButton->TabIndex = 23;
			this->nextLineButton->Text = L"Next Line(N)";
			this->nextLineButton->UseVisualStyleBackColor = true;
			this->nextLineButton->Click += gcnew System::EventHandler(this, &parserGUI::nextLineButton_Click);
			// 
			// musicButton
			// 
			this->musicButton->Location = System::Drawing::Point(237, 618);
			this->musicButton->Name = L"musicButton";
			this->musicButton->Size = System::Drawing::Size(125, 23);
			this->musicButton->TabIndex = 22;
			this->musicButton->Text = L"Music(M)";
			this->musicButton->UseVisualStyleBackColor = true;
			this->musicButton->Click += gcnew System::EventHandler(this, &parserGUI::musicButton_Click);
			// 
			// backgroundButton
			// 
			this->backgroundButton->Location = System::Drawing::Point(61, 618);
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
			this->splitter1->Size = System::Drawing::Size(3, 849);
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
			this->actualLineLabel->Location = System::Drawing::Point(64, 244);
			this->actualLineLabel->Name = L"actualLineLabel";
			this->actualLineLabel->Size = System::Drawing::Size(77, 17);
			this->actualLineLabel->TabIndex = 25;
			this->actualLineLabel->Text = L"Actual line:";
			// 
			// actualLine
			// 
			this->actualLine->AutoSize = true;
			this->actualLine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->actualLine->Location = System::Drawing::Point(164, 244);
			this->actualLine->Name = L"actualLine";
			this->actualLine->Size = System::Drawing::Size(45, 17);
			this->actualLine->TabIndex = 26;
			this->actualLine->Text = L"(Line)";
			// 
			// choiceButton
			// 
			this->choiceButton->Location = System::Drawing::Point(61, 496);
			this->choiceButton->Name = L"choiceButton";
			this->choiceButton->Size = System::Drawing::Size(105, 23);
			this->choiceButton->TabIndex = 27;
			this->choiceButton->Text = L"Choice(C)";
			this->choiceButton->UseVisualStyleBackColor = true;
			this->choiceButton->Click += gcnew System::EventHandler(this, &parserGUI::choiceButton_Click);
			// 
			// optionButton
			// 
			this->optionButton->Location = System::Drawing::Point(182, 496);
			this->optionButton->Name = L"optionButton";
			this->optionButton->Size = System::Drawing::Size(105, 23);
			this->optionButton->TabIndex = 28;
			this->optionButton->Text = L"Option(O)";
			this->optionButton->UseVisualStyleBackColor = true;
			this->optionButton->Click += gcnew System::EventHandler(this, &parserGUI::optionButton_Click);
			// 
			// textFromOtherOptionButton
			// 
			this->textFromOtherOptionButton->Location = System::Drawing::Point(61, 537);
			this->textFromOtherOptionButton->Name = L"textFromOtherOptionButton";
			this->textFromOtherOptionButton->Size = System::Drawing::Size(226, 23);
			this->textFromOtherOptionButton->TabIndex = 29;
			this->textFromOtherOptionButton->Text = L"Text from other option(Z)";
			this->textFromOtherOptionButton->UseVisualStyleBackColor = true;
			this->textFromOtherOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::textFromOtherOptionButton_Click);
			// 
			// resultingLine
			// 
			this->resultingLine->AutoSize = true;
			this->resultingLine->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->resultingLine->Location = System::Drawing::Point(164, 279);
			this->resultingLine->Name = L"resultingLine";
			this->resultingLine->Size = System::Drawing::Size(45, 17);
			this->resultingLine->TabIndex = 30;
			this->resultingLine->Text = L"(Line)";
			// 
			// resultingLineLabel
			// 
			this->resultingLineLabel->AutoSize = true;
			this->resultingLineLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->resultingLineLabel->Location = System::Drawing::Point(63, 279);
			this->resultingLineLabel->Name = L"resultingLineLabel";
			this->resultingLineLabel->Size = System::Drawing::Size(97, 17);
			this->resultingLineLabel->TabIndex = 31;
			this->resultingLineLabel->Text = L"Resulting line:";
			// 
			// saveFile
			// 
			this->saveFile->Location = System::Drawing::Point(255, 797);
			this->saveFile->Name = L"saveFile";
			this->saveFile->Size = System::Drawing::Size(75, 23);
			this->saveFile->TabIndex = 32;
			this->saveFile->Text = L"Save";
			this->saveFile->UseVisualStyleBackColor = true;
			this->saveFile->Click += gcnew System::EventHandler(this, &parserGUI::saveFile_Click);
			// 
			// selectedOptionButton
			// 
			this->selectedOptionButton->Location = System::Drawing::Point(426, 496);
			this->selectedOptionButton->Name = L"selectedOptionButton";
			this->selectedOptionButton->Size = System::Drawing::Size(105, 23);
			this->selectedOptionButton->TabIndex = 33;
			this->selectedOptionButton->Text = L"Selected Option(S)";
			this->selectedOptionButton->UseVisualStyleBackColor = true;
			this->selectedOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::selectedOptionButton_Click);
			// 
			// customizationButton
			// 
			this->customizationButton->Location = System::Drawing::Point(406, 618);
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
			this->choicesOptionsLabel->Location = System::Drawing::Point(236, 453);
			this->choicesOptionsLabel->Name = L"choicesOptionsLabel";
			this->choicesOptionsLabel->Size = System::Drawing::Size(136, 17);
			this->choicesOptionsLabel->TabIndex = 35;
			this->choicesOptionsLabel->Text = L"Choices and options";
			// 
			// premiumOptionButton
			// 
			this->premiumOptionButton->Location = System::Drawing::Point(307, 496);
			this->premiumOptionButton->Name = L"premiumOptionButton";
			this->premiumOptionButton->Size = System::Drawing::Size(105, 23);
			this->premiumOptionButton->TabIndex = 36;
			this->premiumOptionButton->Text = L"Premium Option(P)";
			this->premiumOptionButton->UseVisualStyleBackColor = true;
			this->premiumOptionButton->Click += gcnew System::EventHandler(this, &parserGUI::premiumOptionButton_Click);
			// 
			// premiumSelectedOption
			// 
			this->premiumSelectedOption->Location = System::Drawing::Point(307, 537);
			this->premiumSelectedOption->Name = L"premiumSelectedOption";
			this->premiumSelectedOption->Size = System::Drawing::Size(224, 23);
			this->premiumSelectedOption->TabIndex = 37;
			this->premiumSelectedOption->Text = L"Premium Selected Option(X)";
			this->premiumSelectedOption->UseVisualStyleBackColor = true;
			this->premiumSelectedOption->Click += gcnew System::EventHandler(this, &parserGUI::premiumSelectedOption_Click);
			// 
			// lastLineButton
			// 
			this->lastLineButton->Location = System::Drawing::Point(61, 735);
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
			this->linesLabel->Location = System::Drawing::Point(277, 657);
			this->linesLabel->Name = L"linesLabel";
			this->linesLabel->Size = System::Drawing::Size(42, 17);
			this->linesLabel->TabIndex = 39;
			this->linesLabel->Text = L"Lines";
			// 
			// parserGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(595, 849);
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
			this->Controls->Add(this->char0Button);
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
			
			//Declaramos un id para poder controlar la línea del array sobre la cual estamos trabajando
			int lineID					= 0;
			bool captureCoordinatesEmu	= false;
			bool captureCoordinatesTer	= false;
			bool fileopened				= false;
			bool pauseLine				= false;
			bool nextLineWrong			= false;
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
					String^ buttonText = managedNativetoStr(line + "(" + std::to_string(counter+3) + ")");
					buttons[counter]->Text = buttonText;
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
		cli::array<Button^, 1>^ buttons = gcnew cli::array<Button^, 1>(8);
		buttons[0] = (char3Button);
		buttons[1] = (char4Button);
		buttons[2] = (char5Button);
		buttons[3] = (char6Button);
		buttons[4] = (char7Button);
		buttons[5] = (char8Button);
		buttons[6] = (char9Button);
		buttons[7] = (char0Button);
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
		char0Button->Enabled				= state;
		char9Button->Enabled				= state;
		char8Button->Enabled				= state;
		char7Button->Enabled				= state;
		char6Button->Enabled				= state;
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

	private: System::Void char0Button_Click(System::Object^  sender, System::EventArgs^  e) {
		anotherCharsMethod(0);
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
		cordinatesEmuLabel->Text = "Press L to capture";
		captureCoordinatesEmu = true;
	}
/////////////////////////////////KEYBOARD CONTROLS//////////////////////////////////////////////////////////////////
	private: System::Void keyboard_KeyDown(Object^ /*sender*/, System::Windows::Forms::KeyEventArgs^ e)
	{
		// Capture Emulator Coordinates
		if (e->KeyCode == Keys::L && captureCoordinatesEmu)
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
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

		SetCursorPos(terX, terY);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
		mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	}

////////////////////////////////////////////BEHAVIOUR METHODS///////////////////////////////////////////////
	///////// Characters ///////
	private: System::Void youMethod() {
		line2Add = "You ; " + actualLine->Text;
		saveLine(line2Add);
		resultingLine->Text = line2Add;
		if (pauseLine) {
			actualLine->Text = pausedLine;
			pauseLine = false;
		}
		else {
			showNextLine();
			clickAndContinue();
		}
	}

	private: System::Void narratorMethod() {
		line2Add = "Narrator; " + actualLine->Text;
		saveLine(line2Add);
		resultingLine->Text = line2Add;
		if (pauseLine) {
			actualLine->Text = pausedLine;
			pauseLine = false;
		}
		else {
			showNextLine();
			clickAndContinue();
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
				writeCharacterNameInLabelFromButton(char0Button);
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
			clickAndContinue();
		}
	}

	/////////// Options & Enviroment //////////////
	private: System::Void optionsMethod(char choose) {
		switch (choose) {
			//// Options ////
			case 67: // C Choice
				line2Add = "Choice; " + actualLine->Text;
				break;
			case 79: // O Option
				line2Add = "Option; ;" + actualLine->Text;
				break;
			case 80: // P Premium option
				line2Add = "Premium Option; ; **" + actualLine->Text;
				break;
			case 83: // S Selected option
				line2Add = "Option; ; **" + actualLine->Text;
				break;
			case 90: // Z Text from other option
				line2Add = "; ; Text from other option; ;" + actualLine->Text;
				break;
			case 88: // X Premium selected option
				line2Add = "Premium Option; ; **" + actualLine->Text;
				break;
			//// Enviroment ////
			case 66: // B Background
				line2Add = "Scene; " + actualLine->Text;
				break;
			case 77: // M Music
				line2Add = "Music; " + actualLine->Text;
				break;
			case 89: // Y Customization
				line2Add = "Customization; " + actualLine->Text;
				break;
			default:
				break;

		}
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
		line2Add = characterName + "; " + actualLine->Text;
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

