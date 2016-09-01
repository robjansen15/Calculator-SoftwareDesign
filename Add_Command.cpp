// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Add_Command.h"

//default constructor
Add_Command::Add_Command() {}

//destructor
Add_Command::~Add_Command() {}

//evaluate addition
int Add_Command::evaluate (int n1, int n2) {
	return n1+n2;
}

//return precedense
int Add_Command::precedence(void) {
	return 2;
}



