#ifndef MESSAGE_H
#define MESSAGE_H
/*
class Message
*/
class Message
{
private:
   std::string m_recipient, m_sender, m_body, m_email;
   time_t timestamp;

public:
   Message();
   Message(std::string r, std::string s); // Constructor that takes the sender and recipient and sets the time stamp to current time
   void append(std::string m); // Appends a line of text to the message body
   void to_string(); // makes the message into one long string
   void print(); // prints the message text
};
#endif
