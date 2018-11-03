#include <iostream>
#include <string>
using namespace std;

int is_a(string a);

int main()
{
        string a = "The quick brown fox jumped over the lazy dog";
        cout << "The number of As is: " << is_a(a) << endl;
        return 0;
}

int is_a(string a)
{
        int count = 0;
        for (int i = 0; i < a.length(); i++)
        {
                char character = a.at(i);
                if (character == 'a' || character == 'A')
                {
                        count++;
                }
        }
        return count;
}
