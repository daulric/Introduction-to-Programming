#include <iostream>
#include <cmath>

using namespace std;

int sqNum(int num) {
    return pow(num, 2);
}

int main() {
    // Square a Number
    int sqNumber;

    cout << "Enter a Number to Square: ";
    cin >> sqNumber;
    cout << "The Square of " << sqNumber << " is " << sqNum(sqNumber) << endl;
}