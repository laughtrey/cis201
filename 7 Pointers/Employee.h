#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "BankAccount.h"

#include <string>
#include <vector>

/**
   A basic employee class that is used in many examples
   in the book "Computing Concepts with C++ Essentials"
*/

class Employee
{
private:
   std::string name;
   double salary;
   BankAccount* account;
public:
   /**
      Constructs an employee with empty name and no salary.
   */
   Employee();
   /**
      Constructs an employee with a given name and salary.
      @param employee_name the employee name
      @param initial_salary the initial salary
   */
   Employee(std::string employee_name, double initial_salary);
   /**
      Sets the salary of this employee.
      @param new_salary the new salary value
   */
   void set_salary(double new_salary);
   /**
      Gets the salary of this employee.
      @return the current salary
   */
   double get_salary() const;
   /**
      Gets the name of this employee.
      @return the employee name
   */
   std::string get_name() const;
   void set_account(BankAccount* r);
   double get_account() const;
   void print() const;

};

#endif
