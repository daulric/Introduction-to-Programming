#include <iostream>

using namespace std;

int Avg(int num1, int num2, int num3) {
    return ((num1 + num2 + num3) / 3);
}

int main() {
    int num1, num2, num3;

    cout << "Enter Num1: ";
    cin >> num1;


    cout << "Enter Num2: ";
    cin >> num2;

    cout << "Enter Num3: ";
    cin >> num3;
    cout << "Average of " << num1 << ", " << num2 << ", " << num3 << " is " << Avg(num1, num2, num3) << endl;

    return 0;
}