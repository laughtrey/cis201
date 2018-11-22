/*
   File: main.cpp
   Description: This program will print out a bank statement. The program input
   is a sequence of transactions. It will then compute the interest earned by
   the account. Using both the minimum daily balance and
   the average daily balance methods for computing interest, and print out both values.
   Using an interest rate of 0.5 percent per month, and assuming the month has 30
   days. It assumes that the input data are sorted by the date. It also
   assumes that the first entry is of the form
   1 1143.24 Initial balance
   Author: Raymond Laughrey
   Email: raymonl4963@student.vvc.edu
   Date of Creation: 11/10/2018, 3:31:50 PM
 */
#include <iostream>
#include <vector>
#include <string>
#include "Transactions.h"
#include "Statement.h"

int main()
{
        Statement RayL;
        RayL.read();
        RayL.print();
        return 0;
}
