#ifndef GRADE_H
#define GRADE_H

#include<iostream>
#include<string>

class grade
{
private:
   std::string m_course_name, m_grade;
   int m_student_id;

public:
   grade();
   grade(int id, std::string n, std::string g);
   int get_student_id();
   std::string get_grade();
   std::string get_course_name();
};
#endif
