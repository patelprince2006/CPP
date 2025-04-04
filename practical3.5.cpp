#include<iostream>
using namespace std;

int count(int p){
  int count=0;
 while(p!=0){
    p=p/10;
    count++;
  }
    return count;
}
int main(){
    int x;
    int y;
    cout<<"enter a number for given number is how many times repeated: ";
    cin>>x;

    cout<<"enter a number:";
      cin>>y;
    for(int i=0;i<x;i++){
      cout<<y;
    }
    cout<<endl;
    int p;
    p=count(y);
    cout<<p<<endl;
    
    int n=0,ld,k;
    while(y!=0)
       { if(y<10){
         n+=y;
         break;
       }
      else{
        ld=y%10;
        n+=ld;
        y=y/10;
       }
   }
     n*=x;
    cout<<"sum="<<n<<endl;
    int h,o=0;
    while(n!=0){
      if(n<10){
        o+=n;
        break;
      }
      else{
      h=n%10;
      o+=h;
      n=n/10;
     }
  }
    cout<<"total sum:"<<o;
    return 0;
}
