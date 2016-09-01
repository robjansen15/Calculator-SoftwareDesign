// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Runner.h"
#include "Postfix_Evaluation.h"

// Robert, Instead of using C functions to implement parts of the
// calculator. It would be better suited to use a Wrapper Facade.\

//I addressed this comment by making it a class


//constructor
Runner::Runner(std::string & input)
	:	input_(input)
{
	this->run(input_);
}

//destructor
Runner::~Runner(){}

//start the program
void Runner::run (std::string & user_input) {
	std::string infix = user_input;
	Stack_Expr_Command_Factory factory;
	Array<Expr_Command*> postfix;

	if (user_input != "") {
		try {
			Postfix_Evaluation pe(infix,factory,postfix);
		}
		catch (...) {
			std::cout << "Error when running" << std::endl;
		}
	}
}