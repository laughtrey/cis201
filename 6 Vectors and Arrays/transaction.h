#ifndef TRANSACTION_H
#define TRANSACTION_H
/*
   class definitions for bank transaction
 */
class transaction
{
private:
int m_day;
double m_transaction;
std::string m_description;
public:
transaction();
transaction(int day, double transaction, std::string description);
void read();
int get_day();
double get_transaction();
std::string get_description();
};
#endif
