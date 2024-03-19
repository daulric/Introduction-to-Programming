#include <iostream>

using namespace std;

void bubble_sort(int *array, int size) {
    for (int i = 0; i < size; i++ ) {
        for (int j = i+1; j < size; j++) {
            if (array[j] < array[i]) {
                swap(array[i], array[j]);
            }
        }
    }
}

void printArray(int *array, int size) {
    for (int i = 0; i < size; i++) {
        cout << " " << array[i];
    }
}

int main() {
    int array[3] = {
        10, 9, 2
    };

    int array_size = (sizeof(array) / sizeof(*array));

    bubble_sort(array, array_size);
    printArray(array, array_size);
}