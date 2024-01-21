#include <iostream>

using namespace std;

int main() {
    // Variable for Rectangle 1 inputs
    double Width1, Length1;

    // Variable for Rectangle 2 inputs
    double Width2, Length2;

    // Getting inputs //
    // Rectangle 1 Inputs
    cout << "\n=========== Rectangle 1 Inputs ============" << endl;
    cout << "Enter Rectangle 1 Width: ";
    cin >> Width1;

    cout << "Enter Rectangle 1 Height: ";
    cin >> Length1;

    double ReactangleArea1 = (Width1 * Length1); // Calculate
    cout << "Rectangle 1 Area: " << ReactangleArea1 << endl;

    // Rectangle 2 Inputs
    cout << "\n=========== Rectangle 2 Inputs ============" << endl;
    cout << "Enter Rectangle 2 Width: ";
    cin >> Width2;

    cout << "Enter Rectangle 2 Height: ";
    cin >> Length2;

    // Calculations
    double ReactangleArea2 = (Width2 * Length2);
    cout << "Rectangle 2 Area: " << ReactangleArea2 << endl;

    cout << "\n==================" << endl;

    // Checking and Outputing!!
    if (ReactangleArea1 > ReactangleArea2) {
        cout << "Rectangle 1 is greater that rectangle 2";
    } else if (ReactangleArea2 > ReactangleArea1) {
        cout << "Rectangle 2 is greater than Rectangle 1";
    } else {
        cout << "Both Rectangles are the Same Size";
    }

}