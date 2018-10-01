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
   //When you find yourself coding the same computation more than once, make it a function.
   //Create a function and make it perfect, dont make it print dont make it do more than one thing. It is a single lego block
   //let others use the block as well.
   //write the function comment first, to see if you know what you're trying to program
   //you use the return statement to specify the result of a function
   //when return statement is processed, the function exits immediately.
   //if (n < 0) return 0; if n is negative the function terminates and the rest is not executed.

   return 0;
}
