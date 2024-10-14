//
//  main.cpp
//  pointer number swapper
//
//  Created by maya nachiappan on 10/8/24.
//
#include <iostream>
using namespace std;

// Function to swap two variables using pointers
void swap(int* a, int* b) {
    int temp = *a; // Store the value at the address pointed by a
    *a = *b;       // Assign the value at the address pointed by b to the address pointed by a
    *b = temp;     // Assign the value stored in temp to the address pointed by b
}

int main() {
    int x, y;

   
    cout << "Enter two integers: "<< endl;
    cin >> x >> y; // stores the values of x and y

    cout << "Before swap: x = " << x << ", y = " << y << endl; // prints values of x and y before swapping
    
    swap(&x, &y); // uses swap function to swap values based on address of x and y

    cout << "After swap: x = " << x << ", y = " << y <<endl; // prints swapped values of x and y

    return 0;
}
