//
//  main.cpp
//  pointer number swapper
//
//  Created by maya nachiappan on 10/8/24.
//
#include <iostream>

// Function to swap two variables using pointers
void swap(int* a, int* b) {
    int temp = *a; // Store the value at the address pointed by a
    *a = *b;       // Assign the value at the address pointed by b to the address pointed by a
    *b = temp;     // Assign the value stored in temp to the address pointed by b
}

int main() {
    int x, y;

   
    std::cout << "Enter two integers: "<< std::endl;
    std::cin >> x >> y; // stores the values of x and y

    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl; // prints values of x and y before swapping
    
    swap(&x, &y); // uses swap function to swap values based on address of x and y

    std::cout << "After swap: x = " << x << ", y = " << y <<std::endl; // prints swapped values of x and y

    return 0;
}
