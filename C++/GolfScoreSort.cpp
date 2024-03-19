// Learning how to sort an array
#include <iostream>
#include <algorithm>

using namespace std;

// Bubble Sort Function
void bubbleSort(int *array, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = i+1; j < size; j++) {
            if (array[i] > array[j]) {
                swap(array[i], array[j]);
            }
        }
    }
}

int main() {

    int scores[10];
    int temp;

    int sizeArray = (sizeof(scores) / sizeof(*scores)); // This is how you get the length of the array

    // Enter the Scores!
    for (int i = 0; i < sizeArray; i++) {
        cout << "Enter Score " << i+1 << ": ";
        cin >> scores[i];
    }

    // Sorting the Array in ascending order
    bubbleSort(scores, sizeArray);

    cout << "=========== Ascending Order ============" << endl;

    // Displaying Sorted Outputs
    for (int i = 0; i < sizeArray; i++) {
        cout << i+1 << ": " << scores[i] << endl;
    }

    cout << "========================================" << endl;

    return 0;
}