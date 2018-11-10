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
Date of Creation: 11/10/2018, 3:31:50 PM
*/
#include<iostream>
#include<string>
#include<vector>

class Transaction
{
private:
   int m_day;
   double m_amount, m_balance;
   std::string m_description;

public:
   Transaction();
   Transaction(int day, double amount, std::string description);
   void read();
   void get_day();
   void get_amount();
   void interest();
   double Balance(const std::vector<double> &v);
   void print();
   void print_transactions(std::vector<Transaction>& v);
};
Transaction::Transaction()
{

}
Transaction::Transaction(int day, double amount, std::string description)
{
   m_day = day;
   m_amount = amount;
   m_description = " ";
}
void Transaction::read()
{
    std::cout << "Day: " << std::endl;
    std::cin >> m_day;
    std::cout << "Amount: " << std::endl;
    std::cin >> m_amount;
    std::cin.ignore();
    std::cout << "Description of transaction: " << std::endl;
    std::getline(std::cin,m_description);
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
double Transaction::Balance(const std::vector<double> &v)
{
   int total = 0;
   for(int i=0;i<v.size();i++)
      total += v[i];
   return total;
}
void Transaction::print()
{
   std::cout << "Day: " << m_day << std::endl;
   std::cout << "Transaction: " << m_amount << std::endl;
   std::cout << "Description: " << m_description << std::endl;
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
   std::vector<Transaction> day;
   Transaction initial(1,1143.24,"Initial balance"); // Initial Balance
   day.push_back(initial); //push_back initial balance (object) onto day (vector of objects)
   bool more = true;
      while (more)
        {
          Transaction t;
          t.read();
          day.push_back(t);
          std::cout << "More data? (y/n) ";
          std::string answer;
          getline(std::cin, answer);
          if (answer != "y")
                   more = false;
        }
    print_transactions(day);
    std::cout << "Your total balance is: " << Balance(day); //Not declared in this scope?
   return 0;
}
