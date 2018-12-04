#include<iostream>
#include<fstream>
#include<vector>
#include<sstream>
#include "grade.h"

grade::grade()
{

}
grade::grade(int id, std::string n, std::string g)
{
   m_student_id = id;
   m_course_name = n;
   m_grade = g;
}
int grade::get_student_id()
{
   return m_student_id;
}
std::string grade::get_grade()
{
   return m_grade;
}
std::string grade::get_course_name()
{
   return m_course_name;
}
