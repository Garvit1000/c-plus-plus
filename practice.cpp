//
// Created by garvit1000 on 9/18/25.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    //Concatenation

    // const string firstName = "John ";
    // const string lastName = "Doe";
    // const string fullName = firstName + lastName;
    // cout << fullName;

    //Append
    string firstName = "John ";
    string lastName = "isBack";
    string fullName = firstName.append(lastName);
    cout << fullName <<endl;

    string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    cout << "The length of the txt string is: " << txt.length()<<endl;

    string myString = "Hello";
    cout << myString<<endl; // Outputs Hello

    cout << myString.at(0)<<endl;  // First character
    cout << myString.at(1)<<endl;  // Second character
    cout << myString.at(myString.length() - 1)<<endl;  // Last character

    myString.at(0) = 'J';
    cout << myString;  // Outputs Jello
    return 0;
}
