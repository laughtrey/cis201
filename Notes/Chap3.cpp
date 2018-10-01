//Chapter 3 notes Big C++

#include <iostream>
#include <string>
using namespace std;

int main()
{

	int area;
	int length;
//The if statement used to implement a decision, has two parts: condition and body. ex:
	if (area < 0)
		cout << "Error: Negative area\n";
//body is true only if condition is true
	return 0;
//body may have multiple statements:
	if (area < 0)
	{
		cout << "Error: Negative area\n";
		length = 0;
	}
//Must be enclosed in curly braces { } called a block statement, executed sequentially.
}
