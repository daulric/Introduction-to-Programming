#include <iostream>

using namespace std;

int main() {
    string Name, Address, College_Major;
    int phone_number;

    cout << "Enter Your Name: ";
    getline(cin, Name);

    cout << "Enter College Major: ";
    getline(cin, College_Major);

    cout << "Enter Address: ";
    getline(cin, Address);

    cout << "Enter Your Phone Number: ";
    cin >> phone_number;

    // Displaying Information
    cout << "\n\n|========================================|" << endl;
    cout << "|          Personal Information          |" << endl;
    cout << "|========================================|" << endl;
    cout << "Name: " << Name << "\nCollege Major: " << College_Major << endl;
    cout << "Phone Number: " << phone_number << "\nAddress: " << Address << endl;

    return 0;

}   