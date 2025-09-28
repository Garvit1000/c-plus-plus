//
// Created by garvit1000 on 9/28/25.
//
#include <iostream>
using namespace std;

int main () {
    string food = "Pizza";
    string &meal = food;
    meal = "Burger";

    cout << food << "\n";
    cout << meal << "\n";
    return 0;
}