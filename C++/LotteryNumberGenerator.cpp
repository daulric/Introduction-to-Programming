#include <iostream>

using namespace std;

int main() {

    int LottoNumbers[7];

    // Randomizing Number into Array
    for (int i = 0; i < 7; i++) {
        LottoNumbers[i] = rand() % 10; // We did this get random number below 10
    }

    cout << "========== Lottery Numbers ===========" << endl;
    // Displaying the Numbers
    for (int i = 0; i < 7; i++) {
        cout << LottoNumbers[i] << endl;
    }

    return 0;
}