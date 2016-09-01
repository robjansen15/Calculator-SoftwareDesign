// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include <iostream>
#include "Runner.h"

using namespace std;


int main()
{
	string line;
	bool continue_iteration = true;

	// Command loop - will run until user types 'QUIT'.
	while(true) {
		cout<<"Enter an equation:  "<<endl;
		getline(std::cin, line, '\n');

        if(line == "QUIT")
            break;

		Runner r(line);


	} // !Command Loop.

	return 0;
}