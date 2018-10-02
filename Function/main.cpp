/*
File: main.cpp
Description: This is the function project.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 9/27/2018, 4:48:58 PM
*/
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

double get_double(string prompt);
double sphere_volume(double r);

int main()
{

   double radius = get_double("Please enter the radius: ");
   cout << radius << endl;
   cout << sphere_volume(radius) << endl;
  return 0;
}
/**
*/
double sphere_volume(double r)
{
   return 4.0 / 3.0 * M_PI * pow(r,3);
}

/**
   @param prompt the string prompt
   @return the radius of the circle
*/
double get_double(string prompt)
{
    double value=1.0;
    cout << prompt;
    cin >> value;
    return value;
}
