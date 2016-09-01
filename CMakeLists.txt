cmake_minimum_required(VERSION 3.3)
project(stack_calculator)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
        Add_Command.cpp
        Binary_Op_Command.cpp
        Divide_Command.cpp
        Postfix_Evaluation.cpp
        driver.cpp
        Evaluate_Expressions.cpp
        Expr_Command_Factory.cpp
        inf_conversion.cpp
        Mod_Command.cpp
        Multiply_Command.cpp
        Number_Command.cpp
        Runner.cpp
        Stack_Expr_Command_Factory.cpp
        Subtract_Command.cpp)
add_executable(stack_calculator ${SOURCE_FILES})