//
//  swap.cpp
//  
//
//  Created by maya nachiappan on 10/30/24.
//

#include "swap.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

// Function to swap two variables using pointers
void swapPointers(int* a, int* b)
{
    int temp=*a;// assigns the value at the address pointed by a
    *a = *b; // assignts the balue at the address pointed by b to the address pointed by a
    *b = temp; // assigns the value stored in temp to address b
}

void printPointers()
{
    int x, y;
    
    cout << "Enter two integers: "<< endl;
    cin >> x >> y; // stores the values of x and y
    
    cout << "Before swap: x = " << x << ", y = " << y << endl; // prints values of x and y before swapping
    
    swapPointers(&x, &y); // uses swap function to swap values based on address of x and y
    
    cout << "After swap: x = " << x << ", y = " << y <<endl; // prints swapped values of x and y
}
