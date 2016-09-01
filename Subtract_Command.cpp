// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Subtract_Command.h"

//default constructor
Subtract_Command::Subtract_Command() {}

//destructor
Subtract_Command::~Subtract_Command() {}

//evaluate addition
int Subtract_Command::evaluate (int n1, int n2) {
    return n2-n1;
}

//return precedense
int Subtract_Command::precedence(void) {
    return 2;
}