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

//using namespace std;

class ParseChoices
{

public:
	std::vector<double> mousePosition;
	std::vector<double> terminalPosition;
	double test;

	std::ifstream chapter;
	std::vector<std::string> characters;

	double * calculateMousePosition();
	double * calculateTerminalPosition();
	void mouseClick(std::vector<double> mouse, std::vector<double> terminal);
	void saveAndNext(std::string choice, std::string sentence);
	int doThings();

	std::ifstream openFiletoParse();


private:

};

std::vector<std::string> toTheFile;
std::ofstream fileParsed;


