/*
File: main.cpp
Description: This program has the class Country, which stores the name of the country,
its population and its area. This program will print the country with the largest area
the largest population, and the largest population density.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 10/26/2018, 2:45:07 PM
*/
#include <iostream>
#include <string>
#include <cmath>
#include <cassert>
using namespace std;


class Country
{
private:
   double population, area, density;
   string name;
public:
   Country(); // Constructor
   //Country(int area, int population); // Constructor with parameters
   void read(); // Mutator
   bool is_larger_than(Country b) const; // Compares the two countries and finds the larger area
   bool is_more_populated_than(Country next) const; // Compares the two countries and finds the more popuated
   bool is_denser_than(Country next) const; // Compares the two countries and finds the denser populated
   void print() const; // Prints the results
};
// Constructor
Country::Country()
{
   area = 1;
   population = 0;
   density = 0;
}
// ---Functions---
// Mutator or setter functions
void Country::read()
{
   cout << "Please enter the name of the country: ";
   getline(cin, name);
   cout << "Please enter the population: ";
   cin >> population;
   cout << "Please enter the area in kilometers squared: ";
   cin >> area;
   density = (population / area);
   string remainder;
   getline(cin, remainder);
}
bool Country::is_larger_than(Country b) const
{
   if (area == 0) return true;
   if (b.area == 0) return false;
   return area > b.area;
}

bool Country::is_more_populated_than(Country b) const
{
   if (population == 0) return true;
   if (b.population == 0) return false;
   return population > b.population;

}
bool Country::is_denser_than(Country b) const
{
   if (density == 0) return true;
   if (b.density == 0) return false;
   return density > b.density;

}

void Country::print() const // split this into 3 for each type and call printlargest etc
{
   cout << name << endl;
   cout << "Population: " << population << endl;
   cout << "Area:" << area << endl;
   cout << "Density: " << density << endl;
}
int main()
{
   Country largest;
   Country populous;
   Country densest;

   bool more = true;
   while (more)
   {
      Country next;
      next.read();
      if (next.is_larger_than(largest))
      largest = next; //this is erasing next. I need it to be able to keep checking the entered country.
      if (next.is_more_populated_than(populous))
      populous = next;
      if (next.is_denser_than(densest))
      densest = next;

      cout << "More data? (y/n) ";
      string answer;
      getline(cin, answer);
      if (answer != "y")
         more = false;
   }
   cout << "The largest country by area is: "; largest.print();
   cout << "The most populated country is: "; populous.print();
   cout << "The most densely populated country is: "; densest.print();

   return 0;
}
