
// Created by garvit1000 on 9/27/25.
//
#include <iostream>
using namespace std;


int main(){
// An array storing different ages
int ages[8] = {20, 22, 18, 35, 48, 26, 87, 70};

// Create a variable and assign the first array element of ages to it
int lowestAge = ages[0];

// Loop through the elements of the ages array to find the lowest age
for (const int age : ages) {
    if (lowestAge > age) {
        lowestAge = age;
    }
}

// Print the lowest age
cout << "The lowest age is: " << lowestAge << "\n";

return 0;
}