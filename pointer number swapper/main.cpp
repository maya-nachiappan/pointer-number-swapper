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
    cin >> x >> y;

    cout << "Before swap: x = " << x << ", y = " << y << endl;
    swap(&x, &y);

    cout << "After swap: x = " << x << ", y = " << y <<endl;

    return 0;
}
