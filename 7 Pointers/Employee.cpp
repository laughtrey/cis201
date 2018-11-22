#include<iostream>
#include<string>
#include<vector>
#include "Employee.h"
#include "BankAccount.h"

Employee::Employee()
{

}

Employee::Employee(std::string employee_name, double initial_salary)
{
   name = employee_name;
   salary = initial_salary;
   account = NULL;
}

void Employee::set_salary(double new_salary)
{
   salary = new_salary;
}

double Employee::get_salary() const
{
   return salary;
}

std::string Employee::get_name() const
{
   return name;
}
void Employee::set_account(BankAccount* r)
{
   account = r;
}
double Employee::get_account() const
{
  return 0;
}
void Employee::print() const
{
   std::cout << "Name: " << name << std::endl;
   std::cout << "Account No.: ";
   if (account == NULL)
      std::cout << "None";
   else
      std::cout << account->get_number() << std::endl;
}
