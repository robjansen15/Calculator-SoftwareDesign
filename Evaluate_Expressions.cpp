// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Evaluate_Expressions.h"
#include <iostream>

Evaluate_Expressions::Evaluate_Expressions(Array<Expr_Command*> & postfix,
											   int & ptr,
											   int & result)
	:	postfix_(postfix),
		ptr_(ptr),
	 	result_(result)
	{}

Evaluate_Expressions::~Evaluate_Expressions(){}


bool Evaluate_Expressions::evaluate_postfix (){
	Array_Iterator<Expr_Command*> iter(postfix_, ptr_);
	Stack<int> stack;

	try{
		for (; !iter.is_done() ; iter.advance()) {
			(*iter)->execute(stack);
		}
	} catch (std::exception &e) {

			Array_Iterator<Expr_Command*> cleaner (postfix_, ptr_);
			for (; !cleaner.is_done() ; cleaner.advance()) {
				delete *cleaner;
			}
			return false;
		}

	if (stack.size() == 1) {
	result_ = stack.top();
	return true;
	}
	else{
		Array_Iterator<Expr_Command*> clear_expr(postfix_, ptr_);
		for (; !clear_expr.is_done() ; clear_expr.advance()) {
			delete *clear_expr;
		}

		throw std::invalid_argument("error");
	}
}
