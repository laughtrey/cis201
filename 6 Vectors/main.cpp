/*
Write a program that prints out a bank statement. The program input
is a sequence of transactions. Each transaction has the form
day amount description
For example,
15 -224 Check 2140
16 1200 ATM deposit
Your program should read in the descriptions and then print out a statement listing
all deposits, withdrawals, and the daily balance for each day. You should then compute
the interest earned by the account. Use both the minimum daily balance and
the average daily balance methods for computing interest, and print out both values.
Use an interest rate of 0.5 percent per month, and assume the month has 30
days. You may assume that the input data are sorted by the date. You may also
assume that the first entry is of the form
1 1143.24 Initial balance
*/

//TODO: All of it
//Interest formula: A = P(1 + (r / n))pow(n * t)
//P = Principle, r = interest rate, n = compounded, t = time (years)
/*
File: main.cpp
Description:
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation:
*/
#include<iostream>
#include<string>
#include<vector>

class Transaction
{
private:
   int day;
   double amount;
   std::string description;

public:
   Transaction();
   Transaction(int day, double amount, std::string description);
   void read();
   void get_day();
   void get_amount();
   void interest();
   void print();
   void print_transactions(std::vector<Transaction>& v);
};
Transaction::Transaction()
{
   day = 0;
   amount = 0;
   description = "Initial balance: ";
}
Transaction::Transaction(int day, double amount, std::string description)
{
   day = 0;
   amount = 0;
   description = "Initial balance";
}
void Transaction::read()
{
    std::cout << "Day: " << std::endl;
    std::cin >> day;
    std::cout << "Amount: " << std::endl;
    std::cin >> amount;
    std::cin.ignore();
    std::cout << "Description of transaction: " << std::endl;
    std::getline(std::cin,description);
}
void Transaction::get_day()
{

}
void Transaction::get_amount()
{

}
void Transaction::interest()
{

}
void Transaction::print()
{
   std::cout << "Day: " << day << std::endl;
   std::cout << "Balance: " << amount << std::endl;
   std::cout << "Description: " << description << std::endl;
}
void print_transactions(std::vector<Transaction>& v)
{
   for (int i = 0; i < v.size(); i++)
   {
      v[i].print();
   }

}

int main()
{
  //std::vector<TYPE> VECTORNAME(optional amount);
  //std::vector<CLASSNAME> VECTORNAME;
  std::vector<Transaction> day; //should be the initial balance, first day, vector 0
  bool more = true;
      while (more)
        {
          Transaction initial(1,1143.24,"Initial balance");
          day.push_back(initial); // How do I start the 0th vector with this info?
          std::cout << "More data? (y/n) ";
          std::string answer;
          getline(std::cin, answer);
          if (answer != "y")
                   more = false;
        }

   return 0;
}
