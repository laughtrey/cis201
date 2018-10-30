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
   to_string(); // makes the message into one long string
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
   timest = 0;

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
Message::to_string() // Cocatinate the entire thing to one string email
{
   email = "From: " + sender + '\n' + "To: " + recipient + '\n' + "Sent at: " + ctime(&timest) + "Message: " + body;

}
void Message::print() // just prints email.
{
   cout << email;
}
int main()
{
   Message mail;
   mail.append(); // Maybe this should be the constructor, the assignment was unclear.
   mail.to_string();
   cout << "Your message is: "<< endl;
   mail.print();
   return 0;
}
