#include <iostream>

using namespace std;

const int inchConversion = 12;

int feetToInches(int feet) {
    return (feet * inchConversion);
}

int main() {

    int ft_input;

    cout << "Enter Number of Feet: ";
    cin >> ft_input;

    int inches = feetToInches(ft_input);
    cout << ft_input << "ft = " << inches << "in";
}