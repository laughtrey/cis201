#include <iostream>
#include <string>
#include <cmath>
#include "Country.h"
// Constructor
Country::Country()
{
   m_area = 1;
   m_population = 1;
   m_density = 1;
}
// ---Functions---
// Mutator or setter functions
void Country::read()
{
   std::cout << "Please enter the name of the country: ";
   getline(std::cin, m_name);
   std::cout << "Please enter the population in millions: ";
   std::cin >> m_population;
   std::cout << "Please enter the area in kilometers squared in millions: ";
   std::cin >> m_area;
   m_density = (m_population / m_area);
   std::string remainder;
   getline(std::cin, remainder);
}
// Compares two areas
bool Country::is_larger_than(Country b) const
{
   if (m_area == 0) return true;
   if (b.m_area == 0) return false;
   return m_area > b.m_area;
}
// Compares two populations
bool Country::is_more_populated_than(Country b) const
{
   if (m_population == 0) return true;
   if (b.m_population == 0) return false;
   return m_population > b.m_population;

}
// Compares two densities
bool Country::is_denser_than(Country b) const
{
   if (m_density == 0) return true;
   if (b.m_density == 0) return false;
   return m_density > b.m_density;

}
// Prints the population
void Country::printpop() const
{
   std::cout << m_name << std::endl;
   std::cout << "Population: " << m_population << std::endl;
}
// Prints the area
void Country::printarea() const
{
   std::cout << m_name << std::endl;
   std::cout << "Area in Kilometers squared: " << m_area << std::endl;
}
// Prints the density
void Country::printdensity() const
{
   std::cout << m_name << std::endl;
   std::cout << "Density: " << m_density << " million people per square kilometer."<< std::endl;
}
