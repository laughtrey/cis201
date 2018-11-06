//Chapter 6 notes Big C++
#include<iostream>
#include<string>
using namespace std;
int main()
{
std::vector<double> salaries(10); // Creates a vector with 9 slots, 0-9
salaries[1] // second slot

// This loop finds the highest salary:
double highest = salaries[0];
for (i = 1; i < 10; i++)
   if (salaries[i] > highest)
      highest = salaries[i];
// But should be written as:
for ( i = 1; i < salaries.size(); i++)
   if ( salaries[i] > highest)
      highest = salaries[i];\
// This will measure the size if it changes. Avoid magic numbers.

// Extremely common for visiting all elements in a vector:
for ( i = 0; i < v.size(); i++)
   do something with v[i];

//the function push_back allows you to start out with an empty vector and grow it whenever another employee is added:
vector<double> salaries;
...
double s;
cin >> s;
...
salaries.push_back(s);
// it adds one element to its end, then sets it to s, it indicates that s is PUSHED onto the BACK of the vector.
// inefficient, if you know how big the vector is, specify.
// pop_back removes one on the end.

//You can use vectors of objects. ex. Create a vector of employees with a definition such as;
vector<Employee> staff(10);
//you can add elements by copying objects into the slots
staff[0] = Employee ("Hacker, Harry", 35000.0);
//you can access any employee object in the vector as staff[i]
//because the vector entry is an object, you can apply a member function to it
if (staff[i].get_salary() > 50000.0) ...

//use this:
x = v[i];
i++;
//strings are vectors

string greeting = "Hello";
greeting [3] = 'p';
greeting [4] = '!';
// the string is now Help!
// [] is convenient than substr if you want to visit a string one character at a time

   return 0;
}
