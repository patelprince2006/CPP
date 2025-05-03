#include<iostream>
using namespace std;

class Point{
   int x,y;

   public:
   void insert_data(){
    cout<<"enter a x:";
    cin>>x;
    cout<<"enter a y:";
    cin>>y;
   }

   void operator-(){
     x = -x;
     y = -y;
     cout<<"point 2 :"<<x;
     cout<<y<<endl;
   }

   Point operator+(Point &p){
      Point t;
      t.x=x+p.x;
      t.y=y+p.y;
      return t;
   }

   void display(){
    cout<<x<<" , "<<y<<endl;
   }

   bool operator==(Point k){
    if(x==k.x && y==k.y){
      return true;
    }
    else{
      return false;
    }
   }
};

int main(){
  Point p1,p2,p3;

  p1.insert_data();
p2.insert_data();
  -p2;
  p3=p1+p2;
  p3.display();
  p1=p2;
  
}