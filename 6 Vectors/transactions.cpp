#include <iostream>
#include <string>
#include <vector>


class Transaction
{
public:
Transaction();
void read();
int get_day();
double get_amount();
void print() const;
private:
int day;
double amount;
std::string description;
};

Transaction::Transaction()
{
        day = 0;
        amount = 0.0;
}

void Transaction::read()
{
        std::cin >> day;
        std::cin >> amount;
        std::cin.ignore();
        std::getline(std::cin,description);
}

void Transaction::print() const
{
        std::cout << "day:" << day << std::endl;
        std::cout << "amount:" << amount << std::endl;
        std::cout << "description:" << description << std::endl;
}

void print_transactions(const std::vector<Transaction> t)
{
        for(int i=0; i<t.size(); i++)
                t[i].print();
}
