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
void Statement::read() // Creates a balance can take data from anywhere, .txt file or manual input.
{
   Transactions initial(1, 1143.24, "Initial Balance");
   transactions.push_back(initial);
   Transactions day2(2, -224, "Check 2140");
   transactions.push_back(day2);
   Transactions day3(3,-193, "Check 2141");
   transactions.push_back(day3);
   Transactions day4(4, 500, "ATM Desposit");
   transactions.push_back(day4);
   Transactions day5(5,-10, "Check 2142");
   transactions.push_back(day5);
   Transactions day6(6,-105, "Check 2143");
   transactions.push_back(day6);
   Transactions day7(7,-210, "Check 2144");
   transactions.push_back(day7);
   Transactions day8(8,-201, "Check 2145");
   transactions.push_back(day8);
   Transactions day9(9,0, "");
   transactions.push_back(day9);
   Transactions day10(10,0, "");
   transactions.push_back(day10);
   Transactions day11(11,0, "");
   transactions.push_back(day11);
   Transactions day12(12,0, "");
   transactions.push_back(day12);
   Transactions day13(13,0, "");
   transactions.push_back(day13);
   Transactions day14(14,0, "");
   transactions.push_back(day14);
   Transactions day15(15,0, "");
   transactions.push_back(day15);
   Transactions day16(16,1200, "ATM Deposit");
   transactions.push_back(day16);
   Transactions day16second(16,-100, "Check 2146");
   transactions.push_back(day16second);
   Transactions day17(17,-200, "Check 2147");
   transactions.push_back(day17);
   Transactions day18(18,0, "");
   transactions.push_back(day18);
   Transactions day19(19,0, "");
   transactions.push_back(day19);
   Transactions day20(20,900, "ATM Deposit");
   transactions.push_back(day20);
   Transactions day21(21,0, "");
   transactions.push_back(day21);
   Transactions day22(22,0, "");
   transactions.push_back(day22);
   Transactions day23(23,0, "");
   transactions.push_back(day23);
   Transactions day24(24,0, "");
   transactions.push_back(day24);
   Transactions day25(25,0, "");
   transactions.push_back(day25);
   Transactions day26(26,0, "");
   transactions.push_back(day26);
   Transactions day27(27,0, "");
   transactions.push_back(day27);
   Transactions day28(28,0, "");
   transactions.push_back(day28);
   Transactions day29(29,0, "");
   transactions.push_back(day29);
   Transactions day30(30,700, "ATM Deposit");
   transactions.push_back(day30);
   compute_balance(transactions);
}
std::vector<double> Statement::compute_balance(std::vector<Transactions> &v) // This function should compute the daily balance for each day of the month and adds it to daily_balance vector
{
   std::vector<double> daily_balances;
   m_balance = 0.0;
   for (int i = 0; i < v.size(); i++)
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
   return m_min_balance; //* interest;
}
double Statement::average_daily_balance(const std::vector<double> &v) // Every days balance added up and divided by 30 days TODO
{
   double sum = 0;

   for (int i = 0; i < MAX_DAY; i++)
   {
      sum += v[i];
   }
   return (sum / MAX_DAY); //* interest;

}
