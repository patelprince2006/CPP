#include<iostream>
using namespace std;

class acc_management
{ int acc_number;
  int balance;
  char acc_holder_name[50];
  int a;
  public:
  void add_acc_detail()
  {
    cout<<"enter holder name: ";
    cin>>acc_holder_name;
    cout<<"enter your account number: ";
    cin>>acc_number;
    cout<<"enter balance : ";
    cin>>balance;
  }
 
  void diposit_money(int a)
  { 
        balance -= a;
        cout<<"updated balance: "<<balance<<endl;
        cout<<"your transaction is successfully done";
    }

  void withdrawal_money(int b){
 
          balance += b; 
          cout<<"updated balance: "<<balance<<endl;
    }

  void display_acc_detail(){
    int s;
    cout<<"enter a account number :";
    cin>>s;
    if(s==acc_number)
    { cout<<"your name : "<<acc_holder_name<<endl;
      cout<<"your account number : "<<acc_number<<endl;
      cout<<"your balance : "<<balance<<endl;
    }
  }
  int get_acc_num()
  {
    return acc_number;
  }
};

int main()
{
    acc_management a[20];
    int c=0,choice;
   n: cout<<"\n1 -> add account detail"<<endl<<"2 -> money transfer"<<endl<<"3 -> account detail"<<endl;
    cout<<"enter your choice : ";
    cin>>choice;
    switch (choice)
    {
    case 1:
     {   if(c<10)
        {
            a[c].add_acc_detail();
            c++;
            break;
        }
        break;
     }

    case 2:
    {  int y;
      int i;
      int x;
            cout<<"enter a account number: ";
            cin>>x;
        for( i=x-1;i<=c;i++)
        {  
          if(a[i].get_acc_num()==x){
            
            cout<<"enter a amount:";
            cin>>y;
           a[i].diposit_money(y);
           break;
          }
        }
        int r;
        cout<<"enter a account number for withdraw : ";
        cin>>r;
          for(int i=r-1;i<=c;i++){
          
          if(a[i].get_acc_num()==r){
            a[i].withdrawal_money(y);
            break;
           }
        }
        break; 
    }
    
    case 3:
    {  int x;
      cout<<"enter a account number: ";
      cin>>x;
        for(int i=x-1;i<c;i++){
            if(a[i].get_acc_num()==x){
           a[i].display_acc_detail();
           break;
         }
        }
      break;
    }
    default:
       { goto e;
        break;
       }
    }
    goto n;
    e:return 0;
}