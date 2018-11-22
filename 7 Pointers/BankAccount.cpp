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
void BankAccount::deposit()
{
   //Deposits 1/12th of their annual salary into the account
}
void BankAccount::print()
{
   //Prints the employee name and their account balance.
   std::cout << "Name: " << m_account_name << std::endl;
   std::cout << "Balance: "<< m_amount << std::endl;
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
double BankAccount::get_amount()
{
   //Returns the account amount
   return m_amount;
}
