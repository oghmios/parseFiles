#pragma once
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


class parserSource{
	
	public:

			double test;
			std::vector<double> mousePosition;
			std::vector<double> terminalPosition;

			std::ifstream chapter;
			std::vector<std::string> characters;

			double * calculateMousePosition();
			double * calculateTerminalPosition();
			void mouseClick(std::vector<double> mouse, std::vector<double> terminal);
			void saveAndNext(std::string choice, std::string sentence);

			void testingOpen(System::Windows::Forms::OpenFileDialog^  openDialog);
		


	private:
};