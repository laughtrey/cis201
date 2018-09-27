/*
File: main.cpp
Description: This program will take an integer only between 1 and 3999 and convert it into roman numerals
Author: Raymond Laughrey
Email: raymonl4963@student.vvc.edu
Date of Creation: Tue Sep 25 11:40:50 PDT 2018
*/

#include<iostream>
#include<string>
using namespace std;

int main()
{
	string numeral;
	int input = 0;
	int piece = 0;
	
	/*This asks for the initial input but does not proceed unless the integer is between 1 and 3999. 
	should I not lock them into something like this if they provide the wrong input?
	*/
	do
	{
		cout << "Please type an integer between 1 and 3999: " << endl;
		cin >> input;
	
	}
	while ( input >= 4000 || input < 0 ); //Runs the program if it is an acceptable input
	/*
	I - 1
	V - 5
	X - 10
	L - 50
	C - 100
	D - 500
	M - 1000
	4 - IV
	40 - XL
	400 - CD
	9 - IX
	90 - XC
	900 - CM
	*/
	if ( input >= 1000 !=0 ) //Adds M to the string numerals if the input is divisible by 1000
	{
		piece = ( input / 1000);
		for (int i = 0; i < piece; i++) 
		{
			numeral += "M";
		}
	input %=1000; //Then removes the thousands to isolate the hundreds
	}
	if ( input >= 100 !=0 )
	{
		piece = ( input / 100);
		
		if (piece == 9) //Adds CM to the string if the hundreds place is 9
		{
			numeral += "CM";
		}
		else if (piece >= 5) //Adds D to the string if the hundreds place is otherwise 5
		{
			numeral += "D";
			
			for (int i = 0; i < piece - 5;) //Adds C to the string for every integer below 4
			{
				numeral +="C";
			}
		}
		else if (piece == 4) //Adds CD to the string if the hundreds place is 4
		{
				numeral +="CD";
		}
		else if (piece >= 1) //Adds C to the hundreds place for every hundred below 4
		{
			for (int i = 0; i < piece; i++)
			{
				numeral +="C";
			}
		}
	input %= 100;  //Removes the hundreds
	}	
	if ( input >= 10 !=0 )
	{
		piece = (input / 10);
		
		if (piece == 9) //Adds 90 to the tens place if the tens are equal to 9
		{
			numeral +="XC"; 
		}
		else if (piece >= 5) //Adds 50 to the tens place
		{
			numeral +="L";
			
			for (int i = 0; i < piece - 5; i++) //Adds X to the tens place for every integer below 4
			{
				numeral +="X";
			}
		}
		else if (piece == 4) //Adds XL for 40 for the tens place
		{
			numeral +="XL";
		}
		else if (piece >= 1) //Adds X to every tens that is less than 4
		{
			for (int i = 0; i < piece; i++)
			{
				numeral +="X";
			}
		}
	input %= 10; //Removes the tens
	}
	if (input >= 1 !=0)
	{
		piece = input;
		
		if (piece == 9) //Adds 9 to the ones place
		{
			numeral +="IX";
		}
		else if (piece >= 5) //Adds 5 to the ones place
		{
			numeral +="V";
			
			for (int i = 0; i < piece - 5; i++) //Adds I to the ones place for every integer below 4
			{
				numeral +="I";
			}
		}
		else if (piece == 4) // Adds IV to the ones place for 4
		{
			numeral +="IV";
		}
		else if (piece >=1) // Adds I to the ones place for every integer below 4
		{
			for (int i = 0; i < piece; i++)
			{
				numeral +="I";
			}
		}
	}
	cout << "Your number in Roman Numerals is: " << numeral << endl;
	
	system("PAUSE");
	return 0;
}
