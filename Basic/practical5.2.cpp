#include<iostream>
using namespace std;

class complex{
   int i,r;

   public:
   void insert_data(){
     cout<<"enter a real part:";
     cin>>r;
     cout<<"enter a imagenari part:";
     cin>>i;
    }

   complex operator+(complex &x){
     complex t;
     t.r=r+x.r;
     t.i=i+x.i;

     return t;
    }

   complex operator-(complex &x){
    complex t;
    t.r=r-x.r;
    t.i=i-x.i;

    return t;
    }

    void display(){
      cout<<"ans"<<endl<<r;
      if(i>=0){
        cout<<"+";
      }
      cout<<i<<"i"<<endl;
    }
};

int main(){
  complex c1,c2,c3,c4;
  
  c1.insert_data();
  c2.insert_data();
  c3=c1+c2;
  c4=c1-c2;
  cout<<"first value ";
  c1.display();
  cout<<"second value ";
  c2.display();
  cout<<"adddition ";
  c3.display();
  cout<<"substraction ";
  c4.display();
  return 0;
}