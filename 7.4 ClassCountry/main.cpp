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
//using namespace std;


class Country
{
private:
double m_population, m_area, m_density;
std::string m_name;
public:
Country();    // Constructor
void read();    // Mutator
bool is_larger_than(Country b) const;    // Compares the two countries and finds the larger area
bool is_more_populated_than(Country b) const;    // Compares the two countries and finds the more popuated
bool is_denser_than(Country b) const;    // Compares the two countries and finds the denser populated
void printpop() const;    // Prints the results
void printarea() const;    // Prints the results
void printdensity() const;    // Prints the results
};
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
                        largest = next;
                if (next.is_more_populated_than(populous))
                        populous = next;
                if (next.is_denser_than(densest))
                        densest = next;

                std::cout << "More data? (y/n) ";
                std::string answer;
                getline(std::cin, answer);
                if (answer != "y")
                        more = false;
        }
        std::cout << "The largest country by area is: "; largest.printarea();
        std::cout << "The most populated country is: "; populous.printpop();
        std::cout << "The most densely populated country is: "; densest.printdensity();

        return 0;
}
