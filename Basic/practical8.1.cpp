#include<iostream>
#include<vector>
#include<algorithm>
using namespace  std;

int main(){
vector<int> p;
int size,n,x;
cout<<"enter a size: ";
cin>>size;
   for(int i=0;i<size;i++){
     cin>>x;
     p.push_back(x);
   }

cout<<endl<<"reverse elements using revers():";
   reverse(p.begin(), p.end());

   for(int i=0;i<size;i++){
    cout<<p[i];
     }
   return 0;
}

