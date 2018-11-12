/*
File: main.cpp
Description: This program will ask the user for the radius of a circle then
print the area and circumference of a circle with that radius then
print the volume and surface area of a sphere with that radius
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: Tue Sep 11 22:50:09 PDT 2018
*/

#include<iostream>

using namespace std;

int main()
{
	const double pi = 3.14159;
	double r,carea,ccircumference,svolume,sarea;

	//Prompt for radius
	cout << "Enter the radius of a circle: ";
	cin >> r;

	//Calculate the area of the circle with that radius
	carea = pi * r * r;

	//Calculate the circumference of the circle with that radius
	ccircumference = 2 * pi * r;

	//Calculate the volume of a sphere with that radius
	svolume = (4/3.0) * pi * r * r * r;

	//Calculate the surface area of a sphere with that radius
	sarea = 4 * pi * r * r;

	//Print the results
	cout << "The area of the circle is: " << carea << endl;
	cout << "The circumference of the circle is: " << ccircumference << endl;
	cout << "The volume of the sphere is: " << svolume << endl;
	cout << "The surface area of the sphere is: " << sarea << endl;

	return 0;
}
