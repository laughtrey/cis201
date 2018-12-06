/**
Description: This is the mid-term composed of several functions. It will analyze
a sentence and return how many of the selected characters there are.
Filename: main.cpp
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date: 10/18/2018, 5:15:38 PM
*/
#include<iostream>
#include<string>
#include<cctype>

using namespace std;

string get_string(string prompt);
char get_char(string prompt);
int char_count(string, char);

int main()
{
   string str = get_string("Please enter a sentence you would like to analyze: ");
   char c = get_char("Please enter the character you would like to count: ");
   //cout << str << endl;
   //cout << c << endl;
   cout << "Your sentence has " << char_count(str, c) << " of the characters you selected."<< endl;
   return 0;
}
/*
Recieves the sentence string and converts it to lowercase
@param str string input
@param prompt prints the prompt to request input
@return returns the sentence
*/
string get_string(string prompt)
{
   string str;
   cout << prompt;
   getline(cin, str);
   /*for (int i = 0; i < str.length(); i++)
   {
      str[i] = tolower(str.at(i));
   }*/
   return str;
}
/*
Recieves the letter to count in the string
@param c the selected character
@param prompt the prompt asking the user for input
@return returns the selected character
*/
char get_char(string prompt)
{
   char c;
   cout << prompt;
   cin >> c;
   return c;
}
/*
Counts the amount of specified characters in the string
@param count placeholder int for the amount
@return returns the counted character
*/
int char_count(string str, char c)
{
   int count = 0;
   for (int i = 0; i < str.length(); i++)
   {
      char character = str.at(i);
      if (character == c)
      {
         count++;
      }
   }
   return count;
}
