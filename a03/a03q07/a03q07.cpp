/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   a03q07.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 13, 2018, 12:36 PM
 */

#include <iostream>
#include "Fraction.h"

//Function Print
void test_Fraction_print()
{

    int xn = 0, xd = 0; // numerator and denominator of a fraction

    //cout << "************* Program Computing a Fraction ****************" << endl;
    //cout << "Enter the numerator followed by the denominator!" << endl;
    std::cin >> xn >> xd;
    Fraction_print(xn, xd);
    std::cout << std::endl;
}

//Function Add
void test_Fraction_add()
{
int xn = 0, xd = 0; // Fraction xn/xd
int yn = 0, yd = 0; // Fraction yn/yd
int zn = 0, zd = 0; // Fraction zn/zd
std::cin >> yn >> yd >> zn >> zd;
Fraction_add(xn, xd, yn, yd, zn, zd);
std::cout << std::endl;
}

//Function Subtract
void test_Fraction_subtract()
{
int xn = 0, xd = 0; // Fraction xn/xd
int yn = 0, yd = 0; // Fraction yn/yd
int zn = 0, zd = 0; // Fraction zn/zd
std::cin >> yn >> yd >> zn >> zd;
Fraction_subtract(xn, xd, yn, yd, zn, zd);
std::cout << std::endl;
}

//Function Multiply
void test_Fraction_multiply()
{
int xn = 0, xd = 0; // Fraction xn/xd
int yn = 0, yd = 0; // Fraction yn/yd
int zn = 0, zd = 0; // Fraction zn/zd
std::cin >> yn >> yd >> zn >> zd;
Fraction_multiply(xn, xd, yn, yd, zn, zd);
std::cout << std::endl;
}

//Function Divide
void test_Fraction_divide()
{
int xn = 0, xd = 0; // Fraction xn/xd
int yn = 0, yd = 0; // Fraction yn/yd
int zn = 0, zd = 0; // Fraction zn/zd
std::cin >> yn >> yd >> zn >> zd;
Fraction_divide(xn, xd, yn, yd, zn, zd);
std::cout << std::endl;
}
//Function Equal
bool test_Fraction_eq()
{
    bool eq;
int yn = 0, yd = 0; // Fraction yn/yd
int zn = 0, zd = 0; // Fraction zn/zd
std::cin >> yn >> yd >> zn >> zd;
eq = Fraction_eq(yn, yd, zn, zd);
std::cout << eq << std::endl;
std::cout << std::endl;
}
bool test_Fraction_neq()
{
    bool neq;
int yn = 0, yd = 0; // Fraction yn/yd
int zn = 0, zd = 0; // Fraction zn/zd
std::cin >> yn >> yd >> zn >> zd;
neq = Fraction_neq(yn, yd, zn, zd);
std::cout << neq << std::endl;
std::cout << std::endl;
}

int main()
{
    int option;
    //cout << "Please select your option!..." << endl;
    //std::cout << "(1) Compute a Fraction" << std::endl;
    //std::cout << "(2) Add Fraction" << std::endl;
    //cout << "(0) Exit Program" << endl;
    std::cin >> option;
    switch (option)
    {
        case 1:
            test_Fraction_print();
        break;

        case 2:
            test_Fraction_add();
            break;

        case 3:
            test_Fraction_subtract();
            break;

        case 4:
            test_Fraction_multiply();
            break;

        case 5:
            test_Fraction_divide();
            break;

        case 6:
            test_Fraction_eq();
            break;
            
        case 7:
            test_Fraction_neq();
            break;
            

            //case 0:
            //exit(0);
    }



return 0;
}
