#include <iostream>
#include <string>
#include <vector>


class Transaction
{
private:
int m_day;
double m_amount;
std::string m_description;
public:
Transaction();
Transaction(int day, double amount, std::string description);
void read();
void print() const;

};
Transaction::Transaction()
{
        m_day = 0;
        m_amount = 0.0;
        m_description = " ";
}
Transaction::Transaction(int day, double amount, std::string description)
{
        m_day = day;
        m_amount = amount;
        m_description = description;
}
void Transaction::read()
{
        std::cout << "Day: ";
        std::cin >> m_day;
        std::cout << "Amount: ";
        std::cin >> m_amount;
        std::cin.ignore();
        std::cout << "Description of transaction: ";
        std::getline(std::cin,m_description);
}
void Transaction::print() const
{
        std::cout << "Day:" << m_day << std::endl;
        std::cout << "Amount:" << m_amount << std::endl;
        std::cout << "Description:" << m_description << std::endl;
}
void print_transactions(const std::vector<Transaction> t)
{
        for(int i=0; i<t.size(); i++)
                t[i].print();
}
