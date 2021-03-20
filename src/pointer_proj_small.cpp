//============================================================================
// Name        : pointer_proj_small.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string.h>
using namespace std;
#include "../includes/constants.h"
#include "../includes/stringmanip.h"
#include "../includes/fileio.h"


int main(int argc, char *argv[]) {	

	if (argc == 1){
		//if (argv[1] == HELP_CHAR){
			cout << HELP_STRING1;
			cout << HELP_STRING2;
			return SUCCESS;
		//}
	}
	if( argc != EXPECTED_NUMBER_ARGUMENTS ){
		cout << HELP_STRING2;
		return FAIL_WRONG_NUMBER_ARGS;
	}
	string infile = argv[0];
	string outfile = argv[1];
	string tag = argv[2];
	string replaceTag = argv[3];


}
