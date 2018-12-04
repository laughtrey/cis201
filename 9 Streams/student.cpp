#include<iostream>
#include<string>
#include<vector>
#include "student.h"
#include "course.h"
student::student()
{
   m_id;
   // m_enrolled;
}
student::student(int &id)
{
   m_id = id;
}
int student::get_id()
{
   return m_id;
}
// void student::set_enrolled(std::vector<course> &v)
// {
//    m_enrolled = v;
// }
// std::vector<course> student::get_enrolled()
// {
//    return m_enrolled;
// }
