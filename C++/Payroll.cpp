#include <iostream>

using namespace  std;

bool checkPayRange(double input) {
   return (input >= 7.50 && input <= 18.25 );
}

bool checkHourlyRange(double input) {
    return (input > 0 && input <= 40);
}

int main() {
    double hourly_worked;
    double pay_rate;

    cout << "Enter Pay Rate: ";
    cin >> pay_rate;

    cout << "Enter Hours Worked: ";
    cin >> hourly_worked;

    bool check_pay = checkPayRange(pay_rate);
    bool check_hourly = checkHourlyRange(hourly_worked);

    if (!check_pay) {
        cerr << "The Pay Range supposed to be between $7.50 and $18.25" << endl;
        return 1;
    }

    if (!check_hourly) {
        cerr << "The Hourly Range suppose to be between 0 - 40 hours" << endl;
        return 1;
    }

    double gross_pay = (hourly_worked * pay_rate);
    cout << "Gross Pay: $" << gross_pay;

    return 0;
}