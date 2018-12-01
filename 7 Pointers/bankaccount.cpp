#include<iostream>
#include<string>
#include<vector>
#include "BankAccount.h"
#include "Employee.h"

BankAccount::BankAccount()
{
   //Default Constructor
}
BankAccount::BankAccount(std::string name, double number, double amount)
{
   m_account_number = number;
   m_amount = amount;
   m_account_name = name;
}

std::string BankAccount::get_name()
{
   //Returns the account holder name
   return m_account_name;
}
double BankAccount::get_number()
{
   //Returns the bank account number
   return m_account_number;
}
double BankAccount::set_amount(double a)
{
   m_amount = a;
}
double BankAccount::get_amount()
{
   //Returns the account amount
   return m_amount;
}
