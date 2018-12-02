#include<iostream>
#include<string>
#include<vector>
#include "bankaccount.h"
#include "employee.h"

bankaccount::bankaccount()
{
   //Default Constructor
}
bankaccount::bankaccount(std::string name, double number, double amount)
{
   m_account_number = number;
   m_amount = amount;
   m_account_name = name;
}

std::string bankaccount::get_name()
{
   //Returns the account holder name
   return m_account_name;
}
double bankaccount::get_number()
{
   //Returns the bank account number
   return m_account_number;
}
void bankaccount::set_amount(double a)
{
   m_amount += a;
}
double bankaccount::get_amount()
{
   //Returns the account amount
   return m_amount;
}
