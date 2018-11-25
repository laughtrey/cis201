/*
   File: Statement.cpp
   Description: Statement class function implementations.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 11/10/2018, 3:31:50 PM
 */
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include "Transactions.h"
#include "Statement.h"
Statement::Statement() // Constructor
{

}
void Statement::read() // Creates a balance can take data from anywhere, .txt file or manual input.
{
   transactions.push_back(Transactions(1, 1143.24, "Initial Balance"));
   transactions.push_back(Transactions(2, -224, "Check 2140"));
   transactions.push_back(Transactions(3, -193, "Check 2141"));
   transactions.push_back(Transactions(4, 500, "ATM Deposit"));
   transactions.push_back(Transactions(5, -10, "Check 2142"));
   transactions.push_back(Transactions(6, -105, "Check 2143"));
   transactions.push_back(Transactions(7, -210, "Check 2144"));
   transactions.push_back(Transactions(8, -201, "Check 2145"));
   transactions.push_back(Transactions(16, 1200, "ATM Deposit"));
   transactions.push_back(Transactions(16, -100, "Check 2146"));
   transactions.push_back(Transactions(17, -200, "Check 2147"));
   transactions.push_back(Transactions(20, 900, "ATM Deposit"));
   transactions.push_back(Transactions(30, 700, "ATM Deposit"));
   compute_balance(transactions);
}
std::vector<double> Statement::compute_balance(std::vector<Transactions> &v) // This function takes the daily transaction total and adds it to daily_balance vector
{
   m_balance = 0.0;
   for (int day = 0; day < MAX_DAY; day++)
   {
      m_balance += sum_total_for_day(day + 1);
      daily_balance.push_back(m_balance);
   }
   return daily_balance;
}
double Statement::sum_total_for_day(int day) // This function adds up the entire days transactions and returns the total for a single day.
{
   double total = 0;

   for (int i = 0; i < transactions.size(); i++)
   {
      if (day == transactions[i].get_day())
      {
         total = total + transactions[i].get_transaction();
      }
   }
   return total;
}
void Statement::print() // prints the statement, prints daily balance and finally the min/average interest
{
   int index = 0;

   std::cout << "=====STATEMENT=====" << std::endl;
   for (int i = 0; i < MAX_DAY; i++)
   {
      while (i + 1 == transactions[index].get_day())
      {
         std::cout << "===Transaction===" << std::endl;
         std::cout << "Day: " << transactions[index].get_day() << std::endl;
         std::cout << "Transaction: " << transactions[index].get_transaction() << std::endl;
         std::cout << "Description: " << transactions[index].get_description() << std::endl;
         std::cout << "================" << std::endl;
         index++;
      }
      std::cout << "Balance for day " << i + 1 << ": " << daily_balance[i] << std::endl;
      std::cout << "===============" << std::endl;
   }
   std::cout << "The Minimum balace was: " << min_daily_balance(daily_balance) << " Interest: " << std::setprecision(2) << std::fixed << min_daily_balance(daily_balance) * interest << std::endl;
   std::cout << "The Average balance over 30 days was: " << average_daily_balance(daily_balance) << " Interest: " << std::setprecision(2) << std::fixed << average_daily_balance(daily_balance) * interest << std::endl;

}
double Statement::min_daily_balance(const std::vector<double> &v) // This function finds the lowest monthly balance
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
double Statement::average_daily_balance(const std::vector<double> &v) // This function adds up every day and then divides it by the MAX_DAY to find the average.
{
   double sum = 0;

   for (int i = 0; i < MAX_DAY; i++)
   {
      sum += v[i];
   }
   return (sum / MAX_DAY); // * interest;

}
