// ParseChoices.cpp : Defines the entry point for the console application.
//

#include "ParseChoices.h"


using namespace std;

int doThings()
{
	ParseChoices parse;
	parse.test = 2;
	double test2 = 2;

	parse.chapter = parse.openFiletoParse();
	parse.characters.push_back("You");
	parse.characters.push_back("Narrator");
	std::string line;
	if (parse.chapter.is_open())
	{
		bool getCharacters = true;
		while (getCharacters) {
			getline(parse.chapter, line);
			if (line == "Character:") {
				getline(parse.chapter, line);
				parse.characters.push_back(line);
			}
			else if (line == "ENDOFCHARACTERS") {
				getCharacters = false;
			}
		}

	}
	/*std::cout << "Now put the name of your output file" << endl;
	std::string output;
	cin >> output;*/
	fileParsed.open("example.csv");



	double *positionsAux = parse.calculateMousePosition();
	parse.mousePosition.push_back(*(positionsAux + 0));
	parse.mousePosition.push_back(*(positionsAux + 1));
	std::cout << "Mouse position is: x:" << parse.mousePosition.at(0) << " y:" << parse.mousePosition.at(1) << endl;

	positionsAux = parse.calculateTerminalPosition();
	parse.terminalPosition.push_back(*(positionsAux + 0));
	parse.terminalPosition.push_back(*(positionsAux + 1));
	std::cout << "Terminal position is: x:" << parse.terminalPosition.at(0) << " y:" << parse.terminalPosition.at(1) << endl;


	char keyPressed = 'l';
	streampos oldPos = parse.chapter.tellg();
	bool wrongLine = false;

	while (keyPressed != '0') {

		if (!wrongLine) {
			getline(parse.chapter, line);
			std::cout << "Sentence: " << line << endl;
			std::cout << "Write your choice" << endl;
		}
		else {
			parse.chapter.seekg(oldPos);
			getline(parse.chapter, line);
			std::cout << "Reassign last line: " << line << endl;
			wrongLine = false;
		}

		keyPressed = _getch();

		switch (keyPressed)
		{
		case 'q': // First character YOU
			if (parse.characters.size() > 0) {
				std::cout << "Sentence saved for: " << parse.characters.at(0) << endl;
				parse.saveAndNext(parse.characters.at(0), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;

		case 'w': // Second character NARRATOR
			if (parse.characters.size() > 1) {
				std::cout << "Sentence saved for: " << parse.characters.at(1) << endl;
				parse.saveAndNext(parse.characters.at(1), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'e': // Third character
			if (parse.characters.size() > 2) {
				std::cout << "Sentence saved for: " << parse.characters.at(2) << endl;
				parse.saveAndNext(parse.characters.at(2), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'r': // Fourth character
			if (parse.characters.size() > 3) {
				std::cout << "Sentence saved for: " << parse.characters.at(3) << endl;
				parse.saveAndNext(parse.characters.at(3), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 't': // Fifth character
			if (parse.characters.size() > 4) {
				std::cout << "Sentence saved for: " << parse.characters.at(4) << endl;
				parse.saveAndNext(parse.characters.at(4), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'y': // Sixth character
			if (parse.characters.size() > 5) {
				std::cout << "Sentence saved for: " << parse.characters.at(5) << endl;
				parse.saveAndNext(parse.characters.at(5), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'u': // Seventh character
			if (parse.characters.size() > 6) {
				std::cout << "Sentence saved for: " << parse.characters.at(6) << endl;
				parse.saveAndNext(parse.characters.at(6), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'i': // Eighth character
			if (parse.characters.size() > 7) {
				std::cout << "Sentence saved for: " << parse.characters.at(7) << endl;
				parse.saveAndNext(parse.characters.at(7), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'o': // Ninth character
			if (parse.characters.size() > 8) {
				std::cout << "Sentence saved for: " << parse.characters.at(8) << endl;
				parse.saveAndNext(parse.characters.at(8), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'p': // Tenth character
			if (parse.characters.size() > 9) {
				std::cout << "Sentence saved for: " << parse.characters.at(9) << endl;
				parse.saveAndNext(parse.characters.at(9), line);
				parse.mouseClick(parse.mousePosition, parse.terminalPosition);
				oldPos = parse.chapter.tellg();
			}
			else {
				std::cout << "Character not found, try another" << endl;
			}
			break;
		case 'a': // Choice
			std::cout << "A choice appears, select your option" << endl;
			parse.mouseClick(parse.mousePosition, parse.terminalPosition);
			parse.saveAndNext("Choice", line);
			oldPos = parse.chapter.tellg();
			break;
		case 's': // New background
			std::cout << "New background, saving and next sentence" << endl;
			parse.saveAndNext("Background", line);
			oldPos = parse.chapter.tellg();
			break;
		case 'd': // New music
			std::cout << "New music, saving and next sentence" << endl;
			parse.saveAndNext("Music", line);
			oldPos = parse.chapter.tellg();
			break;

		case 'm': // Add new positions
			std::cout << "Reset" << endl << "Insert new positions" << endl;
			positionsAux = parse.calculateMousePosition();
			parse.mousePosition.clear();
			parse.mousePosition.push_back(*(positionsAux + 0));
			parse.mousePosition.push_back(*(positionsAux + 1));
			std::cout << "Mouse position is: x:" << parse.mousePosition.at(0) << " y:" << parse.mousePosition.at(1) << endl;
			positionsAux = parse.calculateTerminalPosition();
			parse.terminalPosition.clear();
			parse.terminalPosition.push_back(*(positionsAux + 0));
			parse.terminalPosition.push_back(*(positionsAux + 1));
			std::cout << "Terminal position is: x:" << parse.terminalPosition.at(0) << " y:" << parse.terminalPosition.at(1) << endl;
			break;

		case 'k': // Wrong line, go to last line
			std::cout << "Last line" << endl;
			wrongLine = true;
			break;
		case 'z': // When the line doesn't appear in the game
			std::cout << "Next line" << endl;
			oldPos = parse.chapter.tellg();
			break;
		default:
			break;
		}




	}
	fileParsed.close();

	std::cout << "Thank you for using" << endl;




	system("PAUSE");
	return 0;
}

double * ParseChoices::calculateMousePosition() {

	POINT p;
	static double mousePosition[2];

	std::cout << "Get mouse position. Press 'P' to save current position" << endl;
	char captureMouse = _getch();
	if (captureMouse == 'p') {
		GetCursorPos(&p);
		mousePosition[0] = p.x;
		mousePosition[1] = p.y;
	}

	std::cout << "Mouse position is: x:" << mousePosition[0] << " y:" << mousePosition[1] << endl << "It is correct? (Y/N)" << endl;
	char correctmousePosition = _getch();
	while (correctmousePosition != 'y') {
		std::cout << "Get mouse position. Press 'P' to save current position" << endl;
		captureMouse = _getch();
		if (captureMouse == 'p') {
			GetCursorPos(&p);
			mousePosition[0] = p.x;
			mousePosition[1] = p.y;
		}
		std::cout << "Mouse position is: x:" << mousePosition[0] << " y:" << mousePosition[1] << endl << "It is correct? (Y/N)" << endl;
		correctmousePosition = _getch();
	}

	return mousePosition;
}

double * ParseChoices::calculateTerminalPosition() {

	POINT p;
	static double mousePosition[2];

	std::cout << "Now get terminal position. Press 'P' to save current position" << endl;

	char captureMouse = _getch();
	if (captureMouse == 'p') {
		GetCursorPos(&p);
		mousePosition[0] = p.x;
		mousePosition[1] = p.y;
	}

	std::cout << "Mouse position is: x:" << mousePosition[0] << " y:" << mousePosition[1] << endl << "It is correct? (Y/N)" << endl;
	char correctmousePosition = _getch();
	while (correctmousePosition != 'y') {
		std::cout << "Get terminal position. Press 'P' to save current position" << endl;
		captureMouse = _getch();
		if (captureMouse == 'p') {
			GetCursorPos(&p);
			mousePosition[0] = p.x;
			mousePosition[1] = p.y;
		}
		std::cout << "Mouse position is: x:" << mousePosition[0] << " y:" << mousePosition[1] << endl << "It is correct? (Y/N)" << endl;
		correctmousePosition = _getch();
	}

	return mousePosition;
}


void ParseChoices::mouseClick(std::vector<double> mouse, std::vector<double> terminal) {

	SetCursorPos(mouse.at(0), mouse.at(1));
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

	SetCursorPos(terminal.at(0), terminal.at(1));
	mouse_event(MOUSEEVENTF_LEFTDOWN, 0, 0, 0, 0);
	mouse_event(MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);
}

void ParseChoices::saveAndNext(std::string choice, std::string sentence) {

	// escribe en un vector hasta que termine  con el archivo
	fileParsed << choice << ";" << sentence << std::endl;
}


std::ifstream ParseChoices::openFiletoParse() {
	std::ifstream file;
	std::string filename;

	//filename = "chapter1.txt";

	std::cout << "Write name of the file to open:" << endl;
	cin >> filename;
	file.open(filename);

	return file;
}


