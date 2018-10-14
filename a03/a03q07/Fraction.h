/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/*
 * File:   Fraction.h
 * Author: Abdoul Diallo
 *
 * Created on September 13, 2018, 12:38 PM
 */

#ifndef FRACTION_H
#define FRACTION_H

void Fraction_print(int, int);

void Fraction_add(int & xn, int & xd,
                    int yn, int yd,
                    int zn, int zd);

void Fraction_subtract(int & xn, int & xd,
                  int yn, int yd,
                  int zn, int zd);

void Fraction_multiply(int & xn, int & xd,
                  int yn, int yd,
                  int zn, int zd);

void Fraction_divide(int & xn, int & xd,
                  int yn, int yd,
                  int zn, int zd);

bool Fraction_eq(int yn, int yd,
                  int zn, int zd);

bool Fraction_neq(int yn, int yd,
                  int zn, int zd);

#endif /* FRACTION_H */
