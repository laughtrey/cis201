#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<string>
#include<vector>
#include "course.h"

class student
{
private:
   int m_id;

public:
   student();
   student(int &id);
   int get_id();
   // void set_enrolled(std::vector<course> &v);
   // std::vector<course> get_enrolled();
};
#endif
