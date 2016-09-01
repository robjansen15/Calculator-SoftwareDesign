// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _STACK_EXPR_COMMAND_FACTORY_H_
#define _STACK_EXPR_COMMAND_FACTORY_H_

#include "Expr_Command_Factory.h"


class Stack_Expr_Command_Factory : public Expr_Command_Factory
{
public:
	//default constructor
	Stack_Expr_Command_Factory(); 

	//virtual destructor reqruired
	virtual ~Stack_Expr_Command_Factory(void);

	//num cmd
	virtual Number_Command * create_number_command (int num);
	
	//add cmd
	virtual Add_Command * create_add_command();
	
	//sub cmd
	virtual Subtract_Command * create_subtract_command();
	
	//div cmd
	virtual Divide_Command * create_divide_command();
	
	//mult cmd
	virtual Multiply_Command * create_multiply_command();
	
	//mod cmd
	virtual Mod_Command * create_mod_command();
};

#endif