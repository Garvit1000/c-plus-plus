//
// Created by garvit1000 on 9/27/25.
//
#include <iostream>
using namespace std;

int main() {
    int num[8]={20, 22, 18, 35, 48, 26, 34, 104};

    int highestnum = num[0];

    for (int i:num) {
        if (highestnum < i)
            highestnum = i;
    }
    cout<<"the highest number in the array is :"<<highestnum;

 //   Loop Through a Multi-Dimensional Array
    // string letters[2][4] = {
    //     { "A", "B", "C", "D" },
    //     { "E", "F", "G", "H" }
    // };
    //
    // for (int i = 0; i < 2; i++) {
    //     for (int j = 0; j < 4; j++) {
    //         cout << letters[i][j] << "\n";
    //     }
    // }
    return 0;
}