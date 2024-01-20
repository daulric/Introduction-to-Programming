#include <iostream>
using namespace std;

const double Pi = 3.14159265;

double Circle_Area(double radius) {
    return Pi * (radius * radius);
}

int main() {
    double radius;
    cout << "Enter Radius: ";
    cin >> radius;

    double area = Circle_Area(radius);
    cout << "Area: " << area << endl;

    return 0;
}