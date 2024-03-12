#include <iostream>

using namespace std;

int main() {
    int numbers[3][2];

    for (int i =0; i < 3; i++) {
        for (int j = 0; j< 2; j++) {
            cin >> numbers[i][j];
        }
    } 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << "numbers[" << i << "][" << j << "] = " << numbers[i][j] << endl;
        } 
    }
}