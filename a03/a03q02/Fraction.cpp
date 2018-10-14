/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   a03q02.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 13, 2018, 12:36 PM
 */

#include <iostream>
# include "Fraction.h"
//Fraction Print
void Fraction_print(int n, int d)
{
    int nn = 0, dd = 0; 
    
    //If the denominator is not equal to zero
    if (d != 0)
    {
        //Finding Greatest Common Divisor of the two numbers
        if ((n > d) && (n % d != 0)) // If numerator is greater than denominator
        {
            for (int j = (n-1); j > 1; j--)
            {   //If a greatest common divisor is found
                if ((n % j == 0) && (d % j == 0))
                {   
                    nn = n / j;
                    dd = d / j;
                    break;
                }
            }
            if ((nn != 0) && (dd != 0))
            {
                //Printing the result
                std::cout << n << '/' << d << " = " << nn << '/' << dd << std::endl;
            }
            else // If no common divisor was found
            {
                //Printing the result
                std::cout << n << '/' << d << " = " << n << '/' << d << std::endl;
            }
        }
        else if ((n < d) && (n % d != 0)) // If denominator greater than numerator
        {
            for (int j = (d-1); j > 1; j--)
            {   //If a greatest common divisor is found
                if ((n % j == 0) && (d % j == 0))
                { 
                    nn = n / j;
                    dd = d / j;
                    break;
                }
            }
            if ((nn != 0) && (dd != 0))
            {
                //Printing the result
                std::cout << n << '/' << d << " = " << nn << '/' << dd << std::endl;
            }
            else // If no common divisor was found
            {
                //Printing the result
                std::cout << n << '/' << d << " = " << n << '/' << d << std::endl;
            }
        }
        else //If even fraction was entered
        {
            std::cout << n << '/' << d << " = " << n/d << std::endl;
        }
        }
    else //If the denominator is 0
        {
            std::cout << n << '/' << d << " is undefined" << std::endl;
    }
}

//Fraction Add
void Fraction_add(int & xn, int & xd,
                  int yn, int yd,
                  int zn, int zd)
{
    xn = (yn * zd) + (zn * yd);
    xd = (yd * zd);
    
    std::cout << yn << '/' << yd << " + " << zn << '/' << zd << " = " ;
    
    Fraction_print (xn, xd);
}