#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
#include<vector>
#include "course.h"

class student
{
private:
   double m_id;
   std::vector<course> m_enrolled;

public:
   student();
   student(double id,std::vector<course> &v);
   double get_id();
   std::vector<course> get_enrolled();
};
#endif
