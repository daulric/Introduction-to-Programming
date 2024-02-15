#include <iostream>

using namespace std;

void PiggyCounter() {
    int quarters, dimes, nickles, pennies;

    cout << "Enter Number of Quarters: ";
    cin >> quarters;

    cout << "Enter Number of Dimes: ";
    cin >> dimes;

    cout << "Enter Number of Nickles: ";
    cin >> nickles;

    cout << "Enter Number of Pennies: ";
    cin >> pennies;

    int total_cents = (quarters * 25) + (dimes * 10) + (nickles * 5) + pennies;

    int dollars = total_cents / 100; // This converts the pennies to dollars
    int cents = total_cents % 100;

    cout << "You Have $" << dollars << " and " << cents << " cents" << endl;
}

int main() {
    PiggyCounter();
    return 0;
}