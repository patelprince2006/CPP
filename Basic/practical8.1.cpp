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
   reverse(p.begin(), p.end());
//    cout<<"reverse element:";
//    for(int i=0;i<size/2;i++){
//     n=p[i];
//     p[i]=p[size-i-1];
//     p[size-i-1]=n;
// }
//    for(int i=0;i<size;i++){
//     cout<<p[i];
//    }
cout<<endl<<"reverse elements using revers():";
   reverse(p.begin(), p.end());

   for(int i=0;i<size;i++){
    cout<<p[i];
     }
   return 0;
}

