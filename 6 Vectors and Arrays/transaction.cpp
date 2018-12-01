/*
   File: transaction.cpp
   Description: Transaction class function implementation.
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 11/10/2018, 3:31:50 PM
 */
#include <iostream>
#include <vector>
#include <string>
#include "transaction.h"
#include "Statement.h"
transaction::transaction() // Constructor
{
   m_day = 0;
   m_transaction = 0.0;
   m_description = " ";
}
transaction::transaction(int day, double transaction, std::string description) // Constructor with parameters
{
   m_day = day;
   m_transaction = transaction;
   m_description = description;
}
void transaction::read() // Creates a transaction
{
   std::cout << "Day: ";
   std::cin >> m_day;
   std::cout << "Transaction: ";
   std::cin >> m_transaction;
   std::cin.ignore();
   std::cout << "Description of transaction: ";
   std::getline(std::cin, m_description);
}
int transaction::get_day() // Returns the day
{
   return m_day;
}
double transaction::get_transaction() // Returns the transaction amount
{
   return m_transaction;
}
std::string transaction::get_description() // Returns the descriptions
{
   return m_description;
}
