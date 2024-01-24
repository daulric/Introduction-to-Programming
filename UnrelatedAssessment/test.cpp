#include <iostream>

using namespace std;

int main() {

    int age;

    cout << "|================|" << endl;
    cout << "| Age Calculator |" << endl;
    cout << "|================|" << endl;

    cout << "Enter Age: ";
    cin >> age;

    if (age >= 20) {
        cout << "You are an Adult" << endl;
    } else if (age < 13) {
        cout << "You are a Child" << endl;
    } else {
        cout << "You are a Teen" << endl;
    }

    return 0;
}