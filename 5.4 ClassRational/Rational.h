#ifndef RATIONAL_H
#define RATIONAL_H
/*
   File: Rational.H
   Description: Header file of Rational class
   Author(s): Laughrey, Raymond. Santillan, Joshua. Tran, Phillip.
   Email: raymondl4963@student.vvc.edu
   Date of Creation: 11/7/18
 */
class Rational
{
	public:
		Rational(); //Constructor
		Rational(double x, double y); //Constructor with variables
		double Adding(const double& m_x, const double& m_y); // addition
		double Subtraction(const double& m_x, const double& m_y); // subtraction
		double Division(const double& m_x, const double& m_y); // division
		double Multiplication(const double& m_x, double& m_y); // multiplication
		void Print(); // void function to print to screen

	private:
		double m_x, m_y;
};
#endif
