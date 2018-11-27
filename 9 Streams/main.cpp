#include<iostream>
#include<fstream>
#include<ctime>
#include<string>
#include<cstdlib>

int get_random(int scale)
{
  return rand() % scale + 1;
}
int main()
{
  int AMOUNT = 20;
  srand(time(0));
  std::ofstream output("data.txt", std::ios::app);
  if (output.is_open())
  {
    for (int i = 0; i < AMOUNT; i++)
    {
    output << get_random(300);
    output.close();
    }
  }

  return 0;
}
