// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.

#ifndef _EVALUATE_POSTFIX_H_
#define _EVALUATE_POSTFIX_H_

#include "Array.h"
#include "Array_Iterator.h"
#include "Expr_Command.h"

// Robert, Instead of using C functions to implement parts of the
  // calculator. It would be better suited to use a Wrapper Facade.

//I addressed this comment by making this a class

class Evaluate_Expressions {
public:
    //constructor
    Evaluate_Expressions(Array<Expr_Command*> & postfix, int & ptr, int & result);

    //destructor
    ~Evaluate_Expressions();

    bool evaluate_postfix ();

protected:
    Array<Expr_Command*> & postfix_;
    int & ptr_;
    int & result_;
};


#endif