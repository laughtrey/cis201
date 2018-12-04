/*
   File: main.cpp
   Description: This is a program that asks for a student number and prints out a grade
   report for that student, by searching all class files.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 11/28/2018, 9:42:46 PM
 */
#include <iostream>
#include <fstream>
#include "student.h"
#include "course.h"
#include "grade.h"

int main()
{
   course subject;
   int x = 0;
   std::cout << "Please enter your student ID (Enter 11234 or 11254 or 11324 or 21883): ";
   std::cin >> x;
   subject.create_listing();
   subject.create_report(x);
   std::cin.ignore();
   std::cin.get();
   return 0;
}
