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
   Country(double area, double population); // Constructor with parameters
   void read(); // Mutator
   bool is_larger(Country b); // Compares the two countries and finds the larger area
   bool is_more_populated(Country b); // Compares the two countries and finds the more popuated
   bool is_denser(Country b); // Compares the two countries and finds the denser populated
   void print() const; // Prints the results
   /*
   void set_population(double population); // Mutator
   void set_area(double area); // Mutator
   */
};
// Constructor
Country::Country(double area, double population)
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
   cout << "Please enter the area in miles squared: ";
   cin >> area;
}
bool Country::is_larger(Country b)
{
   if (area == 0) return true;
   if (b.area == 0) return false;
   return area > b.area;
}
bool Country::is_more_populated(Country b)
{

}
bool Country::is_denser(Country b)
{

}
void Country::print() const
{
   cout << name
      << "Population: " << population
      << "Area: "       << area
      << "Density: "    << density;
}
/*
void Country::set_population(double population)
{
   country_population = population;
}
void Country::set_area(double area)
{
   country_area = area;
}
*/
int main()
{
   Country CountryA();
   Country CountryB();
   return 0;
}
