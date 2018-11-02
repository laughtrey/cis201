/*
File: main.cpp
Description: This program will ask the user for a radius and height then
output various surface areas and volumes.
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 9/27/2018, 4:48:58 PM
*/
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
   double sradius = get_radius("Please enter a radius for your sphere: ");
   cout << "The surface area of your sphere is: " << sphere_surface(sradius) << endl;
   cout << "The volume of a sphere with your radius is: " << sphere_volume(sradius) << endl;
   double cyradius = get_radius("Please enter a radius for your cylinder: ");
   double cyheight = get_height("Please enter the height of your cylinder: ");
   cout << "The volume of a cylinder with your radius and height is: " << cylinder_volume(cyradius,cyheight) << endl;
   cout << "The surface area of a cylinder with your radius and height is: " << cylinder_surface(cyradius,cyheight) << endl;
   double coradius = get_radius("Please enter a radius for your cone: ");
   double coheight = get_height("Please enter the height of your cone: ");
   cout << "The volume of a cone with your radius and height is: " << cone_volume(coradius,coheight) << endl;
   cout << "The surface area of a cone with your radius and height is: " << cone_surface(coradius,coheight) << endl;

  return 0;
}

/**
This requests the radius with the string prompt
@param radius placeholder double
@param prompt the prompt for requesting radius
@return returns the radius
*/
double get_radius(string prompt)
{
   double radius;
   cout << prompt;
   cin >> radius;
   if (cin.fail())
   {
      cin.clear();
      cin.ignore(999999, '\n');
      cout << "Please enter a valid radius next time." << endl;
      exit (1);//I would really like this to loop back into requesting an input instead of exiting.
   }
   else
   return radius;
}

/**
This requests the height with the string prompt
@param height placeholder double
@param prompt the prompt for requesting height height
@return returns the height
*/
double get_height(string prompt)
{
   double height=1.0;
   cout << prompt;
   cin >> height;
   if (cin.fail())
   {
      cin.clear();
      cin.ignore(999999, '\n');
      cout << "Please enter a valid height next time." << endl;
      exit (1);
   }
   else
   return height;
}

/**
This calculates surface area of a sphere with the entered radius
@param radius the radius entered by the user
@return returns the surface of the sphere
*/
double sphere_surface(double radius)
{
   return 4 * M_PI * pow(radius,2);
}

/**
This calculates the volume of a sphere with the entered radius
@param radius the radius entered by the user
@return returns the calculated sphere volume
*/
double sphere_volume(double radius)
{
   return (4.0 / 3.0) * M_PI * pow(radius,3);
}

/**
This calculates the volume of a cylinder with the entered radius and height
@param height entered height
@param radius entered radius
@return returns the calculated cylinder volume
*/
double cylinder_volume(double radius, double height)
{
   return M_PI * height * pow(radius,2);
}

/**
This calculates the surface area of the cylinder with the entered radius and height
@param radius entered radius
@param height entered height
@return returns the calculated cylinder surface
*/
double cylinder_surface(double radius, double height)
{
   return 2 * M_PI * radius * (radius + height);
}

/**
This calculates the volume of a cone with the entered radius and height
@param radius entered radius
@param height entered height
@return returns the calculated cone volume
*/
double cone_volume(double radius, double height)
{
   return (1.0 / 3.0) * M_PI * height * pow(radius,2);
}
/**
This calculates the surface area of a cone with the entered radius and height
@param radius entered radius
@param height entered height
@return returns the calculated cone surface volume
*/
double cone_surface(double radius, double height)
{
   return M_PI * radius * (radius + sqrt(pow(height,2) + pow(radius,2)));
}
