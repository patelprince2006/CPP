#include <iostream>
#include<math.h>
using namespace std;

class Loan_management{
  char app_name[25];
  int loan_id;
  int total_loan_amount;
  float Interest_rate,Emi;
  int time;

  void Cal_Emi(){
     Emi = (total_loan_amount*Interest_rate*pow(1+Interest_rate,time))/(pow(1+Interest_rate,time)-1);
     Emi=Emi/100;
     cout<<"your emi is "<<Emi;
  }

  public:
  void Add_Account(){
    cout<<"your name : ";
    cin >> app_name;
    cout<<"your Accunt id : ";
    cin>>loan_id;
    cout<<"your total loan amount : ";
    cin>>total_loan_amount;
    cout<<"Interest rate :";
    cin>>Interest_rate;
    cout<<"loan time in month :";
    cin>>time;
     }

    void Display_Acc_Detail(){
      cout<<"your name is "<<app_name<<endl;
      cout<<"your Accunt id is "<<loan_id<<endl;
      cout<<"your total loan amount is "<<total_loan_amount<<endl;
      cout<<"Interest rate is "<<Interest_rate<<endl;
      cout<<"loan time in month is "<<time<<endl;
      Cal_Emi();
    }

int get_id(){
  return loan_id;
}
};


int main(){
   Loan_management l[10];
   int choice,c=0;
  n:cout<<"\n1 -> add account "<<endl<<"2 -> display account detail\n";
    cout<<"enter your choice:";
    cin>>choice;
    switch (choice)
    {
    case 1:
            if(c<10){
            l[c].Add_Account();
            c++;
        break;
      }
      break;
    case 2:
    {
    int id;
    cout << "Enter loan id : ";
    cin >> id;

    
    for (int i = 0; i < c; i++) {
        if (l[i].get_id() == id) {
         
            l[i].Display_Acc_Detail();
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