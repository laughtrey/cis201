/*
   File: statement.cpp
   Description: statement class function implementations.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 11/10/2018, 3:31:50 PM
 */
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "transaction.h"
#include "statement.h"
statement::statement() // Constructor
{

}
void statement::read() // Creates a balance can take data from anywhere, .txt file or manual input.
{
   account_transaction.push_back(transaction(1, 1143.24, "Initial Balance"));
   account_transaction.push_back(transaction(2, -224, "Check 2140"));
   account_transaction.push_back(transaction(3, -193, "Check 2141"));
   account_transaction.push_back(transaction(4, 500, "ATM Deposit"));
   account_transaction.push_back(transaction(5, -10, "Check 2142"));
   account_transaction.push_back(transaction(6, -105, "Check 2143"));
   account_transaction.push_back(transaction(7, -210, "Check 2144"));
   account_transaction.push_back(transaction(8, -201, "Check 2145"));
   account_transaction.push_back(transaction(16, 1200, "ATM Deposit"));
   account_transaction.push_back(transaction(16, -100, "Check 2146"));
   account_transaction.push_back(transaction(17, -200, "Check 2147"));
   account_transaction.push_back(transaction(20, 900, "ATM Deposit"));
   account_transaction.push_back(transaction(30, 700, "ATM Deposit"));
   compute_balance(account_transaction);
}
std::vector<double> statement::compute_balance(std::vector<transaction> &v) // This function takes the daily transaction total and adds it to daily_balance vector
{
   m_balance = 0.0;
   for (int day = 0; day < MAX_DAY; day++)
   {
      m_balance += sum_total_for_day(day + 1);
      daily_balance.push_back(m_balance);
   }
   return daily_balance;
}
double statement::sum_total_for_day(int day) // This function adds up the entire days transaction and returns the total for a single day.
{
   double total = 0;

   for (int i = 0; i < account_transaction.size(); i++)
   {
      if (day == account_transaction[i].get_day())
      {
         total = total + account_transaction[i].get_transaction();
      }
   }
   return total;
}
void statement::print() // prints the statement, prints daily balance and finally the min/average interest
{
   int index = 0;

   std::cout << "=====Statement=====" << std::endl;
   for (int i = 0; i < MAX_DAY; i++)
   {
      while (i + 1 == account_transaction[index].get_day())
      {
         std::cout << "===Transaction===" << std::endl;
         std::cout << "Day: " << account_transaction[index].get_day() << std::endl;
         std::cout << "Transaction: " << account_transaction[index].get_transaction() << std::endl;
         std::cout << "Description: " << account_transaction[index].get_description() << std::endl;
         std::cout << "================" << std::endl;
         index++;
      }
      std::cout << "Balance for day " << i + 1 << ": " << daily_balance[i] << std::endl;
      std::cout << "===============" << std::endl;
   }
   std::cout << "The Minimum balace was: " << min_daily_balance(daily_balance) << " Interest: " << std::setprecision(2) << std::fixed << min_daily_balance(daily_balance) * interest << std::endl;
   std::cout << "The Average balance over 30 days was: " << average_daily_balance(daily_balance) << " Interest: " << std::setprecision(2) << std::fixed << average_daily_balance(daily_balance) * interest << std::endl;

}
double statement::min_daily_balance(const std::vector<double> &v) // This function finds the lowest monthly balance
{
   double m_min_balance = v[0];

   for (int i = 0; i < v.size(); i++)
   {
      if (v[i] < m_min_balance )
      {
         m_min_balance = v[i];
      }
   }
   return m_min_balance; // * interest;
}
double statement::average_daily_balance(const std::vector<double> &v) // This function adds up every day and then divides it by the MAX_DAY to find the average.
{
   double sum = 0;

   for (int i = 0; i < MAX_DAY; i++)
   {
      sum += v[i];
   }
   return (sum / MAX_DAY); // * interest;

}
