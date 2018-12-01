#include<iostream>
#include<string>
#include<vector>
#include "Employee.h"
#include "BankAccount.h"

Employee::Employee()
{

}

Employee::Employee(std::string lastname, std::string firstname, double initial_salary)
{
   m_lastname = lastname;
   m_firstname = firstname;
   salary = initial_salary;
   account = NULL;
}
void Employee::read()
{
   payroll.push_back(Employee("Doe", "Jon", 35000));
   payroll.push_back(Employee("Flintstone", "Fred", 33000));
   payroll.push_back(Employee("Flintstone", "Wilma", 34000));
   payroll.push_back(Employee("Hacker", "Harry", 32000));
   payroll.push_back(Employee("Stroustrup", "Bjarne", 36000));
   payroll.push_back(Employee("Tester", "Ted", 30000));
   create_accounts(payroll);
}
void Employee::create_accounts(std::vector<Employee> &v)
{
   for (int i = 0; i < v.size(); i++)
   {
      BankAccount* accnt = new BankAccount("Checking", 1, 0);
      v[i].set_account(accnt);
   }
   for (size_t i = 1; i < v.size(); i++)
   {
      if(payroll[i - 1].get_lastname() == payroll[i].get_lastname()) // they share the same last name
     {
        BankAccount* acc = new BankAccount("Checking", 1, 0);
        payroll[i - 1].set_account(acc);
        payroll[i].set_account(acc);
     }
   }
   deposit(v);
}
void Employee::set_salary(double new_salary)
{
   salary = new_salary;
}

double Employee::get_salary() const
{
   return salary;
}

std::string Employee::get_lastname() const
{
   return m_lastname;
}
std::string Employee::get_firstname() const
{
   return m_firstname;
}
void Employee::set_account(BankAccount* r)
{
   account = r;
}
void Employee::deposit(std::vector<Employee> &v)
{
   double bonus = 0;
   for (int i = 0; i < v.size(); i++)
   {
      bonus = (v[i].get_salary() / 12.0);
      v[i].account->set_amount(bonus);
   }
}
void Employee::print() const
{
   for (int i = 0; i < payroll.size(); i++)
   {
      std::cout << "Name: " << payroll[i].get_lastname() << ", " << payroll[i].get_firstname() << std::endl;
      std::cout << "Account amount: ";
      if (payroll[i].account == NULL)
         std::cout << "None";
      else
         std::cout << payroll[i].account->get_amount() << std::endl; //holy cow this worked
    }
    // for (int i = 0; i < payroll.size(); i++)
    // {
    //   if (payroll[i].account != NULL)
    //   {
    //      delete payroll[i].account;
    //   }
    // }
}
