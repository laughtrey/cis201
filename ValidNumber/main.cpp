#include<iostream>
#include<string>
using namespace std;
class is_valid_number
{
private:
   string s;
   char c;

public:
   is_valid_number ();
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
