#include<iostream>
using namespace std;

class calculator{
  int z;
  float e;
  public:
  int add(int x,int y){
    z=x+y;
    return z; 
  }
  float add(float p,float q){
    e=p+q;
    return e;
  }
};

int main(){
  calculator c[10];
  int p[10],i=0;
  float q[10];
 n: cout<<"1 -> int data"<<endl<<"2 -> floating data"<<"3 -> display data"<<endl;
 int choice;
  cout<<"enter a choice:";
  cin>>choice;
  switch(choice){
  case 1:
  {
   while(i<10){
    int a,b;
    cout<<"enter a and b:";
    cin>>a>>b;
    // c[i].add(a,b);
    p[i]=c[i].add(a,b);
    i++;
    break;
   }
   break;
  }
  case 2:{
    while(i<10){
     float k,d;
     cout<<"enter c and d:";
     cin>>k>>d;
     q[i]=c[i].add(k,d);
     i++;
     break;
    }
    break;
  }
  case 3:{
  for(int j=0;j<i;j++){
    cout<<p[j]<<endl;
    cout<<q[j]<<endl;
  }
  break;
}
  default:{
    
    goto e;
  }
}
   goto n;
  e: return 0;
}