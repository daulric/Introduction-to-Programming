#include <iostream>
#include <cmath>

using namespace std;

void greet() {
    cout << "Hello World" << endl;
}

void printNum(int num) {
    cout << num << endl;
}

void displayNum(int n1, float n2) {
    cout << "Int Num: " << n1 << endl;
    cout << "Double Num: " << n2 << endl;
}

int add(int a, int b) {
    return (a + b);
}

void hello(string message);

void prime() {
    int num, i, flag = 0;

    cout << "Enter Positive Number: ";
    cin >> num;

    for (i = 2; i<= num/2; i++) {
        if ((num % i) == 0) {
            flag = 1;
            break;
        }
    }

    if (flag == 1) {
        cout << num << " is not a prime number";
    } else {
        cout << num << " is a prime number";
    }


}

int main() {
    greet();
    printNum(10);
    displayNum(15, 14.101);
    cout << "Addition: " << add(10, 18) << endl;
    hello("hello there");
    cout << sqrt(9) << endl;
    prime();
    return 0;
}

void hello(string message) {
    cout << message << endl;
}