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
   string recipient, sender, body, email, From, To, Message_body;
   time_t timest;

public:
   Message();
   Message(string r, string s, string b); // Constructor that takes the sender and recipient and sets the time stamp to current time
   void append(); // Appends a line of text to the message body
   void to_string(); // makes the message into one long string
   void print(); // prints the message text
};
Message::Message()
{

}
Message::Message(string r, string s, string b)
{
   recipient = r;
   sender = s;
   body = b;
   time(&timest);
   From = "From: ";
   To = "To: ";
   Message_body = "Message: ";
   email = " ";

}
void Message::append()
{
   cout << "Please enter your recipient: ";
   getline(cin, recipient);
   cout << "Please enter your name as sender: ";
   getline(cin, sender);
   cout << "Please enter your message: ";
   getline(cin, body);
   time(&timest);
}
void Message::to_string()
{
   From = sender;
   To = recipient;
   Message_body = body;
   email = From + To + Message_body;
}
void Message::print()
{
   cout << email;
}
int main()
{
   Message mail;
   time_t timest;
   mail.append();
   mail.print();
   time(&timest);
   cout << ctime(&timest);
   return 0;
}
