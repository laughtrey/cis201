#include<iostream>
#include<vector>
#include<fstream>
#include "grade.h"

grade::grade()
{

}
grade::grade(std::string g)
{
      //m_id = id;
      m_grade = g;
}
double grade::get_id()
{
   return m_id;
}
std::string grade::get_grade()
{
   return m_grade;
}
void grade::create_csc1()
{
   std::ifstream csc1("./data/CSC1.txt", std::ios::in);
   if (csc1.is_open())
   {
      std::string line;
      while (std::getline(csc1, line))
      {
         m_csc1_grade.push_back(grade(line));
      }
      csc1.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
}
void grade::print()
{
    for (int i = 0; i < m_csc1_grade.size(); i++)
   {
   std::cout << m_csc1_grade[i].get_grade() << '\n';
   }
}
