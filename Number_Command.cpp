// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Number_Command.h"

//contructor
Number_Command::Number_Command(int n)
	: n_(n)
	{}

//execute
bool Number_Command::execute (Stack<int> &stack) {
	stack.push(this->evaluate(n_));
	return true;
}


//evaluate
int Number_Command::evaluate (int n) {
	return n;
}

//empty expression
int Number_Command::precedence(void) {}

//default destructor
Number_Command::~Number_Command(){}