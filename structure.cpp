//
// Created by garvit1000 on 9/27/25.
//
#include <iostream>
using namespace std;
struct {
    int myNum;
    string myString;
} myStructure;

int main () {
    // Create a structure variable called myStructure


    // Assign values to members of myStructure
    myStructure.myNum = 1;
    myStructure.myString = "Hello World!";

    // Print members of myStructure
    cout << myStructure.myNum << "\n";
    cout << myStructure.myString << "\n";
    return 0;
}