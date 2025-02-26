#include<iostream>
#include<cstring>
using namespace std;
class student {
   int id,m1,m2,m3;
   float avg;
   char name[25];

   public:
   void stu_data(int p,const char* abc,int q,int r,int s){
   id = p;
   strcpy(name,abc);
   m1=q;
   m2=r;
   m3=s;
   cal_avg();
   }
   void cal_avg(){
    avg=(m1+m2+m3)/3.0;
   }
   void display_data(){
    cout<<"your id number is "<<id<<endl;
    cout<<"your name is "<<name<<endl;
    cout<<"your marks of subject 1 is "<<m1<<endl;
    cout<<"your marks of subject 2 is "<<m2<<endl;
    cout<<"your marks of subject 3 is "<<m3<<endl;
    cout<<"your total marks is "<<avg<<endl;
   }
};

  int main(){
    student s[10];

    s[0].stu_data(1,"prince",44,47,45);
    s[1].stu_data(2,"ram",46,35,38);
    s[2].stu_data(3,"shyam",42,38,49);
    s[3].stu_data(4,"krishna",43,40,34);
    s[4].stu_data(5,"lakshman",32,38,28);
    
    for(int i=0;i<5;i++){
      s[i].display_data();
    }
    return 0;
  }