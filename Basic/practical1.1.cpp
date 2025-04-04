
#include<iostream>
using namespace std;

class Bank_Account{
  char name[25];
  int account_number,balance;
  static int account_counter;
  public:
  Bank_Account(){
    account_number= ++account_counter;
  }
  void account_detail(){
    cout<<"Enter name:";
    cin>>name;
    cout<<"Enter a balance";
    cin>>balance;

  }
  void add_money(){
      int x;
  cout<<"Enter a account number";
  cin>>x;
    if(x==account_number){
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
      if(z==account_number){
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
int Bank_Account ::account_counter=100;

int main(){
 Bank_Account  b[2];
 for(int i=0;i<2;i++){
    b[i].account_detail();
 }
 for(int i=0;i<2;i++){
   b[i].add_money();
 }
 for(int i=0;i<2;i++){
   b[i].withdraving_money();
   b[i].display_data();
 }
 return 0;
 }
