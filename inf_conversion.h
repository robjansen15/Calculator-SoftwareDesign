// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#ifndef _INFIX_TO_POSTFIX_H_
#define _INFIX_TO_POSTFIX_H_

#include "Expr_Command.h"
#include "Stack.h"
#include "Array.h"

class inf_conversion {
public:

	//constructor
	inf_conversion(Expr_Command * cmd,
						Stack<Expr_Command*> & cmd_stack,
						Stack<char> & para_stack,
						Array<Expr_Command*> & postfix,
						int & postfix_ptr,
						bool isNumber);

	//destructor
	~inf_conversion();

	//does the actual conversion
	bool infix_conversion ();

	//compares left and right precedence
	bool check_precedence (Expr_Command * lhs, Expr_Command * rhs);

	//gets the precedence
	int get_priority (Expr_Command * cmd);

protected:
	Expr_Command * cmd_;
	Stack<Expr_Command*> & cmd_stack_;
	Stack<char> & para_stack_;
	Array<Expr_Command*> & postfix_;
	int & postfix_ptr_;
	bool isNumber_;
};




#endif