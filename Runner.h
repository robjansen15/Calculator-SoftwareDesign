// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _SOLVE_H_
#define _SOLVE_H_

#include "Stack.h"
#include "Expr_Command_Factory.h"
#include "Stack_Expr_Command_Factory.h"
#include "Postfix_Evaluation.h"
#include "Expr_Command.h"
#include <string>
#include <iostream>

class Runner {
public:

    //constructor
    Runner(std::string & input_);

    //destructor
    ~Runner();

    void run(std::string & input);
protected:
    std::string & input_;
};



#endif