// Learning how to sort an array
#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int scores[10];
    int temp;

    // Enter the Scores!
    for (int i = 0; i < 10; i++) {
        cout << "Enter Score " << i+1 << ": ";
        cin >> scores[i];
    }

    // Sorting the Array in ascending order
    for (int i = 0; i < 10; i++) {
        for (int j = i+1; j < 10; j++) {
            if (scores[i] > scores[j]) {
                swap(scores[i], scores[j]); // Swapped scores[i] with sccores[j]
            }
        }
    }

    cout << "============================" << endl;

    // Displaying Sorted Outputs
    for (int i = 0; i < 10; i++) {
        cout << i+1 << ": " << scores[i] << endl;
    }

    return 0;
}