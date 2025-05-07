#include <iostream>
using namespace std;

int main() {
    double loanAmount, income;

    cout << "Enter total loan amount: ";
    cin >> loanAmount;

    if (cin.fail()) {
        cout << "Invalid input. Please enter numbers only.\n";
        return 1;
    }

    cout << "Enter your annual income: ";
    cin >> income;

    if (cin.fail()) {
        cout << "Invalid input. Please enter numbers only.\n";
        return 1;
    }

    if (income == 0) {
        cout << "Income cannot be zero. Division not allowed.\n";
        return 1;
    }

    double ratio = loanAmount / income;
    cout << "Loan-to-Income Ratio: " << ratio << endl;

    return 0;
}
