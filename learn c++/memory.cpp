
// Created by garvit1000 on 9/28/25.
//

// use of new and delete keyword
#include <iostream>
using namespace std;

 int main() {
    int Guests;
    cout << "How many guests? ";
    cin >> Guests;

    if (Guests <= 0) {
        cout << "Number of guests must be at least 1.\n";
        return 0;
    }

    // Create memory space for x guests (an array of strings)
    string* guests = new string[Guests];

    // Ignore the leftover newline character after reading Guests
    cin.ignore();

    // Enter guest names
    for (int i = 0; i < Guests; i++) {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]); // Read the full name (including spaces)
    }

    // Show all guests
    cout << "\nGuests checked in:\n";
    for (int i = 0; i < Guests; i++) {
        cout <<i<<" "<< guests[i] << "\n";
    }

    delete[] guests;
    return 0;
}