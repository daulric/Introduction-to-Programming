// Classmate Program

/*
    I found this to be wrong!
*/
#include <iostream>

using namespace std;

int main () {
    int Num1;
    cout << "Enter 1st Number: ";
    cin >> Num1;

    int Num2;
    cout << "Enter 2nd Number: ";
    cin >> Num2;

    int Num3;
    cout << "Enter 3rd Number: ";
    cin >> Num3;

    if (Num1 > (Num2 > Num3)) {
        cout << Num1 << " is the largest number.";
    } else if (Num2 > Num3) {
        cout << Num2 << " is the largest number.";
    } else if (Num3 > Num1) {
        cout << Num3 << " is the largest number.";
    }

}