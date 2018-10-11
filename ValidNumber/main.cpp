/**
File: main.cpp
Description: String Valid Number function project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of creation: 10/7/2018, 3:47:39 AM
*/
#include<iostream>
#include<string>
using namespace std;
bool is_printable(char c)
{
   return ( c >= ' ' && c <= '~');
}
bool is_digit(char c)
{
   return c >='0' && c <= '9';
}
int to_int(char c)
{
   return c - '0';
}
bool is_valid_number(string s)
{
  for(double i = (is_digit(s.at(0)) ); 0 < (is_digit(s.at(9999)) ); i++)

  return true;
}
int main()
{
   string s = "30349875340958034985039485093485024a958";
   if(is_valid_number(s))
   {
      cout << "yes it is valid\n";
      //cout << s.at(0) << endl;
      //cout << s.at(1) << endl;
      //cout << s.at(2) << endl;
   }
   else
   {
      cout << "no it is not valid\n";
   }
   return 0;
}
