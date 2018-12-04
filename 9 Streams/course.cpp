#include<iostream>
#include<vector>
#include<fstream>
#include<sstream>
#include<string>
#include "course.h"
#include "grade.h"

course::course()
{

}
void course::create_report(int &id)
{
   //This is where I would use the classes.txt file to open each class listed and search
   //using a new variable of each getline += ".txt"
   //but I cant.
   /*
   std::ifstream classes("./data/classes.txt", std::ios::in);
   if (classes.is_open())
   {
      std::string line;
      std::string txt = ".txt";
      while (std::getline(classes, line))
      {
         std::string variabletoopen = line + txt;
         std::cout << variabletoopen << '\n';
      }
      classes.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
   */
   //
   //
   //------------------I would put the variable here.
   std::ifstream csc1("./data/CSC1.txt", std::ios::in);
   if (csc1.is_open())
   {
      std::string line;
      std::string class_name = "CSC1";
      while (std::getline(csc1, line))
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
      csc1.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
   std::ifstream csc2("./data/CSC2.txt", std::ios::in);
   if (csc2.is_open())
   {
      std::string line;
      std::string class_name = "CSC2";
      while (std::getline(csc2, line))
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
      csc2.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
   std::ifstream csc46("./data/CSC46.txt", std::ios::in);
   if (csc46.is_open())
   {
      std::string line;
      std::string class_name = "CSC46";
      while (std::getline(csc46, line))
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
      csc46.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
   std::ifstream csc151("./data/CSC151.txt", std::ios::in);
   if (csc151.is_open())
   {
      std::string line;
      std::string class_name = "CSC151";
      while (std::getline(csc151, line))
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
      csc151.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
   std::ifstream mth151("./data/MTH151.txt", std::ios::in);
   if (mth151.is_open())
   {
      std::string line;
      std::string class_name = "MTH151";
      while (std::getline(mth151, line))
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
      mth151.close();
   }
   else
   {
      std::cerr << "Unable to open file\n";
   }
   print(report);
}
void course::print(std::vector<grade> &v)
{
   std::cout << "Student ID: " << v[0].get_student_id() << '\n';
   for (int i = 0; i < v.size(); i++)
   {
      std::cout << v[i].get_course_name() << " " << v[i].get_grade() << '\n';
   }
   std::ofstream report("./data/report.txt", std::ios::out);
   if (report.is_open())
   {
   report << "Student ID: " << v[0].get_student_id() << std::endl;
      for (int i = 0; i < v.size(); i++)
      {
         report << v[i].get_course_name() << " " << v[i].get_grade() << std::endl;
      }
      report.close();
   }
}
