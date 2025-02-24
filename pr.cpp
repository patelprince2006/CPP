#include <iostream>
using namespace std;

class Bank_Account {
    char acc_holder_name[50];
    long int Acc_number;
    long int Balance;

public:
    void Add_Account() {
        cout << "Enter Account Holder Name: ";
        cin>> acc_holder_name;
        
        cout << "Enter Account Number: ";
        cin >> Acc_number;
        
        cout << "Enter Initial Account Balance: ";
        cin >> Balance;
    }

    void Deposit_Money() {
        long int x;
        cout << "Enter Your Account Number: ";
        cin >> x;

        if (x == Acc_number) {
            long int y;
            cout << "Enter Deposit Amount: ";
            cin >> y;
            Balance += y;
            cout << "Deposit Successful! New Balance: " << Balance << endl;
        } else {
            cout << "Invalid Account Number!" << endl;
        }
    }

    void Withdraw_Money() {
        long int w;
        cout << "Enter Your Account Number: ";
        cin >> w;

        if (w == Acc_number) {
            long int z;
            cout << "Enter Withdrawal Amount: ";
            cin >> z;

            if (z > Balance) {
                cout << "Insufficient Balance!" << endl;
            } else {
                Balance -= z;
                cout << "Withdrawal Successful! Remaining Balance: " << Balance << endl;
            }
        } else {
            cout << "Invalid Account Number!" << endl;
        }
    }

    void display_Acc_Detail() {
        long int p;
        cout << "Enter Your Account Number: ";
        cin >> p;

        if (p == Acc_number) {
            cout << "Account Number: " << Acc_number << endl;
            cout << "Account Holder Name: " << acc_holder_name << endl;
            cout << "Account Balance: " << Balance << endl;
        } else {
            cout << "Invalid Account Number!" << endl;
        }
    }

    long int getAccountNumber() {
        return Acc_number;
    }
};

int main() {
    Bank_Account b[10];  
    int c = 0;  // Track the number of accounts added
    int choice;

    next:cout << "\n===== BANK MANAGEMENT SYSTEM =====\n";
        cout << "1 -> Add Account\n";
        cout << "2 -> Deposit Money\n";
        cout << "3 -> Withdraw Money\n";
        cout << "4 -> Display Account Details\n";
        cout << "5 -> Exit\n";
        cout << "Enter Your Choice: ";
        
        
        cin >> choice;

        switch (choice) {
            case 1:
                if (c < 10) {
                    b[c].Add_Account();
                   c++;
                } else {
                    cout << "Maximum account limit reached!" << endl;
                }
                break;

            case 2: {
                long int accNum;
                cout << "Enter Account Number: ";
                cin >> accNum;

                
                for (int i = 0; i < c; i++) {
                    if (b[i].getAccountNumber() == accNum) {
                        b[i].Deposit_Money();
                        
                        break;
                    }
                }
              
                break;
            }

            case 3: {
                long int accNum;
                cout << "Enter Account Number: ";
                cin >> accNum;

              
                for (int i = 0; i < c; i++) {
                    if (b[i].getAccountNumber() == accNum) {
                        b[i].Withdraw_Money();
                       
                        break;
                    }
                }
              
                break;
            }

            case 4: {
                long int accNum;
                cout << "Enter Account Number: ";
                cin >> accNum;

            
                for (int i = 0; i < c; i++) {
                    if (b[i].getAccountNumber() == accNum) {
                        b[i].display_Acc_Detail();
                       
                        break;
                    }
                }
               
                break;
            }

            case 5:
                cout << "Exiting Program. Thank you!" << endl;
                return 0;

            default:
                cout << "Invalid Choice! Please try again." << endl;
                goto e;
                break;
        }
        goto next;
      e:return 0;
    }

