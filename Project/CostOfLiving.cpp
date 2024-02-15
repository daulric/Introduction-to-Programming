#include <iostream>

using namespace std;

double GovTaxOwed(double pay_check) {
    double TaxRate3000 = 0;
    double TaxRate5000 = 0;

    // 10% Tax and NIS Deduction
    if (pay_check > 3000) {
        if (pay_check > 5000) { // Check to see if the amount is more than $5000 to tax the money in between $3000 and $5000
            double MaxOnTaxRate = (5000 - 3000); // Max Tax Bracket for 10% Taxation
            TaxRate3000 = (MaxOnTaxRate * 0.10);
        } else {
            TaxRate3000 = (pay_check - 3000) * 0.10;
        }
    }

    // Tax the User if the paycheck is more than $5000
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
        NIS_Deduction = 5000 * NIS_Insure_Rate; // this is because NIS only tax up to $5000!
    } else {
        NIS_Deduction = pay_check * NIS_Insure_Rate; // Gets the Insurance Paid for NIS from the salary!
    }

    return NIS_Deduction;
}

double SurvivalCost(double pay_check) {
    double groceries_cost, gas_cost, rent;

    cout << "Enter Groceries Cost: $";
    cin >> groceries_cost;
    cout << "Enter Gas Cost: $";
    cin >> gas_cost;
    cout << "Enter Rent: $";
    cin >> rent;

    double additional_cost = (groceries_cost + gas_cost + rent);
    return additional_cost;
}

int main() {
    double pay_check;

    cout << "Enter Your Monthly Paycheck: $";
    cin >> pay_check;

    double Survival_Cost = SurvivalCost(pay_check);
    double Gov_Tax = GovTaxOwed(pay_check);
    double NIS = NIS_Insurance(pay_check);

    double Total_Tax = NIS + Gov_Tax;

    double MoneySpent = (Total_Tax + Survival_Cost);
    double TakeHome = (pay_check - MoneySpent);

    cout << "\n-------- Calculation --------------" << endl;
    cout << "Pay Check: $" << pay_check << endl;

    cout << " ----- Tax -----" << endl;
    cout << "NIS Insurance: $" << NIS << endl;
    cout << "Government Tax: $" << Gov_Tax << endl;
    cout << "Total Tax Paid: $" << Total_Tax << endl;
    cout << "----------------" << endl;

    cout << "Total In Tax and Survival: $" << MoneySpent << endl;
    cout <<  "Take Home Amount: $" << TakeHome << endl;
    cout << "-----------------------------------" << endl;

    return 0;
}