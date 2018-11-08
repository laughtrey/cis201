#include <iostream>
#include <string>
#include <ctime>
#include "Message.h"
// Constructor
Message::Message(std::string r, std::string s)
{
   m_recipient = r;
   m_sender = s;
   m_body = " ";
   time(&timestamp);
}
//--Functions--
void Message::append(std::string m) // appends a message to the mail
{
  m_body += '\n' + m;
}
void Message::to_string() // Cocatinate the entire thing to one string email
{
   m_email = "From: " + m_sender + '\n' + "To: " + m_recipient + '\n' + "Sent at: " + ctime(&timestamp) + "Message: " + m_body;

}
void Message::print() // just prints email.
{
   std::cout << m_email << std::endl;
}
