/*
   File: main.cpp
   Description: Class Object that solves rational equations through multiple functions and prints using a void function
   Author(s): Laughrey, Raymond. Santillan, Joshua. Tran, Phillip.
   Email: raymondl4963@student.vvc.edu
   Date of Creation: 11/7/18
 */
#include <iostream>
#include "Rational.h"

int main()
{
	Rational alpha(5.0, -3.0); // creates an object in rational called alpha hardcoding 5 and -3 to get back rational #s
	alpha.Print(); // prints out the expressions
       return 0;
}
