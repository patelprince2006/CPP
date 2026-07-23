#include<iostream>
using namespace std;

int main(){
    int n,p=0,fact=1;
    cin>>n;

    for(int i=1;i<n;i++){
      fact*=i;
    }
    while(n){
    if(n%10==0){
        p++;
    }
    n=n/10;
    }

    cout<<p;
}
