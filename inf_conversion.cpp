// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "inf_conversion.h"
#include <iostream>
#include <string>

//constructor
inf_conversion::inf_conversion(	Expr_Command * cmd,
										Stack<Expr_Command*> & cmd_stack,
										Stack<char> & para_stack,
										Array<Expr_Command*> & postfix,
										int & postfix_ptr,
										bool isNumber)
	:	cmd_(cmd),
		cmd_stack_(cmd_stack),
		para_stack_(para_stack),
		postfix_(postfix),
		postfix_ptr_(postfix_ptr),
		isNumber_(isNumber)
	{
		this->infix_conversion();
	}

//destructor
inf_conversion::~inf_conversion(){}

bool inf_conversion::infix_conversion() {
	if (isNumber_) {
		postfix_.set(postfix_ptr_,cmd_);
		++postfix_ptr_;
	}
	else {
			if (cmd_stack_.size() == 0) {
				cmd_stack_.push(cmd_);
				para_stack_.push('*');
			}
			else {
				if (para_stack_.top() == '(') {
						cmd_stack_.push(cmd_);
						para_stack_.push('*');
						return true;
					}
				bool higher_order_of_operation = check_precedence(cmd_, cmd_stack_.top());
				if (higher_order_of_operation
						|| para_stack_.top() == '(') {
					cmd_stack_.push(cmd_);
					para_stack_.push('*');
				}
				else {
					do {
						postfix_.set(postfix_ptr_, cmd_stack_.top());
						++postfix_ptr_;
						cmd_stack_.pop();
						para_stack_.pop();
					}
					while((cmd_stack_.size()!=0) && !(check_precedence(cmd_, cmd_stack_.top())) && para_stack_.top() != '(');
					
					cmd_stack_.push(cmd_);
					para_stack_.push('*');
				}
			}
	}
	return true;
}

bool inf_conversion::check_precedence (Expr_Command * lhs, Expr_Command * rhs) {
	int lhs_priority=get_priority(lhs);
	int rhs_priority=get_priority(rhs);

	if (lhs_priority >= 0 && rhs_priority >=0){
        if(lhs_priority < rhs_priority)
            return true;
        else
            return false;
	}

	return false;
}

// Robert, You should implement the precedence function on
// the command object since it is better place there.

//I addressed this such that it gets the specific commands precedence
int inf_conversion::get_priority (Expr_Command * cmd) {
	int precedense = cmd->precedence();
	if(precedense > 0){
		return precedense;
	}else{
		return -1;
	}
}
