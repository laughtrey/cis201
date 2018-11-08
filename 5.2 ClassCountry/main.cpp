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
#include "Country.h"
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
