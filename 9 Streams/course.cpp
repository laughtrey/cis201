#include<iostream>
#include<vector>
#include<fstream>
#include "course.h"
#include "grade.h"
course::course()
{

}
course::course(std::string n)
{
   m_course_name = n;
}
std::vector<grade> course::get_grades()
{
   return m_grades;
}
std::string course::get_course_name()
{
   return m_course_name;
}
void course::create_listing()
{
   std::ifstream classes("./data/classes.txt", std::ios::in);
   if (classes.is_open())
   {
      std::string line;
      while (std::getline(classes, line))
      {
         listing.push_back(course(line));
      }
      classes.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
}
void course::print()
{
    for (int i = 0; i < listing.size(); i++)
   {
   std::cout << listing[i].get_course_name() << '\n';
   }
}
