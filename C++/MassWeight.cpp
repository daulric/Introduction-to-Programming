#include <iostream>

using namespace std;

const double newton = 9.81;

int main () {
    double mass;

    cout << "Enter Mass in Kg: ";
    cin >>  mass;

    
    double conversion = (mass * newton);
    cout << "The Weight in Newton is: " << conversion << endl;

    if (conversion > 1000) {
        cout << "Too Heavy";
    } else if (conversion < 10) {
        cout << "Too Light";
    }

    return 0;
}