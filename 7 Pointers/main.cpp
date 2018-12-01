/*
File: main.cpp
Description: Exercise P7.3.	Enhance the Employee class of Chapter 2 to include a pointer to a BankAccount.
Read in employees and their salaries. Store them in a vector<Employee>. For each employee,
allocate a new bank account on the heap, except that two consecutive employees with the same last name
should share the same account. Then traverse the vector of employees and, for each employee, deposit 1/12th
of their annual salary into their bank account. Afterwards, print all employee names and account balances.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 11/18/2018, 3:26:45 PM
*/
#include<iostream>
#include<string>
#include<vector>
#include "Employee.h"
#include "BankAccount.h"

int main()
{
   Employee list;
   list.read();            //Read in employees and their salaries, stores them in a vector<Employee>.
                           //Allocate a new bank account on the heap.
                           //Traverse the vector of employees and deposit 1/12th of their annual salary into the bank account
   list.print();           //Print the account names and balances
   std::cin.get();

   return 0;
}
