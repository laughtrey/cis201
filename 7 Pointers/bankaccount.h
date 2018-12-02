#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<vector>
#include<iostream>

class bankaccount
{
private:
std::vector<bankaccount> accounts;
double m_account_number, m_amount;
std::string m_account_name;
public:
bankaccount();
bankaccount(std::string name, double number, double amount);
std::string get_name();
double get_number();
void set_amount(double a);
double get_amount();

};
#endif
