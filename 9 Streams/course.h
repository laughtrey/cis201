#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<vector>
#include "grade.h"

class course
{
private:
   std::vector<grade> m_grades;
   std::vector<course> listing;
   std::string m_course_name;

public:
   course();
   course(std::string n);
   std::vector<grade> get_grades();
   std::string get_course_name();
   void create_listing();
   void print();
};
#endif
