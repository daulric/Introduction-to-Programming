#include <iostream>

using namespace std;

int largeNumber(int n1, int n2, int n3) {
    int largestNumber;

    if (n1 > n2 && n1  >n3) {
        largestNumber = n1;
    } else if (n2 > n1 && n2 > n3) {
        largestNumber = n2;
    } else if (n3 > n1 && n3 > n2) {
        largestNumber = n3;
    }

    return largestNumber;
}

int main() {
    int num1;
    int num2;
    int num3;

    cout << "Enter Number 1: ";
    cin >> num1;

    cout << "Enter Number 2: ";
    cin >> num2;

    cout << "Enter Number 3: ";
    cin >> num3;

    int largestNum = largeNumber(num1, num2, num3);
    cout << "\nLargest Number: " << largestNum;

}