/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Deque.h
 * Author: Abdoul Diallo
 *
 * Created on October 13, 2018, 12:23 AM
 */

#ifndef DEQUE_H
#define DEQUE_H
#include <iostream>
#include <deque>
const int CAPACITY = 5;
const int DEFAULT = -1;


class Deque
{
public:
// the constructor does not have any parameter. It initializes size to 0
    Deque()
        : size(0)
        {
            
        }
// get_size – returns the size of the deque (this is used for printing).
        int get_size() const
        {
            return size;
        }
// operator[] – accepts an integer i and returns x[i](this is used for printing).
        int operator[] (int index) const
        {
            return x[index];
        }
// insert_head method – accepts an integer and inserts at the head if
// the deque is not full
        void insert_head (int head)
        {
            
        }
// remove_head method – removes the head from the deque if it is not
// empty and returns it. If the deque is empty, return DEFAULT.
        int remove_head()
        {
            if (is_empty())
                return DEFAULT;
            else
                return 0;
        }
// insert_tail method – accepts an integer and inserts at the tail if
// the deque is not full
        void insert_tail(int tail)
        {
            
        }
// remove_tail method – removes the tail from the deque if it is not
// empty and returns it. If the deque is empty, return DEFAULT.
        int remove_tail()
        {
            if (is_empty())
                return DEFAULT;
            else
                return 0;
        }
// is_empty method – returns true exactly when the deque is empty
        bool is_empty() const
        {
            if ((sizeof(x) / sizeof(x[0])) == 0)
                return true;
            else
                return false;
        }
// is_full method – returns true exactly when the deque is full
        bool is_full() const
        {
            if ((sizeof(x) / sizeof(x[0])) == CAPACITY)
                return true;
            else
                return false;
        }
private:
// integer size that gives the size of the deque
    int size;
// integer array x that act as a container for the elements of the
// deque. The size of array x is CAPACITY.
    //int x[CAPACITY];
    std:: deque <int> x;
};
std::ostream & operator<<(std::ostream &, const Deque &);


#endif /* DEQUE_H */

