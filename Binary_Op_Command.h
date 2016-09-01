// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_


#include "Expr_Command.h"


class Binary_Op_Command : public Expr_Command {

public:
	// Default Constructor.
	Binary_Op_Command();

	//virtual destructor ~required
	virtual ~Binary_Op_Command();

	//execute the given command
	virtual bool execute(Stack<int> & stack);
	
	//virtual method - evaluate handled by operator
	virtual int evaluate(int n1, int n2) = 0;
};

#endif