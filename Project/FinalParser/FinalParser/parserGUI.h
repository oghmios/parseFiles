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

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::PrintDialog^  printDialog1;
	private: System::Windows::Forms::Label^  actualLineDesLabel;
	private: System::Windows::Forms::Label^  actualLineLabel;
	private: System::Windows::Forms::Button^  choiceButton;
	private: System::Windows::Forms::Button^  optionButton;
	private: System::Windows::Forms::Button^  nonOptionButton;
	private: System::Windows::Forms::Label^  pruebaFuncionLabel;
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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->printDialog1 = (gcnew System::Windows::Forms::PrintDialog());
			this->actualLineDesLabel = (gcnew System::Windows::Forms::Label());
			this->actualLineLabel = (gcnew System::Windows::Forms::Label());
			this->choiceButton = (gcnew System::Windows::Forms::Button());
			this->optionButton = (gcnew System::Windows::Forms::Button());
			this->nonOptionButton = (gcnew System::Windows::Forms::Button());
			this->pruebaFuncionLabel = (gcnew System::Windows::Forms::Label());
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
			// 
			// youButton
			// 
			this->youButton->Location = System::Drawing::Point(61, 363);
			this->youButton->Name = L"youButton";
			this->youButton->Size = System::Drawing::Size(75, 23);
			this->youButton->TabIndex = 9;
			this->youButton->Text = L"You(1)";
			this->youButton->UseVisualStyleBackColor = true;
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
			// 
			// char3Button
			// 
			this->char3Button->Location = System::Drawing::Point(265, 363);
			this->char3Button->Name = L"char3Button";
			this->char3Button->Size = System::Drawing::Size(75, 23);
			this->char3Button->TabIndex = 12;
			this->char3Button->Text = L"Char 3(3)";
			this->char3Button->UseVisualStyleBackColor = true;
			// 
			// char4Button
			// 
			this->char4Button->Location = System::Drawing::Point(364, 363);
			this->char4Button->Name = L"char4Button";
			this->char4Button->Size = System::Drawing::Size(75, 23);
			this->char4Button->TabIndex = 13;
			this->char4Button->Text = L"Char 4(4)";
			this->char4Button->UseVisualStyleBackColor = true;
			// 
			// char5Button
			// 
			this->char5Button->Location = System::Drawing::Point(456, 363);
			this->char5Button->Name = L"char5Button";
			this->char5Button->Size = System::Drawing::Size(75, 23);
			this->char5Button->TabIndex = 14;
			this->char5Button->Text = L"Char 5(5)";
			this->char5Button->UseVisualStyleBackColor = true;
			// 
			// char0Button
			// 
			this->char0Button->Location = System::Drawing::Point(456, 406);
			this->char0Button->Name = L"char0Button";
			this->char0Button->Size = System::Drawing::Size(75, 23);
			this->char0Button->TabIndex = 19;
			this->char0Button->Text = L"Char 10(0)";
			this->char0Button->UseVisualStyleBackColor = true;
			// 
			// char9Button
			// 
			this->char9Button->Location = System::Drawing::Point(364, 406);
			this->char9Button->Name = L"char9Button";
			this->char9Button->Size = System::Drawing::Size(75, 23);
			this->char9Button->TabIndex = 18;
			this->char9Button->Text = L"Char 9(9)";
			this->char9Button->UseVisualStyleBackColor = true;
			// 
			// char8Button
			// 
			this->char8Button->Location = System::Drawing::Point(265, 406);
			this->char8Button->Name = L"char8Button";
			this->char8Button->Size = System::Drawing::Size(75, 23);
			this->char8Button->TabIndex = 17;
			this->char8Button->Text = L"Char 8(8)";
			this->char8Button->UseVisualStyleBackColor = true;
			// 
			// char7Button
			// 
			this->char7Button->Location = System::Drawing::Point(167, 406);
			this->char7Button->Name = L"char7Button";
			this->char7Button->Size = System::Drawing::Size(75, 23);
			this->char7Button->TabIndex = 16;
			this->char7Button->Text = L"Char 7(7)";
			this->char7Button->UseVisualStyleBackColor = true;
			// 
			// char6Button
			// 
			this->char6Button->Location = System::Drawing::Point(61, 406);
			this->char6Button->Name = L"char6Button";
			this->char6Button->Size = System::Drawing::Size(75, 23);
			this->char6Button->TabIndex = 15;
			this->char6Button->Text = L"Char 6(6)";
			this->char6Button->UseVisualStyleBackColor = true;
			// 
			// othersLabel
			// 
			this->othersLabel->AutoSize = true;
			this->othersLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->othersLabel->Location = System::Drawing::Point(275, 448);
			this->othersLabel->Name = L"othersLabel";
			this->othersLabel->Size = System::Drawing::Size(51, 17);
			this->othersLabel->TabIndex = 20;
			this->othersLabel->Text = L"Others";
			// 
			// nextLineButton
			// 
			this->nextLineButton->Location = System::Drawing::Point(278, 483);
			this->nextLineButton->Name = L"nextLineButton";
			this->nextLineButton->Size = System::Drawing::Size(75, 23);
			this->nextLineButton->TabIndex = 23;
			this->nextLineButton->Text = L"Next Line(N)";
			this->nextLineButton->UseVisualStyleBackColor = true;
			this->nextLineButton->Click += gcnew System::EventHandler(this, &parserGUI::nextLineButton_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(180, 483);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 22;
			this->button2->Text = L"Music(M)";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(61, 483);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(89, 23);
			this->button3->TabIndex = 21;
			this->button3->Text = L"Background(B)";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(0, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 571);
			this->splitter1->TabIndex = 24;
			this->splitter1->TabStop = false;
			// 
			// printDialog1
			// 
			this->printDialog1->UseEXDialog = true;
			// 
			// actualLineDesLabel
			// 
			this->actualLineDesLabel->AutoSize = true;
			this->actualLineDesLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->actualLineDesLabel->Location = System::Drawing::Point(64, 244);
			this->actualLineDesLabel->Name = L"actualLineDesLabel";
			this->actualLineDesLabel->Size = System::Drawing::Size(77, 17);
			this->actualLineDesLabel->TabIndex = 25;
			this->actualLineDesLabel->Text = L"Actual line:";
			// 
			// actualLineLabel
			// 
			this->actualLineLabel->AutoSize = true;
			this->actualLineLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->actualLineLabel->Location = System::Drawing::Point(164, 244);
			this->actualLineLabel->Name = L"actualLineLabel";
			this->actualLineLabel->Size = System::Drawing::Size(45, 17);
			this->actualLineLabel->TabIndex = 26;
			this->actualLineLabel->Text = L"(Line)";
			// 
			// choiceButton
			// 
			this->choiceButton->Location = System::Drawing::Point(373, 483);
			this->choiceButton->Name = L"choiceButton";
			this->choiceButton->Size = System::Drawing::Size(75, 23);
			this->choiceButton->TabIndex = 27;
			this->choiceButton->Text = L"Choice(C)";
			this->choiceButton->UseVisualStyleBackColor = true;
			// 
			// optionButton
			// 
			this->optionButton->Location = System::Drawing::Point(470, 483);
			this->optionButton->Name = L"optionButton";
			this->optionButton->Size = System::Drawing::Size(75, 23);
			this->optionButton->TabIndex = 28;
			this->optionButton->Text = L"Option(O)";
			this->optionButton->UseVisualStyleBackColor = true;
			// 
			// nonOptionButton
			// 
			this->nonOptionButton->Location = System::Drawing::Point(61, 536);
			this->nonOptionButton->Name = L"nonOptionButton";
			this->nonOptionButton->Size = System::Drawing::Size(102, 23);
			this->nonOptionButton->TabIndex = 29;
			this->nonOptionButton->Text = L"Non option(Z)";
			this->nonOptionButton->UseVisualStyleBackColor = true;
			// 
			// pruebaFuncionLabel
			// 
			this->pruebaFuncionLabel->AutoSize = true;
			this->pruebaFuncionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->pruebaFuncionLabel->Location = System::Drawing::Point(164, 279);
			this->pruebaFuncionLabel->Name = L"pruebaFuncionLabel";
			this->pruebaFuncionLabel->Size = System::Drawing::Size(45, 17);
			this->pruebaFuncionLabel->TabIndex = 30;
			this->pruebaFuncionLabel->Text = L"(Line)";
			// 
			// parserGUI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(621, 571);
			this->Controls->Add(this->pruebaFuncionLabel);
			this->Controls->Add(this->nonOptionButton);
			this->Controls->Add(this->optionButton);
			this->Controls->Add(this->choiceButton);
			this->Controls->Add(this->actualLineLabel);
			this->Controls->Add(this->actualLineDesLabel);
			this->Controls->Add(this->splitter1);
			this->Controls->Add(this->nextLineButton);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
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
			this->Name = L"parserGUI";
			this->Text = L"Parche Choices";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void parserGUI_Load(System::Object^  sender, System::EventArgs^  e) {
	}
			 //Inicializamos el array de lineas fuera, puesto que vamos a trabajar con él durante toda la ejecución del programa
			 System::Collections::ArrayList fileLines;
			 System::Collections::ArrayList finalLines;
			 //Declaramos un id para poder controlar la línea del array sobre la cual estamos trabajando
			 int lineID = 0;

	private: System::Void openButton_Click(System::Object^  sender, System::EventArgs^  e) {
		openDialog->ShowDialog();
		String^ systemFileName = openDialog->FileName;


		std::string fileName = managedStrToNative(systemFileName);
		char filePath[100];
		for (unsigned i = 0; i < fileName.length(); i++) {
			filePath[i] = fileName.at(i);
		}

		std::fstream inFile;
		inFile.open(fileName);

		if (inFile.is_open()) {

			bool getCharacters = true;
			std::string line;
			while (getCharacters) {
				std::getline(inFile, line);
				if (line == "Character:") {
					std::getline(inFile, line);
					std::string a = line + "(3)";
					char3Button->Text = managedNativetoStr(a);
					//Guardar los characters en un array o vector para poder asignarlos luego, acordarse de que primero hay que guardar You y Narrator
				}
				else if (line == "ENDOFCHARACTERS") {
					getCharacters = false;
				}
			}

			
			//bool readFile = true;
			while (std::getline(inFile, line)) {
				std::string strLine(line);
				String^ systemLine = gcnew String(strLine.c_str());
				fileLines.Add(systemLine);
			}
			
			

			inFile.close();
		}

		// Save all the charachters into their respective buttons

		String^ newLine = static_cast<String^>(fileLines[lineID]);
		actualLineLabel->Text = newLine;

		

	}

	private: System::Void emulatorCoordButton_Click(System::Object^  sender, System::EventArgs^  e) {
		FinalParser::MessageBox::Show("aasd");

	}
	
	// System string to std string
	std::string managedStrToNative(System::String^ sysstr){
	
		using System::IntPtr;		 
		using System::Runtime::InteropServices::Marshal;

		IntPtr ip = Marshal::StringToHGlobalAnsi(sysstr);
		std::string outString = static_cast<const char*>(ip.ToPointer());
		Marshal::FreeHGlobal(ip);
		return outString;
	}
	
	 //std string to system string
	System::String^ managedNativetoStr(std::string str)
	{
		 
		String^ systemLine = gcnew String(str.c_str());
		return systemLine;

	}


	// std string + system string to system string
	System::String^ createSentence(std::string name, System::String^ sentence){

		std::string sentStd = managedStrToNative(sentence);
		std::string twoStrings = name + " , " + sentStd;
		String^ completeSentence = managedNativetoStr(twoStrings);
		return completeSentence;

	}

	private: System::Void nextLineButton_Click(System::Object^  sender, System::EventArgs^  e) {
		String^ actualLine = createSentence("becca"/* recoger el nombre del character que corresponda*/, static_cast<String^>(fileLines[lineID]));
		pruebaFuncionLabel->Text = actualLine;
		finalLines.Add(actualLine);


		lineID++;
		String^ newLine = static_cast<String^>(fileLines[lineID]);
		actualLineLabel->Text = newLine;
	}

};
}

