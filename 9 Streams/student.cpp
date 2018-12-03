#include<iostream>
#include<string>
#include<vector>
#include "student.h"
#include "course.h"
student::student()
{
   
}
student::student(double id,std::vector<course> &v)
{
   m_id = id;
   m_enrolled = v;
}
double student::get_id()
{
   return m_id;
}
std::vector<course> student::get_enrolled()
{
   return m_enrolled;
}
