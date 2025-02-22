#include<iostream>
#include<string.h>
using namespace std;
class student {
   int id,m1,m2,m3;
   float avg;
   char name[25];

   public:
   void stu_data(int p,char abc[25],int q,int r,int s){
   id = p;
   strcpy(name,abc);
   m1=q;
   m2=r;
   m3=s;
   cal_avg();
   }
   void cal_avg(){
    avg=(m1+m2+m3)/3;
   }
};

  int main(){
    student s[10];
    
  }