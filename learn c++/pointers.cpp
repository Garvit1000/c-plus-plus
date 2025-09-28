//
// Created by garvit1000 on 9/28/25.
//
//A pointer  is a variable that stores the memory address as its value.

#include <iostream>
using namespace std;

int main () {
    //declaring a pointer
    string myString = "Hello";
    string* myStringPtr = &myString;
    cout << myString <<endl;
    // Reference: output the adderess
    cout << myStringPtr <<endl;
    // Dereference: Output the value
    cout << *myStringPtr << "\n";

    // changing value
    string food = "Pizza";
    string* ptr = &food;

    // Output the value of food (Pizza)
    cout << food << "\n";

    // Output the memory address of food
    cout << &food << "\n";

    // Access the memory address of food and output its value (Pizza)
    cout << *ptr << "\n";

    // Change the value of the pointer
    *ptr = "Hamburger";

    // Output the new value of the pointer (Hamburger)
    cout << *ptr << "\n";

    // Output the new value of the food variable (Hamburger)
    cout << food << "\n";
    return 0;
}