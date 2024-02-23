#include <iostream>

using namespace std;

int main() {
    int num, sum;

    cout << "Enter a positive integer: ";
    cin >> num;

    for (int i = 1; i<= num; i++) {
        sum +=  i;
    }

    cout << "\nThe sum is " << sum << endl;
}