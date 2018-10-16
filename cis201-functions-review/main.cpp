#include<iostream>
#include<string>
using namespace std;

int count = 0;
int is_a(string a);

int main()
{
  string a = "555the quick brown fox jumped over the lazy dog AaA";
  bool is_a(string a);
  cout << "The number of As is: " << count << endl; 
  return 0;
}

int is_a(string a)
{
  int count = 0;
   for (int i = 0; i < a.length(); i++)
   {
      if (a.at(i) == 'a' || 'A')
      {
        count++;
      }
   }
   return count;
}
