#include<iostream>
#include<cstring>
#include<map>
using namespace std;

int main(){
    //empth map
map<string,float>m1;

map<string,float>m2={{"24ce073",9.25},{"24ce001",8.4},{"24ce137",9.8}};
cout<<m1.size();
cout<<m2.size();
//serch value
cout<<m2["24ce137"];

//value chang
m2["24ce137"]=9.1;
cout<<m2["24ce137"];

m2.insert({"24ce034",2.9});
m2.insert({"24ce098",3.8});

m2.erase("24ce034");

//find data is here or not 
auto i=m2.find("24ce092");
if(i= !=m2.end())
  m2.["24ce092"];
else 
   m2.insert("24ce092",8)=n;

for(auto e:m2){
    cout<<e.first<<": "<<e.second<<endl;
}
return 0;
}