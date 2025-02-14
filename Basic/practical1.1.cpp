// A bank wants to create a simple system to manage customer bank accounts. The system should
// allow customers to perform basic banking operations such as depositing money, withdrawing
// money, and checking their account balance.
// Each bank account will need to have an account holder's name, a unique account number, and
// a balance. Deposits should increase the account balance, while withdrawals should only be
// allowed if there are sufficient funds in the account. If an attempt is made to withdraw more
// money than is available, an error message should be displayed. Customers should also have the
// ability to view their account balance whenever required.
// The system must be designed using Object-Oriented Programming principles, focusing on
// creating a simple and efficient solution to manage the accounts effectively. The system should
// ensure that all account details are secure and accessible only through authorized methods.

#include<iostream>
using namespace std;

class Bank_Account{
  char name[25];
  int account_number=100,balance;
  public:
  void account_detail(){
    cout<<"Enter name:";
    cin>>name;
    account_number++;
    cout<<"Enter a balance";
    cin>>balance;

  }
  void add_money(){
      int x;
  cout<<"Enter a account number";
  cin>>x;
    if(x=account_number){
            int y;
        cout<<"enter a add balance";
        cin>>y;
       balance+=y;
    }
    else{
        cout<<"invalid account number";
    }
  }

  void withdraving_money(){
       int z;
  cout<<"Enter a account number";
  cin>>z;
      if(z=account_number){
        if(balance!=0){
            int a;
            cout<<"Enter amount";
            cin>>a;
            balance-=a;
        }
        else{ cout<<"not a balance"; }
      }}
void display_data(){
    cout<<name<<endl<<account_number<<endl<<balance;
}

};

int main(){
 Bank_Account  b[10];
 for(int i=0;i<10;i++){
    b[i].account_detail();
 }
 for(int i=0;i<10;i++){
   b[i].add_money();
 }
 for(int i=0;i<10;i++){
   b[i].withdraving_money();
   b[i].display_data();
 }
 return 0;
 }
