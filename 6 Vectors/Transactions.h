#ifndef TRANSACTIONS_H
#define TRANSACTIONS_H
/*
   class definitions for bank transactions
 */
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
};
#endif
