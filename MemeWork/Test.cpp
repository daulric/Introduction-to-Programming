#include <iostream>

using namespace std;

int main() {

    int n = 10;

    while (n > 0) {
        cout << n << endl;
        --n;
    }

    string str;
    do {
        cout << "Enter Text: ";
        cin >> str;
    } while (str != "bye");

    for (int i = 10; i > 0; i--) {
        cout << i << endl;
    }

    return 0;
}