#include <iostream>
#include <string>
using namespace std;
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
        int length = s.length();
        for (int i = 0; i < length; i++)
        {
                if (!isdigit(s.at(i)))
                        return false;
        }
        return true;

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
