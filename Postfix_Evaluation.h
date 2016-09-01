// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _POSTFIX_EVALUATION_H_
#define	_POSTFIX_EVALUATION_H_

#include <string>
#include <iostream>
#include <sstream>
#include "Expr_Command_Factory.h"
#include "Expr_Command.h"
#include "inf_conversion.h"
#include "Evaluate_Expressions.h"
#include "Array_Iterator.h"

// Robert, Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.

//I addressed this comment by making this a class

class Postfix_Evaluation {
public:

	//constructor
	Postfix_Evaluation(const std::string &infix,
					   Expr_Command_Factory &factory,
					   Array<Expr_Command *> &postfix);

	//destructor
	~Postfix_Evaluation();


	bool infix_to_postfix();


protected:
	const std::string &infix_;
	Expr_Command_Factory &factory_;
	Array<Expr_Command *> &postfix_;
};

#endif