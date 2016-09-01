// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Mod_Command.h"

//default constructor
Mod_Command::Mod_Command() {}

//destructor
Mod_Command::~Mod_Command() {}

// Robert, your code might break if there is a divide by zero.
//evaluate addition
int Mod_Command::evaluate (int n1, int n2) {
	return n1%n2;
}

//return precedense
int Mod_Command::precedence(void) {
	return 1;
}