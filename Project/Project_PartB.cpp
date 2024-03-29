#include <iostream>

using namespace std;

double GovTaxOwed(double pay_check) {
    double TaxRate3000 = 0;
    double TaxRate5000 = 0;

    // 10% Tax
    if (pay_check > 3000) {
        if (pay_check > 5000) { // Check to see if the amount is more than $5000 to tax the money in between $3000 and $5000
            double MaxOnTaxRate = (5000 - 3000); // Max Tax Bracket for 10% Taxation
            TaxRate3000 = (MaxOnTaxRate * 0.10);
        } else {
            TaxRate3000 = (pay_check - 3000) * 0.10;
        }
    }

    // Tax the User 28%, if the paycheck is more than $5000
    if (pay_check > 5000) {
        TaxRate5000 = (pay_check - 5000) * 0.28;
    } 

    double Gov_Tax = (TaxRate3000 + TaxRate5000);
    return Gov_Tax;
}

double NIS_Insurance(double pay_check) {
    double NIS_Insure_Rate = 0.055;
    double NIS_Deduction = 0;

      // NIS Insurance
    if (pay_check > 5000) {
        NIS_Deduction = 5000 * NIS_Insure_Rate; // NIS Insurance can only tax up to $5,000.
    } else {
        NIS_Deduction = pay_check * NIS_Insure_Rate; // Takes 5.5% Tax from the User's Salary.
    }

    return NIS_Deduction;
}

double OtherExpenses(double pay_check) {
    // This is the cost if you have to pay for cost of living!
    double groceries_cost, gas_cost, rent, loan_payment, light_bill, water_bill, internet_bill;

    cout << "Enter Groceries Cost: $";
    cin >> groceries_cost;
    cout << "Enter Gas Cost: $";
    cin >> gas_cost;
    cout << "Enter Rent: $";
    cin >> rent;
    cout << "Enter Loan Payment: $";
    cin >> loan_payment;
    cout << "Enter Light Bill: $";
    cin >> light_bill;
    cout << "Enter Water Bill: $";
    cin >> water_bill;
    cout << "Enter Internet Bill: $";
    cin >> internet_bill;

    double additional_cost = (groceries_cost + gas_cost + rent + loan_payment + water_bill + light_bill + internet_bill);
    return additional_cost;
}

int main() {
    double pay_check;

    cout << "Enter Your Monthly Paycheck: $";
    cin >> pay_check;

    double Expenses = OtherExpenses(pay_check);
    double Gov_Tax = GovTaxOwed(pay_check); // Government Tax
    double NIS = NIS_Insurance(pay_check); // NIS Insurance Tax

    double Total_Tax = NIS + Gov_Tax; // Total Tax

    double MoneySpent = (Total_Tax + Expenses); // Money Spent on Tax and Basic Nessessity
    double TakeHome = (pay_check - MoneySpent); // Take Home Money

    // Display or Output the Information
    cout << "\n-------- Pay Check --------------" << endl;
    cout << "Pay Check: $" << pay_check << endl << endl;

    cout << " ------------ Tax Paid -------------" << endl;
    cout << "NIS Insurance: $" << NIS << endl;
    cout << "Government Tax: $" << Gov_Tax << endl;
    cout << "Total Tax Paid: $" << Total_Tax << endl << endl;

    cout << "--------- Other Expenses ----------" << endl;
    cout << "Basic Nessessity Expenses: $" << Expenses << endl;
    cout << "Total Expenses: $" << MoneySpent << endl;
    cout <<  "Take Home Amount: $" << TakeHome << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}