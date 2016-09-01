// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Multiply_Command.h"

//default constructor
Multiply_Command::Multiply_Command() {}

//destructor
Multiply_Command::~Multiply_Command() {}

//evaluate addition
int Multiply_Command::evaluate (int n1, int n2) {
    return n1*n2;
}

//return type
//return precedense
int Multiply_Command::precedence(void) {
    return 1;
}