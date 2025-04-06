#include <iostream>
using namespace std;

class BankAccount {
protected:
    int acc_Num;
    double balance;

public:
    BankAccount(int acc_No, double Balance) {
        acc_Num = acc_No;
        balance = Balance;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "after deposite amount:" << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Invalid amount."<<endl;
            return;
        }
        balance -= amount;
        cout << "after withdrawal amount:" << balance << endl;
    }

    void display() {
        cout << "Account number:" << acc_Num << " Balance:" << balance << endl;
    }

    double get_Balance() { return balance; }
    void set_Balance(double b) { balance = b; }
};

class SavingsAccount : public BankAccount {
private:
    double interest_Rate;

public:
    SavingsAccount(int acc_No, double Balance, double rate)
        : BankAccount(acc_No, Balance) {
            interest_Rate=rate;
        }

    void apply_Interest() {
        double interest = get_Balance() * interest_Rate / 100.0;
        deposit(interest);
        cout << "Interest applied: " << interest << endl;
    }

    void display() {
        cout << "Account number:" << acc_Num << " Balance:" << balance << endl;
        cout << "Interest Rate: " << interest_Rate << "%"<<endl;
    }
};

class CurrentAccount : public BankAccount {
private:
    double overdraftLimit;

public:
    CurrentAccount(int acc_No, double Balance, double limit)
        : BankAccount(acc_No, Balance) {
            overdraftLimit=limit;
        }

    void withdraw(double amount) {
        if (amount > get_Balance() + overdraftLimit) {
            cout << "Invalid overdraft limit."<<endl;
            return;
        }
        set_Balance(get_Balance() - amount);
        cout << "after withdrawal amount:" << get_Balance() << endl;
    }

    void display() {
        cout << "Account number:" << acc_Num << " Balance:" << balance << endl;
        cout << "Overdraft Limit:" << overdraftLimit << endl;
    }
};

int main() {
    int acc_Type;
    int acc_No;
    double Bal;

    cout << "Choose account type (1 = Savings, 2 = Current): ";
    cin >> acc_Type;
    cout << "Enter Account Number: ";
    cin >> acc_No;
    cout << "Enter Initial Balance: ";
    cin >> Bal;

    int choice;

    if (acc_Type == 1) {
        double rate;
        cout << "Enter Interest Rate: ";
        cin >> rate;
        SavingsAccount sa(acc_No, Bal, rate);

    savings:
        cout << "\n1. Deposit\n2. Withdraw\n3. Apply Interest\n4. Display\n5. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Amount to deposit: ";
                cin >> amount;
                sa.deposit(amount);
                goto savings;
            case 2:
                cout << "Amount to withdraw: ";
                cin >> amount;
                sa.withdraw(amount);
                goto savings;
            case 3:
                sa.apply_Interest();
                goto savings;
            case 4:
                sa.display();
                goto savings;
            case 5:
                cout << "Exiting."<<endl;
                break;
            default:
                cout << "Invalid option."<<endl;
                goto savings;
        }

    } else if (acc_Type == 2) {
        double limit;
        cout << "Enter Overdraft Limit: ";
        cin >> limit;
        CurrentAccount ca(acc_No, Bal, limit);

    current:
        cout << "\n1. Deposit\n2. Withdraw\n3. Display\n4. Exit"<<endl;
        cout << "Enter choice: ";
        cin >> choice;

        double amount;
        switch (choice) {
            case 1:
                cout << "Amount to deposit: ";
                cin >> amount;
                ca.deposit(amount);
                goto current;
            case 2:
                cout << "Amount to withdraw: ";
                cin >> amount;
                ca.withdraw(amount);
                goto current;
            case 3:
                ca.display();
                goto current;
            case 4:
                cout << "Exiting."<<endl;
                break;
            default:
                cout << "Invalid option."<<endl;
                goto current;
        }

    } else {
        cout << "Invalid account type."<<endl;
    }

    return 0;
}
