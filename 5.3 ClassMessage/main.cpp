/*
File: main.cpp
Description: This program has the class Message, which recieves a recipient, sender, and message
stores it, then concatenates the message into one string and prints it.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 10/29/2018, 9:54:15 PM
*/
#include <iostream>
#include <string>
#include "Message.h"
int main()
{
   time_t timest;
   Message mail("Jon.Doe@Email.com","Jane.Doe@email.com");
   mail.append("Hey what's up!");
   mail.to_string();
   std::cout << "Your message is: "<< std::endl;
   mail.print();
   return 0;
}
