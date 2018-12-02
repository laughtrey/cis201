// #include<iostream>
#include<string>
#include<vector>
#include "employee.h"
#include "bankaccount.h"

employee::employee()
{

}

employee::employee(std::string lastname, std::string firstname, double initial_salary)
{
   m_lastname = lastname;
   m_firstname = firstname;
   salary = initial_salary;
   account = NULL;
}
void employee::read()
{
   payroll.push_back(employee("Doe", "Jon", 35000));
   payroll.push_back(employee("Flintstone", "Fred", 70000));
   payroll.push_back(employee("Flintstone", "Wilma", 70000));
   payroll.push_back(employee("Hacker", "Harry", 32000));
   payroll.push_back(employee("Stroustrup", "Bjarne", 36000));
   payroll.push_back(employee("Tester", "Ted", 30000));
   create_accounts(payroll);
}
void employee::create_accounts(std::vector<employee> &v)
{
   for (int i = 0; i < v.size(); i++)
   {
      bankaccount *accnt = new bankaccount("Checking", 1, 0);
      v[i].set_account(accnt);
   }
   for (size_t i = 1; i < v.size(); i++)
   {
      if(payroll[i - 1].get_lastname() == payroll[i].get_lastname()) // they share the same last name
     {
        bankaccount *acc = new bankaccount("Checking", 1, 0);
        payroll[i - 1].set_account(acc);
        payroll[i].set_account(acc);
     }
   }
   deposit(v);
}
void employee::set_salary(double new_salary)
{
   salary = new_salary;
}

double employee::get_salary() const
{
   return salary;
}

std::string employee::get_lastname() const
{
   return m_lastname;
}
std::string employee::get_firstname() const
{
   return m_firstname;
}
void employee::set_account(bankaccount* r)
{
   account = r;
}
bankaccount employee::get_account()
{
  return *account;
}
void employee::deposit(std::vector<employee> &v)
{
   double bonus = 0;
   for (int i = 0; i < v.size(); i++)
   {
      bonus = (v[i].get_salary() / 12.0);
      v[i].account->set_amount(bonus);
   }
}
void employee::print()
{
   for (int i = 0; i < payroll.size(); i++)
   {
      std::cout << "Name: " << payroll[i].get_lastname() << ", " << payroll[i].get_firstname() << std::endl;
      std::cout << "Account amount: ";
      if (payroll[i].account == NULL)
         std::cout << "None";
      else
         std::cout << payroll[i].get_account().get_amount() << std::endl; //holy cow this worked
    }
    // for (int i = 0; i < payroll.size(); i++)
    // {
    //   if (payroll[i].account != NULL)
    //   {
    //      delete payroll[i].account;
    //      payroll[i].account = NULL;
    //   }
    // }
}
