#ifndef GRADE_H
#define GRADE_H

#include<iostream>
#include<string>

class grade
{
private:
   double m_id;
   std::string m_grade;
   std::vector<grade> m_csc1_grade,m_csc2_grade,m_csc46_grade,m_csc151_grade,m_mth151_grade;

public:
   grade();
   grade(std::string g);
   double get_id();
   std::string get_grade();
   void create_csc1();
   void create_csc2();
   void create_csc46();
   void create_csc151();
   void create_mth151();
   void print();

};
#endif
