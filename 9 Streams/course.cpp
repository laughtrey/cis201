#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include<iomanip>
#include "course.h"
#include "grade.h"

course::course()
{

}
course::course(std::string n, std::string cn)
{
   m_filename = n;
   m_course_name = cn;
}
std::string course::get_filename() // Returns m_filename
{
   return m_filename;
}
std::string course::get_course_name() // Returns m_course_name
{
   return m_course_name;
}
void course::create_listing() // This function should create the .txt variable to open each class offered.
{
   std::ifstream classes("./data/classes.txt", std::ios::in);
   if (classes.is_open())
   {
      std::string folder = "./data/";
      std::string line;
      std::string txt = ".txt";
      while (std::getline(classes, line))
      {
         std::string filename = folder + line + txt;
         listing.push_back(course(filename, line));
      }
      classes.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
}
void course::create_report(int &id) // This function pushes back the student ID and grade into a vector for each class they're in.
{
   for (int i = 0; i < listing.size(); i++)
   {
      std::ifstream classtxt(listing[i].get_filename().c_str(), std::ios::in);
      if (classtxt.is_open())
      {
         std::string line;
         std::string class_name = listing[i].get_course_name();
         while (std::getline(classtxt, line))
         {
            std::istringstream instr(line);
            int class_id;
            std::string class_grade;
            instr >> class_id >> class_grade;
            if (id == class_id)
            {
               report.push_back(grade(id, class_name, class_grade));
            }
         }
         classtxt.close();
      }
      else {
         std::cerr << "Unable to open file\n";
      }
   }
   print(report);
}
void course::print(std::vector<grade> &v) //Prints the report to the screen and report.txt
{
   std::cout << "Student ID: " << v[0].get_student_id() << '\n';
   for (int i = 0; i < v.size(); i++)
   {
      std::cout << v[i].get_course_name() << " " << std::right << std::setw(5) << v[i].get_grade() << '\n';
   }
   std::ofstream report("./data/report.txt", std::ios::out);
   if (report.is_open())
   {
   report << "Student ID: " << v[0].get_student_id() << std::endl;
      for (int i = 0; i < v.size(); i++)
      {
         report << v[i].get_course_name() << " " << std::right << std::setw(5) << v[i].get_grade() << std::endl;
      }
      report.close();
   }
}
