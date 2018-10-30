/*
This class models an email.
*/
#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Message
{
private:
   string m_recipient, m_sender, m_body, m_email;
   time_t timestamp;

public:
   Message();
   Message(string r, string s); // Constructor that takes the sender and recipient and sets the time stamp to current time
   void append(string m); // Appends a line of text to the message body
   to_string(); // makes the message into one long string
   void print(); // prints the message text
};
Message::Message()
{

}
Message::Message(string r, string s)
{
   m_recipient = r;
   m_sender = s;
   m_body = " ";
   time(&timestamp);

}
void Message::append(string m)
{
  m_body += '\n' + m;
}
Message::to_string() // Cocatinate the entire thing to one string email
{
   m_email = "From: " + m_sender + '\n' + "To: " + m_recipient + '\n' + "Sent at: " + ctime(&timestamp) + "Message: " + m_body;

}
void Message::print() // just prints email.
{
   cout << m_email;
}
int main()
{
   time_t timest;
   Message mail("Jon.Doe@Email.com","Jane.Doe@email.com");
   mail.append("Hey what's up!");
   mail.to_string();
   cout << "Your message is: "<< endl;
   mail.print();
   return 0;
}
