//Chapter 5 notes Big C++
#include<iostream>
#include<string>
using namespace std;
int main()
//ftp-remote
{
string remainder; //Read remainder of line
getline(cin, remainder);
//Now you are ready to call getline again

//Class definition
/**
class ClassName
{
public:
   constructor declarations
   member function declarations
private:
   data fields
};
---Define the interface and data fields of a class---

Class definitions always end in };
*/
//A class represents a concept. Instead of groups of related variables, try desigining a class for the underlying concept
//Every class has a public interface: a collection of member functions through which the objects of the class can be manipulated.
//A constructor is used to initialize objects when they are created. A constructor with no paramters is called a default constructor.
//A mutator member function changes the state of the object on which it operates.
//An accessor member function does not modify the object. Accessors must be tagged with const.
//Every class has a private implementation: data fields that store the state of an object.
//Encapsulation is the act of hiding implementation details
//Encapsulation protects the integrity of object data
//By keeping the implementation private, we protect it from being accidentally corrupted.
//Encapsulation enables changes in the implementation without affecting users of a class.
//Use the const keyword when defining accessor member functions.
//The object on which a member function is applied is the implicit parameter. Every member function has an implicit paramater.
//Explicit parametrs of a member function are listed in the function definition.
//The purpose of a constructor is to initialize an object's data fields.
//a defualt constructor has no parameters.
//It is particularly important to initialize all numeric fields in a constructor because they are not automatically initialized.
//A function name is overloaded if there are different versions of the function, distinguished by their parameter types.
//Private data fields can only be accessed by member functions of the same class.
//The code of complex programs is distributed over multiple files.
//Header files containt the definitions of classes and declarations of shared constants, functions, and variables.
//Source files contain the function implementations.
   return 0;
}
