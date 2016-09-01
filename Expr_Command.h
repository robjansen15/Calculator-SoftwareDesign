// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_ 

#include "Stack.h"

class Expr_Command {
public:
	//execute
	virtual bool execute (Stack<int> & stack) = 0;

  // Robert, this method is not required on the command because the method that
  // converts infix to postfix can handle it.

	//I converted this method into getting the precedence for each.
	virtual int precedence(void)=0;

	//virtual destructor required
	virtual ~Expr_Command(){};
};




#endif //!_EXPR_COMMAND_H_ 