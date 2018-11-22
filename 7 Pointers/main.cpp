/*
File: main.cpp
Description: Exercise P7.3.	Enhance the Employee class of Chapter 2 to include a pointer to a BankAccount. Read in employees and their salaries.
Store them in a vector<Employee>. For each employee, allocate a new bank account on the heap, except that two consecutive
employees with the same last name should share the same account. Then traverse the vector of employees and, for each employee, deposit 1/12th
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
   /* helper code
   Employee employee1("Smith");
Employee employee2("Smith");

if(employee1.get_lastname() == employee2.get_lastname()) // they share the same last name
{
   Account *acc = new Account(1000.00);
   employee1.set_account(acc);
   employee2.set_account(acc);
   std::cout << "Account is shared now because it is being pointed to by the 2 different employee's" << std::endl;
   // acc is now shared between the 2 accounts
}*/
   return 0;
}
