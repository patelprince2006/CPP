#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(){
  int i=0,p=0,z,j;
  string s[50];
  string u[50];
  int count=0;
  int *k[50];

  ifstream file("student.txt");
  if (!file) {
      cerr << "Error opening file!" << endl;
      return 1;
  }
   
  while(getline(file,s[i],' ')){
      i++;
  }
  for(z=0;z<=i;z++){
  for(j=z+1;j<=i;j++){
     if(s[z]==s[j] && s[z]!=u[z]){
        u[z]=s[j];
        p++;
        cout<<"repeted words:"<<u[z]<<endl;
     }
   }
     count++;
  }
   
   cout<<"number of repeted words:"<<p<<endl;
    cout<<"number of words:"<<count-p-1;
   file.close();

}
