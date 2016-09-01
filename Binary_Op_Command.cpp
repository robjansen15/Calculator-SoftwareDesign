// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Binary_Op_Command.h"

//constructor
Binary_Op_Command::Binary_Op_Command() {}

//destructor
Binary_Op_Command::~Binary_Op_Command() {}

//execute the binary command
bool Binary_Op_Command::execute(Stack<int> &stack) {
	int num1, num2;

	try{
		num1 = stack.top();
		stack.pop();
		num2 = stack.top();
		stack.pop();
		stack.push (this->evaluate(num1, num2));
		return true;
	}
	catch (...) {
		throw std::invalid_argument ("error in binary op");
		return false;
	}
}



