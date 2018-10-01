//Chapter 3 notes Big C++

#include <iostream>
#include <string>		//String
#include <ctime>		//Time
#include <cstdlib>	//Random
using namespace std;

int main()
{

	int area;
	int length;
//The if statement used to implement a decision, has two parts: condition and body. ex:
	if(area < 0);
	{
		cout << "Error: Negative area\n";
	}
//body is true only if condition is true
//body may have multiple statements:
	if(area < 0)
	{
		cout << "Error: Negative area\n";
		length = 0;
	}
//Must be enclosed in curly braces { } called a block statement, executed sequentially.


cout << "Math notation and C++ notation is different" << endl;
// C++			Math Notation
// >					>		Greater than
// >= 				≥		Greater than or equal
// <					<		Less than
// <=					≤		Less than or equal
// ==					=		Equal
// !=					≠		Not equal
// a = 5 assigns 5 to a
// if(a == 5) tests if 5 equals a

//---Boolean operators---
// A special data type bool has two values, true or false. bool discounted, is discounted true or false?
// && and, if both conditions are true, if either is false than the test fails
// || or, if either condition is true the test succeeds.
// ! not, inverts a value. A value becomes true if it is false
// if(-0.5 <= x && x <= 0.5) means (-0.5 <= x <= 0.5)

// for loops update, test, update until a certain quality is met. Update a value until it is larger than another. i++, is i < value?
// ex: for (int i = 0; i < piece; i++) start at 0, increase i by one while i < piece variable.
// for loops are closely related to while loops

if(cin.fail())  //If the user types an input that is not a number than the stream fails
{
	cout << "End of input.\n";
//	more = false;
}

//use input redirection for making programs; average < numbers.txt > output.txt

//you can use the time from mindnight to randomly generate a seed for random numbers
srand(time(0));
	cout << "Here's some random numbers:" << endl;
	cout << rand() << endl;
	cout << rand() << endl;
	cout << rand() << endl;


return 0;
}
