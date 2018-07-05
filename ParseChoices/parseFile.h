#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

class parseFile
{
public:
	parseFile(std::string sentence);
	~parseFile();

	std::string getWords();
	bool readFile(char fileName);



	


private:
	std::string words;
	
};

