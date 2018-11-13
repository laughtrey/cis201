/*
   File: Statement.cpp
   Description: Statement function implementations.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 11/10/2018, 3:31:50 PM
 */
#include <iostream>
#include <vector>
#include <string>
#include "Transactions.h"
#include "Statement.h"
Statement::Statement() // Constructor
{

}
void Statement::read() // Creates a balance
{
   Transactions initial(1, 1143.24, "Initial Balance");

   transactions.push_back(initial);
   // Right here I should make an add_transaction function that pushes back functions into transactions vector.
   // It works no matter how you put the data in.
   bool more = true;
   while (more)
   {
      Transactions t;
      t.read();
      transactions.push_back(t);
      std::cout << "Enter another (Y/N)";
      char response;
      std::cin >> response;
      if (response != 'y' && response != 'Y')
      {
         more = false;
      }
   }

   compute_balance(transactions);
}
std::vector<double> Statement::compute_balance(std::vector<Transactions> &v) // This function should compute the daily balance for each day of the month and adds it to daily_balance vector
{
   m_balance = 0;
   for (int i = 0; i < MAX_DAY; i++)
   {
      m_balance += v[i].get_transaction();
      daily_balance.push_back(m_balance);
   }
   return daily_balance;
}
void Statement::print() // prints the statement, prints daily balance and finally the min/average interest
{
   std::cout << "=====================" << std::endl;
   for (int i = 0; i < transactions.size(); i++)
   {
      std::cout << "Day: " << transactions[i].get_day() << std::endl;
      std::cout << "Transaction: " << transactions[i].get_transaction() << std::endl;
      std::cout << "Description: " << transactions[i].get_description() << std::endl;
      std::cout << "Balance: " << daily_balance[i] << std::endl;
      std::cout << "=====================" << std::endl;
   }
   std::cout << "The Minimum interest was: " << min_daily_balance(daily_balance) << std::endl;
   std::cout << "The Average over thirty days interest was: " << average_daily_balance(daily_balance) << std::endl;
}
double Statement::min_daily_balance(const std::vector<double> &v) // The lowest monthly balance
{
   double m_min_balance = v[0];

   for (int i = 0; i < v.size(); i++)
   {
      if (v[i] < m_min_balance )
      {
         m_min_balance = v[i];
      }
   }
   return m_min_balance * interest;
}
double Statement::average_daily_balance(const std::vector<double> &v) // Every days balance added up and divided by 30 days TODO
{
   double sum = 0;

   for (int i = 0; i < MAX_DAY; i++)
   {
      sum += v[i];
   }
   return (sum / MAX_DAY) * interest;

}
