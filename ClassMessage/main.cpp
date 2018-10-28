#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Message
{
private:
   string recipient,sender,message;
   time_t timest;

public:
   Message();
   Message(string r, string s, string m);
   void append();
   void to_string();
   void print();
};
Message::Message()
{

}
Message::Message(string r, string s, string m)
{
      cout << "Please enter your recipient: ";
      getline(cin, r);
      cout << "Please enter your name as sender: ";
      cin >> s;
      cout << "Please enter your message: ";
      cin >> m;
      time(&timest);

}
void append()
{

}
void to_string()
{

}
void print()
{

}
int main()
{
   time_t timer;
   time_t timest;
   time(&timest);
   cout << ctime(&timest);
   return 0;
}
