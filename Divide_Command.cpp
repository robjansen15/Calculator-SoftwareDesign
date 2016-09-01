// $Id: Array.cpp 827 2011-02-07 14:20:53Z hillj $

// Honor Pledge:
//
// I pledge that I have neither given nor receieved any help
// on this assignment.
//

#include "Divide_Command.h"

//default constructor
Divide_Command::Divide_Command() {}

//destructor
Divide_Command::~Divide_Command() {}

//evaluate addition
int Divide_Command::evaluate (int n1, int n2) {
    if(n2 == 0)
        throw std::invalid_argument("error, divide 0");

    return n1/n2;
}

//return precedense
int Divide_Command::precedence(void) {
    return 1;
}

