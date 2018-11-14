#ifndef STATEMENT_H
#define STATEMENT_H
/*
   class defintions for balance statements
 */

class Statement
{
private:
std::vector<Transactions> transactions;
std::vector<double> daily_balance;
double m_balance;
double m_min_balance;
double m_average_balance;
const int MAX_DAY = 31;
const double interest = .005;
public:
Statement();
void read();
std::vector<double> compute_balance(std::vector<Transactions> &v);
void print();
double min_daily_balance(const std::vector<double> &v);
double average_daily_balance(const std::vector<double> &v);
};
#endif
