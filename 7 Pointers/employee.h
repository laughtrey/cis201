#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "bankaccount.h"

#include <string>
#include <vector>

/**
   A basic employee class that is used in many examples
   in the book "Computing Concepts with C++ Essentials"
*/

class employee
{
private:
   std::string m_lastname, m_firstname;
   double salary;
   bankaccount* account;
   std::vector<employee> payroll;
public:
   /**
      Constructs an employee with empty name and no salary.
   */
   employee();
   /**
      Constructs an employee with a given name and salary.
      @param employee_name the employee name
      @param initial_salary the initial salary
   */
   employee(std::string lastname, std::string firstname, double initial_salary);
   /**
      Sets the salary of this employee.
      @param new_salary the new salary value
   */
   void read();
   void create_accounts(std::vector<employee> &v);

   /**
   Reads in the list of employees and pushes them back to the vector
   */
   void set_salary(double new_salary);
   /**
      Gets the salary of this employee.
      @return the current salary
   */
   double get_salary() const;
   /**
      Gets the first name of this employee.
      @return the employee first name
   */
   std::string get_firstname() const;
   std::string get_lastname() const;
   void set_account(bankaccount* r);
   bankaccount get_account();
   void deposit(std::vector<employee> &v);
   void print();

};

#endif
