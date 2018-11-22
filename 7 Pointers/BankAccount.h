#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<vector>
#include<iostream>

class BankAccount
{
private:
std::vector<BankAccount> accounts;
double m_account_number, m_amount;
std::string m_account_name;
public:
BankAccount();
BankAccount(std::string name, double number, double amount);
void deposit();
void print();
std::string get_name();
double get_number();
double get_amount();

};
#endif
