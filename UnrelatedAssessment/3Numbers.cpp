#include <iostream>

using namespace std;

int main () {
    int inputs_number[3];

    // Getting Input
    for (int i = 0; i < 3; i++) {
        cout << "Enter Random Number: ";
        cin >> inputs_number[i];
    }


    // Looping for the largest number // AKA Bubble Sort
    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (inputs_number[i] < inputs_number[j]) {
                swap(inputs_number[i], inputs_number[j]);
            }
        }
    }

    // Display Output
    cout << "======== Largest Number ===============" << endl;
    cout << inputs_number[0] << " is the largest number.";
  
    return 0;
}