//Chapter 4 notes Big C++
#include<iostream>
#include<cmath>
using namespace std;
double future_value(double initial_balance, double p, int n)
{
   double b = initial_balance * pow(1 + p / 100, n);
   return b;
}
int main()
{
   double rate;
   //Functions compute  an output using some method (we trust) will yield the correct result
   //The value is then transfered back, and main is resumed
   cout << "pleas enter the interest rate in percent: ";
   cin >> rate;
   double b = future_value(1000, rate, 10);
   cout << "After 10 years, the balance is: " << b << "\n";
   return 0;
}
