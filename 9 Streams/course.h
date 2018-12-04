#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<vector>
#include "grade.h"

class course
{
private:
   std::vector<grade> report;
   std::vector<course> listing;
   std::string m_filename, m_course_name;

public:
   course();
   course(std::string n, std::string cn);
   void create_listing();
   void create_report(int& id);
   void print(std::vector<grade> &v);
   std::string get_filename();
   std::string get_course_name();
};
#endif
