/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   a03q01.cpp
 * Author: Abdoul Diallo
 *
 * Created on September 13, 2018, 12:36 PM
 */

#include <iostream>
#include "Fraction.h"

//using namespace std;

void test_Fraction_print()
{
    
    int xn = 0, xd = 0; // numerator and denominator of a fraction
    
    //cout << "************* Program Computing a Fraction ****************" << endl;
    //cout << "Enter the numerator followed by the denominator!" << endl;
    std::cin >> xn >> xd;
    Fraction_print(xn, xd);
    std::cout << std::endl;
}
int main()
{
    int option;
    //cout << "Please select your option!..." << endl;
    std::cout << "(1) Compute a Fraction" << std::endl;
    //cout << "(0) Exit Program" << endl;
    std::cin >> option;
    switch (option)
    {
        case 1:
        test_Fraction_print();
        break;
        
        //case 0: 
            //exit(0);
    }
    
    

return 0;
}
