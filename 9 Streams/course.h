#ifndef COURSE_H
#define COURSE_H

#include<iostream>
#include<vector>
#include "grade.h"

class course
{
private:
   std::vector<grade> report;

public:
   course();
   void create_report(int& id);
   void print(std::vector<grade> &v);
};
#endif
