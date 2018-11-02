/*
file: main.cpp
Description: This program will ask the user for 3 numbers and will
calculate and print the sum the product and the average of those numbers.
Author: Raymond  Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: 9/6/2018
*/

#include<iostream>

using namespace std;

int main()
{
	int sum,product,average,num1,num2,num3;

	// Prompt for num1
	cout << "Enter number 1: ";
	cin >> num1;

	// Prompt for num2
	cout << "Enter number 2: ";
	cin >> num2;

	// Prompt for num3
	cout << "Enter number 3: ";
	cin >> num3;

	// Calculate the sum
	sum = num1 + num2 + num3;

	// Calculate the product
	product = num1 * num2 * num3;

	// Calculate the average 
	average = sum / 3;


	// Print the sum product and average
	cout << "The sum is: " << sum << endl;
	cout << "The product is: " << product << endl;
	cout << "The average is: " << average << endl;

	return 0;
}
