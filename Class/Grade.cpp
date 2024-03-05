#include <iostream>

using namespace std;

int main() {
    double numbers[5];
    double sum = 0;
    double count = 0;
    double average;

    for (int i=0; i < 5; i++) {
        cout << "Enter a Number: ";
        cin >> numbers[i];
    }

    cout << "Numbers are: ";
    for (int i=0; i < 5; i++) {
        cout << numbers[i] <<  " ";
    }

    for (const double &i : numbers) {
        sum += i;
        count++;
    }

    cout << "The Sum is: " << sum << endl;
    average = (sum / count);
    cout << "The Average is: " << average << endl;

}