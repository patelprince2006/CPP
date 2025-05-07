#include <iostream>
using namespace std;

int main() {
    string name;
    double balance = 0, amount;
    string transactions[100];
    int count = 0;
    int choice;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter initial balance: ";
    cin >> balance;

    transactions[count++] = "Account created with balance: " + to_string(balance);

    do {
        cout << "\nMenu:\n";
        cout << "1. Deposit\n2. Withdraw\n3. Show Balance\n4. Show Transactions\n5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter deposit amount: ";
                cin >> amount;
                if (amount <= 0) {
                    cout << "Invalid deposit amount.\n";
                } else {
                    balance += amount;
                    cout << "Deposited: " << amount << endl;
                    transactions[count++] = "Deposited: " + to_string(amount);
                }
                break;

            case 2:
                cout << "Enter withdrawal amount: ";
                cin >> amount;
                if (amount <= 0 || amount > balance) {
                    cout << "Invalid or insufficient funds.\n";
                } else {
                    balance -= amount;
                    cout << "Withdrew: " << amount << endl;
                    transactions[count++] = "Withdrew: " + to_string(amount);
                }
                break;

            case 3:
                cout << "Current Balance: " << balance << endl;
                break;

            case 4:
                cout << "\nTransaction History:\n";
                for (int i = 0; i < count; i++) {
                    cout << transactions[i] << endl;
                }
                break;

            case 5:
                cout << "Exit.\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 5);

    return 0;
}
