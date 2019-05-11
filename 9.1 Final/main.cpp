/*
File: main.cpp
Description: This is the concordance final project. It will keep track of how many times a word occurs and
on which lines it occured.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 12/12/2018, 6:51:42 PM
*/
#include<iostream>
#include "concordance.h"


int main()
{
   Concordance con("alice.txt");
   con.parse();
   con.print();
   return 0;
}
