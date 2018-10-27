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
   bool is_more_populated_than(Country b) const; // Compares the two countries and finds the more popuated
   bool is_denser_than(Country b) const; // Compares the two countries and finds the denser populated
   void print() const; // Prints the results
   /*
   void set_population(double population); // Mutator
   void set_area(double area); // Mutator
   */
};
// Constructor
Country::Country()
{
   area = 1;
   population = 0;
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
}
bool Country::is_larger_than(Country largest) const
{
   if (area == 0) return true;
   if (largest.area == 0) return false;
   return area > largest.area;
}
bool Country::is_more_populated_than(Country populous) const
{
   if (population == 0) return true;
   if (populous.population == 0) return false;
   return population > populous.population;
}
bool Country::is_denser_than(Country densest) const
{
   if (density == 0) return true;
   if (densest.density == 0) return false;
   return density > densest.density;
}
void Country::print() const
{
   cout << name
      << "Population: " << population
      << "Area: "       << area
      << "Density: "    << density;
}
int main()
{
   Country largest;
   Country populous;
   Country densest;

   bool more = true;
   while(more)
   {
      Country next;
      next.read();
      if (next.is_larger_than(largest))
      largest = next;
      if (next.is_more_populated_than(populous))
      populous = next;
      if (next.is_denser_than(densest))
      densest = next;

      cout << "Enter another country? (y/n) ";
      string answer;
      getline(cin, answer);
      if (answer !="y")
      more = false;
   }
   cout << "The largest country has a population of: ";
   largest.print();

   return 0;
}
