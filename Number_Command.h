// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#ifndef _NUMBER_COMMAND_H_
#define _NUMBER_COMMAND_H_

#include "Expr_Command.h"
#include <sstream>

class Number_Command : public Expr_Command {
public:
	
	// Constructor.
	Number_Command(int num);

	// Execute.
	virtual bool execute(Stack<int> & stack);
	
  // Robert, the evaluate method is not requred here, because it is just returning the input variable.
	// Evaluate.
	virtual int evaluate(int n);

  // Robert, I don't think this method is required on the command, as the method that is 
  // doing the infix to postfix should do it.

	//I addressed this comment by getting the precedence instead.
	int precedence(void);

	//virtual destructor required
	virtual ~Number_Command();

private:
	int n_;
};

#endif