#include "parseGUI.h"
//#include "parseChoices.h"


using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	ParseChoicesFiles::parseGUI form;
	Application::Run(%form);





	
}


