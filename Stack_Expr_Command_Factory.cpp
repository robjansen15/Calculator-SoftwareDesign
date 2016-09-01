// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Stack_Expr_Command_Factory.h"

Stack_Expr_Command_Factory::Stack_Expr_Command_Factory(){}

Stack_Expr_Command_Factory::~Stack_Expr_Command_Factory(){}


Number_Command * Stack_Expr_Command_Factory::create_number_command (int num) {
	return (new Number_Command(num));
}

Add_Command * Stack_Expr_Command_Factory::create_add_command() {
  // Robert, make sure you are creating objects correctly.
	return (new Add_Command);
}

Subtract_Command * Stack_Expr_Command_Factory::create_subtract_command() {
	return (new Subtract_Command);
}

Divide_Command * Stack_Expr_Command_Factory::create_divide_command() {
	return (new Divide_Command);
}

Multiply_Command * Stack_Expr_Command_Factory::create_multiply_command() {
	return (new Multiply_Command);
}

Mod_Command * Stack_Expr_Command_Factory::create_mod_command() {
	return (new Mod_Command);
}
	
