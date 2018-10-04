/*
File: main.cpp
Description: This is the function project.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 9/27/2018, 4:48:58 PM
*/
//combine exercises 4.8 and 4.7
#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double get_radius(string prompt); //Declaring functions, note the ;
double get_height(string prompt);
double sphere_surface(double radius);
double sphere_volume(double radius);
double cylinder_volume(double radius, double height);
double cylinder_surface(double radius, double height);
double cone_volume(double radius, double height);
double cone_surface(double radius, double height);

int main()
{
   double radius = get_radius("Please enter a radius for a sphere and cylinder: ");
   double height = get_height("Please enter the height of your cylinder and cone: ");
   cout << "The surface area of your sphere is: " << sphere_surface(radius) << endl;
   cout << "The volume of a sphere with your radius is: " << sphere_volume(radius) << endl;
   cout << "The volume of a cylinder with your radius and height is: " << cylinder_volume(radius,height) << endl;
   cout << "The surface area of a cylinder with your radius and height is: " << cylinder_surface(radius,height) << endl;
   cout << "The volume of a cone with your radius and height is: " << cone_volume(radius,height) << endl;
   cout << "The surface area of a cone with your radius and height is: " << cone_surface(radius,height) << endl;

  return 0;
}

double get_radius(string prompt)
{
   double radius=1.0;
   cout << prompt;
   cin >> radius;
   return radius;
}

double get_height(string prompt)
{
   double height=1.0;
   cout << prompt;
   cin >> height;
   return height;
}

/**
Gives the surface area of a sphere with the entered Radius
@param surface equation
@param r the radius entered by the user
@return the surface of the sphere
*/
double sphere_surface(double radius)
{
   return 4 * M_PI * pow(radius,2);
}

/**
*/
double sphere_volume(double radius)
{
   return (4.0 / 3.0) * M_PI * pow(radius,3);
}

/**
*/
double cylinder_volume(double radius, double height)
{
   return M_PI * height * pow(radius,2);
}

/**
*/
double cylinder_surface(double radius, double height)
{
   return 2 * M_PI * radius * (radius + height);
}

/**
*/
double cone_volume(double radius, double height)
{
   return (1.0 / 3.0) * M_PI * height * pow(radius,2);
}
/**
*/
double cone_surface(double radius, double height)
{
   return M_PI * radius * (radius + sqrt(pow(height,2) + pow(radius,2)));
}
