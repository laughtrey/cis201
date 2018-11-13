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
#include <iostream>
#include <vector>
#include <string>

class Transactions
{
private:
int m_day;
double m_transaction;
std::string m_description;

public:
Transactions();
Transactions(int day, double transaction, std::string description);
void read();
int get_day();
double get_transaction();
std::string get_description();
void print_transactions(std::vector<Transactions> &v);
};
Transactions::Transactions() // Constructor
{
   m_day = 0;
   m_transaction = 0.0;
   m_description = " ";
}
Transactions::Transactions(int day, double transaction, std::string description) // Constructor with parameters
{
   m_day = day;
   m_transaction = transaction;
   m_description = description;
}
void Transactions::read() // Creates a transaction
{
   std::cout << "Day: ";
   std::cin >> m_day;
   std::cout << "Transaction: ";
   std::cin >> m_transaction;
   std::cin.ignore();
   std::cout << "Description of transaction: ";
   std::getline(std::cin, m_description);
}
int Transactions::get_day() // Returns the day
{
   return m_day;
}
double Transactions::get_transaction() // Returns the transaction amount
{
   return m_transaction;
}
std::string Transactions::get_description() // Returns the descriptions
{
   return m_description;
}
void Transactions::print_transactions(std::vector<Transactions> &v) // Prints the entire statement
{
   std::cout << "Day: " << m_day << std::endl;
   std::cout << "Transaction: " << m_transaction << std::endl;
   std::cout << "Description: " << m_description << std::endl;
   /*for (size_t i = 0; i < v.size(); i++)
      {
           std::cout << v[i].get_day() << std::endl;
           std::cout << v[i].get_transaction() << std::endl;
           std::cout << v[i].get_description() << std::endl;
      }*/
}

class Statement
{
private:
std::vector<Transactions> transactions;
std::vector<double> daily_balance;
double m_balance;
double m_min_balance;
double m_average_balance;
public:
Statement();
void read();
void compute_balance(std::vector<Transactions> &v);
void print();
double min_daily_balance(const std::vector<double> &v);
double average_daily_balance(const std::vector<double> &v);
};
Statement::Statement() // Constructor
{

}
void Statement::read() // Creates a balance
{
   Transactions initial(1, 1143.24, "Initial Balance");

   transactions.push_back(initial);
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
void Statement::compute_balance(std::vector<Transactions> &v) // This function should compute the daily balance for each day of the month and adds it to daily_balance vector
{
   /*for (int i = 0; i < v.size(); i++)
      {
           daily_balance.push_back(v[i].get_transaction()); // This is just creating a vector of only the transactions, not adding them up each day.
      }*/
   m_balance = 0;
   for (size_t i = 0; i < v.size(); i++)
   {
      m_balance += v[i].get_transaction();
      daily_balance.push_back(m_balance);
   }
}
void Statement::print() // prints the statement, prints daily balance and finally the min/average interest
{
   for (int i = 0; i < transactions.size(); i++)
   {
      std::cout << "Day: " << transactions[i].get_day() << std::endl;
      std::cout << "Transaction: " << transactions[i].get_transaction() << std::endl;
      std::cout << "Description: " << transactions[i].get_description() << std::endl;
      std::cout << "Balance: " << daily_balance[i] << std::endl;
   }
   std::cout << "The Minimum interest was: " << min_daily_balance(daily_balance) << std::endl;
   std::cout << "The Average over thirty days interest was: " << average_daily_balance(daily_balance) << std::endl;
}
double Statement::min_daily_balance(const std::vector<double> &v) // The lowest monthly balance
{
   double interest = .005;
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
double Statement::average_daily_balance(const std::vector<double> &v) // The entire balance divided by 30 days
{
   double interest = .005;
   double sum = 0.0;

   for (int i = 0; i < v.size(); i++)
   {
      sum += v[i];
   }
   return sum / 30 * interest;

}
int main()
{
   Statement JohnD;

   JohnD.read();
   JohnD.print();
   return 0;
}
