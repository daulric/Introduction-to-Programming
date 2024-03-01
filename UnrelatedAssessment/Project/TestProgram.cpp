#include <iostream>
#include <cmath>

using namespace std;

int Sum(int num1, int num2, int num3) {
    return (num1 + num2 + num3);
}

int main() {

    // Sum of 3 Numbers
    int num1, num2, num3;

    cout << "Enter Num1: ";
    cin >> num1;

    cout << "Enter Num2: ";
    cin >> num2;

    cout << "Enter Num3: ";
    cin >> num3;

    cout << "This Sum is " << Sum(num1, num2, num3) << endl;
    return 0;
}