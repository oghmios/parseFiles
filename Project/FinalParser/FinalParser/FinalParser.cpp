// FinalParser.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	FinalParser::parserGUI mainForm;
	Application::Run(%mainForm);
	
	System::Windows::Forms::OpenFileDialog^  openDialog;

    return 0;
}

void openFileForParse(System::Windows::Forms::OpenFileDialog ^ openDialog)
{
}