/**
File: main.cpp
Description: String Valid Number function project
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of creation: 10/7/2018, 3:47:39 AM
*/
#include<iostream>
#include<string>
#include<ctype.h>
using namespace std;

class is_valid_number
{
private:
   string s;
   char c;
public:
   is_valid_number ();
   bool is_printable(char c) const;
   bool is_digit(char c) const;
   int to_int(char c) const;
   bool is_valid_number(string s) const;
};
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
}
int main()
  {
      string s = "30349875340958034985039485093485024a958";
      if(is_valid_number(s))
      {
          cout << "yes it is valid";
      }
      else
      {
          cout << "no it is not valid";
      }
      return 0;

  }
