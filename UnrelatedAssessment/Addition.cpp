#include <iostream>

using namespace std;

int main() {
    // Getting Inputs
    int a, b, c, d;

    cout << "Enter Value A: ";
    cin >> a;

    cout << "Enter Value B: ";
    cin >> b;

    cout << "Enter Value C: ";
    cin >> c;

    cout << "Enter Value D: ";
    cin >> d;

    // Calculating Values
    int num1, num2;

    num1 = (a + b);
    num2 = (c + d);

    // Statements
    if (num1 > num2) {
        cout << num1 << " is the largest number";
    } else {
        cout << num2 << " is the largest number";
    }

}