#include "../includes/constants.h"
#include "../includes/fileio.h"
#include "../includes/stringmanip.h"

#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;
using namespace KP;

int writeFile(std::string &filename,char *contents){
	ofstream outputFile;
	outputFile.open(filename.c_str());
	outputFile << contents;
	outputFile.close();
	return 0;
}

int readFile(std::string &filename,std::string &contents){
	ifstream inputFile;
	inputFile.open(filename.c_str());

	string nextLine;

	while (!inputFile.eof()){
		getline(inputFile, nextLine);
		cout << nextLine;
	}

	inputFile.close();
	return 0;
}
