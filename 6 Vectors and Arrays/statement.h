#ifndef STATEMENT_H
#define STATEMENT_H
/*
   class defintions for balance statements
 */
class statement
{
private:
std::vector<transaction> account_transaction;
std::vector<double> daily_balance;
double m_balance, m_min_balance, m_average_balance;
const int MAX_DAY = 30;
const double interest = .005;
public:
statement();
void read();
std::vector<double> compute_balance(std::vector<transaction> &v);
double sum_total_for_day(int day);
void print();
double min_daily_balance(const std::vector<double> &v);
double average_daily_balance(const std::vector<double> &v);
};
#endif
