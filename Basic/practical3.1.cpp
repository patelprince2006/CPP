#include<iostream>
using namespace std;

class  employe{
   char name[50];
   static int emp_id;
   int basic_salary,id;
   int bonus_salary;
   int total_salary=0;
   
   public:
   employe(){
    id=++emp_id;
    basic_salary=0;
    bonus_salary=0;
  }
   void add_employe_detail(){
    cout<<"enter a name:";
    cin>>name;
    cout<<"enter a basic salary: ";
    cin>>basic_salary;
    cout<<"enter a bonus salary:";
    cin>>bonus_salary;
   }

   void diaplay_emp_detail(){
    cout<<"employe name: "<<name<<endl;
    cout<<"employe id: "<<id<<endl;
    cout<<"employe basic salary:"<<basic_salary<<endl;
    cout<<"employe bonus salary:"<<bonus_salary<<endl;
    cal_salary();
   }
   void cal_salary(){
    total_salary=bonus_salary+basic_salary;
    cout<<"employe total salary:"<<total_salary<<endl;
   }
   int get_id(){
      return id;
   }
};

  int employe:: emp_id=0;

int main(){
    employe e[20];
    int choice,c=0;
    n:cout<<"\n1-> add emplyoe detail"<<endl<<"2 -> display employe detail"<<endl;
    cout<<"enter  a choice:";
    cin>>choice;
    switch(choice){
      case 1:
      {
      if(c<20){
       e[c].add_employe_detail();
       c++;
       break;
      }
      break;
    }
    case 2:
    { int x;
      cout<<"enter a id:";
      cin>>x;
      for(int i=0;i<c;i++){
        if(e[i].get_id()==x){
        e[i].diaplay_emp_detail();
        break;
      }}
      break;
    }
    default:
    {  goto p;
       break;
    }
    }
    goto n;
    p:return 0;
}