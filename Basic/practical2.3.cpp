#include <iostream>
using namespace std;

class Bank_Account{
  char acc_holder_name[25];
  int Acc_number;
  int Balance;

  public:
  void Add_Account(){
    cout<<"Account holder name: ";
    cin >> acc_holder_name;
    cout<<"Accunt number: ";
    cin>>Acc_number;
    cout<<"acccount balance: ";
    cin>>Balance;
     }
  void Deposit_Money(){
    int x;
    cout<<"enter your account number: ";
    cin>>x;
    if(x==Acc_number){
        int y;
        cout<<"enter your deposit ammount: ";
        cin>>y;
        Balance+=y;
    }
    else{ cout<<"invalid account number"; }
  }
  void Withdraw_Money(){
    int w;
    cout<<"enter your account number: ";
    cin>>w;
    if(w==Acc_number){
        int z;
        cout<<"enter your  Withdrawing amount: ";
        cin>>z;
        Balance-=z;
    }
  }
  void display_Acc_Detail(){
    int p;
    cout<<"enter your account number: ";
    cin>>p;
    if(p==Acc_number){
    cout<<"your account number: "<<Acc_number<<endl;
    cout<<"your account holder name: "<<acc_holder_name<<endl;
    cout<<"your account balance: "<<Balance<<endl;
  }
}
int get_acc_num(){
  return Acc_number;
}
};


int main(){
    Bank_Account b[10];
    cout<<"1 -> add account "<<endl<<"2 - > deposite money"<<endl<<"3 -> withrawaal money"<<endl<<"4 -> display detail\n";
    int choice,c=0;
    n:cout<<"\n\nenter your choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
            if(c<10){
            b[c].Add_Account();
            c++;
        break;
      }
      break;
    case 2:
    {
    int accNum;
    cout << "Enter Account Number: ";
    cin >> accNum;

    
    for (int i = 0; i < c; i++) {
        if (b[i].get_acc_num() == accNum) {
         
            b[i].Deposit_Money();
            break;
        }
      }
        break;
    }
    case 3:
    { int accNum;
    cout << "Enter Account Number: ";
    cin >> accNum;

    
    for (int i = 0; i < c; i++) {
        if (b[i].get_acc_num() == accNum) {
            b[i].Withdraw_Money();
            break;
        }
      }
        break;
    }
    case 4:
    { int accNum;
    cout << "Enter Account Number: ";
    cin >> accNum;

    
    for (int i = 0; i < c; i++) {
        if (b[i].get_acc_num() == accNum) {
            b[i].display_Acc_Detail();
            break;
        }
      }
        break;        
    }
    default:
       goto e;
        break;
    }
    goto n;
    e:return 0;
  }