// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#include "Postfix_Evaluation.h"
#include "inf_conversion.h"
#include "Evaluate_Expressions.h"

// Robert, Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.

//I addressed this by making this a class

//constructor
Postfix_Evaluation::Postfix_Evaluation(const std::string &infix,
				   Expr_Command_Factory &factory,
				   Array<Expr_Command *> &postfix)
	:	 infix_(infix),
		 factory_(factory),
		 postfix_(postfix)
	{
		this->infix_to_postfix();
	}

//destructor
Postfix_Evaluation::~Postfix_Evaluation(){}

//infix to postfix method
bool Postfix_Evaluation::infix_to_postfix (){

	//Set insertion point in postfix string at 0 for new user input.
	postfix_.resize(0);
	int postfix_ptr = 0;	

	//Trim the whitespaces at the end of the input string.
	std::string str(infix_);
	str.erase(str.find_last_not_of(' ')+1);   

	if (postfix_.size() < str.length()) {
		postfix_.resize(str.length());
	}

	std::istringstream input(str);
	std::string token;
	Stack <Expr_Command *> cmd_;
	Stack <char> p_;
	Expr_Command * cmd = 0;
    bool isNumber = false;

	while (!input.eof ()) {
		input >> token;

        //decide which command is occuring
		if (token == "+") {
			cmd = factory_.create_add_command ();
		}
        else if (token == "/") {
            cmd = factory_.create_divide_command ();
        }
        else if (token == "*") {
            cmd = factory_.create_multiply_command ();
        }
        else if (token == "%") {
            cmd = factory_.create_mod_command ();
        }
        else if (token == "-") {
			cmd = factory_.create_subtract_command ();
		}
		else if (token == "(") {
			p_.push('(');
			continue;
		} 
		else if (token == ")"){
            while (p_.top() != '(') {
                postfix_.set(postfix_ptr,cmd_.top());
                ++postfix_ptr;
                cmd_.pop();
                p_.pop();
            }
            if (p_.top() == '(')
                p_.pop();

            continue;

		}
		else {
            cmd = factory_.create_number_command(atoi(token.c_str()));
            isNumber = true;
        }

        //do the infix to post fix algorithm
		inf_conversion(cmd, cmd_, p_, postfix_, postfix_ptr,isNumber);
        isNumber = false;
	 }

	while (cmd_.size() != 0) {
		postfix_.set(postfix_ptr, cmd_.top());
		++postfix_ptr;
		cmd_.pop();
	}

	int res=0;
	try{
		Evaluate_Expressions exp(postfix_,postfix_ptr, res);
		if (exp.evaluate_postfix()) {
			std::cout << "The expressions turns out to be : " << res << std::endl;
		}
		else {
			std::cout<<"error in postfix evaluation"<<std::endl;
		}
	}catch (std::exception &e) {
        std::cout<<"unknown error"<<std::endl;
	}

	Array_Iterator<Expr_Command*> iter_(postfix_, postfix_ptr);
	for(; !iter_.is_done(); iter_.advance()){
		if (0 != *iter_) {
			delete *iter_;
		}
	}

	return true;
};


