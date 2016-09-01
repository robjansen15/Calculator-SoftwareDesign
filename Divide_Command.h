// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#ifndef _DIVIDE_COMMAND_H_
#define _DIVIDE_COMMAND_H_

#include "Binary_Op_Command.h"

class Divide_Command : public Binary_Op_Command {
public:
	//default constructor
	Divide_Command();

	//virtual destructor required
	virtual ~Divide_Command();

	//evaluate operation
	virtual int evaluate(int n1, int n2);

	// Robert, I don't think this method is required on the command, as the method that is
	// doing the infix to postfix should do it.

	//I addressed this comment by getting the precedence instead.
	int precedence(void);

};

#endif