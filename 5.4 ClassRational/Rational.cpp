/*
   File: Rational.cpp
   Description: Source file of Rational class
   Author(s): Laughrey, Raymond. Santillan, Joshua. Tran, Phillip.
   Email: raymondl4963@student.vvc.edu
   Date of Creation: 11/7/18
 */
#include <iostream>
#include "Rational.h"

Rational::Rational()
{
	m_x = 0.0;
	m_y = 0.0;
}

Rational::Rational(double x, double y)
{
   	m_x = x;
   	m_y = y;
}

double Rational::Adding(const double& m_x, const double& m_y)
{
	return (m_x + m_y);
}

double Rational::Subtraction(const double& m_x, const double& m_y)
{
	return (m_x - m_y);
}

double Rational::Division(const double& m_x, const double& m_y)
{
	return (m_x / m_y);
}

double Rational::Multiplication(const double& m_x, double& m_y)
{
	return (m_x * m_y);
}

void Rational::Print() // prints the math operations using arithmetic signs
{
	std::cout << m_x << " + " << m_y << " = " << Adding(m_x, m_y) << "\n";
	std::cout << m_x << " - " << m_y << " = " << Subtraction(m_x, m_y) << "\n";
	std::cout << m_x << " / " << m_y << " = " << Division(m_x, m_y) << "\n";
	std::cout << m_x << " * " << m_y << " = " << Multiplication(m_x, m_y) << "\n";
}
