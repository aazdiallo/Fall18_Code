/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: ghadhakanka
 *
 * Created on September 20, 2018, 3:18 PM
 */
#include <iostream>
#include <cstdlib>

//using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    char a[10];
    a[0] = 'a';
    std:: cout << a[0] << ' ' << char(a[0] - 32) << std::endl;
    return 0;
}

