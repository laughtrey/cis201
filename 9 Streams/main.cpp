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
   int id = 11234;
   course test;
   test.create_listing();
   test.print();
   grade grade;
   grade.create_csc1();
   grade.print();
   std::cin.get();
   // std::cout << "Please enter your student ID:" ;
   // std::cin >> id;



   // std::ofstream report("./data/report.txt", std::ios::out);
   // if (report.is_open())
   // {
   //    report << "This is a line.\n";
   //    report.close();
   // }
   // std::ifstream csc1("./data/CSC1.txt", std::ios::in);
   // if (csc1.is_open())
   // {
   //    std::string line;
   //    while (std::getline(csc1, line))
   //    {
   //       std::cout << line << '\n';
   //    }
   //    csc1.close();
   // }
   // else
   // {
   //    std::cerr << "End Prog\n";
   // }
   return 0;
}
