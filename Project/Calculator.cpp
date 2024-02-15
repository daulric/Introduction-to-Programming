#include <iostream>

using namespace std;


int main() {
    float num1, num2;

    char operand;

    cout << "Enter Operator // +, -, *, /" << endl;
    cin >> operand;

    cout << "Enter 2 Numbers: ";
    cin >> num1 >> num2;

    switch (operand) {
        case '+':
            cout << num1 << " + " << num2 << " = " << (num1 + num2);
            break;
        
        case '-':
            cout << num1 << " - " << num2 << " = " << (num1 - num2);
            break;
        
        case '*':
            cout << num1 << " x " << num2 << " = " << (num1 * num2);
            break;
        
        case '/':
            cout << num1 << " / " << num2 << " = " << (num1 / num2);
            break;
    
        default:
            cout << "Invalid Operator!!!";
            break;
    }

}