// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _EXPR_COMMAND_FACTORY_H_
#define _EXPR_COMMAND_FACTORY_H_

#include "Number_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
#include "Mod_Command.h"

class Expr_Command_Factory{
public:
	//default constructor
	Expr_Command_Factory();

	//vritual destructor required
	virtual ~Expr_Command_Factory();

	//num cmd
	virtual Number_Command * create_number_command (int num)=0;
	//add cmd
	virtual Add_Command * create_add_command(void)=0;
	//sub command
	virtual Subtract_Command * create_subtract_command()=0;
	//div command
	virtual Divide_Command * create_divide_command()=0;
	//mult command
	virtual Multiply_Command * create_multiply_command()=0;
	//mod command
	virtual Mod_Command * create_mod_command()=0;
	

private:
	//dont allow these
	Expr_Command_Factory (const Expr_Command_Factory &);
	const Expr_Command_Factory & operator = (const Expr_Command_Factory &);
};


#endif