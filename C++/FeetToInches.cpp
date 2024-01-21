#include <iostream>

using namespace std;

const double inchConversion = 12;

double feetToInches(double feet) {
    return (feet * inchConversion);
}

int main() {

    double ft_input;

    cout << "Enter Number of Feet: ";
    cin >> ft_input;

    double inches = feetToInches(ft_input);
    cout << ft_input << "ft = " << inches << "in";
}