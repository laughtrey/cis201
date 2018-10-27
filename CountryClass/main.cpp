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
   double country_population,country_area;
public:
   Country(); // Constructor
   Country(double area,double population); // Constructor with parameters
   void set_population(double population); // Mutator
   void set_area(double area); // Mutator
   bool is_larger(Country b); 
   bool is_denser(Country b);
   bool is_more_populated(Country b);
};
// Constructor
Country::Country(double area,double population)
{
   area = 1.0;
   population = 0.0;
}
// ---Functions---
// Mutator or setter functions
void Country::set_population(double population)
{
   country_population = population;
}
void Country::set_area(double area)
{
   country_area = area;
}

int main()
{

   return 0;
}
