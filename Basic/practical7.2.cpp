#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;

int main(){
  int i=0,p=0,z,j;
  int char_count=0;
  int line_count=0;
  string s[50];
  string u[50];
  int count=0;
  char ch;

  ifstream file("Untitled2.txt");
  if (!file) {
      cerr << "Error opening file!" << endl;
      return 1;
  }

     while(file.get(ch)){
          if(ch == ' '){
           i++;
         }

          if (ch == '\n'){
            line_count++;
          }
          else{
            char_count++;
          }
     }

   cout<<"number of character: "<<char_count<<endl;
   cout<<"number of lines: "<<line_count+1<<endl;
    cout<<"number of words:"<<i;
   file.close();

}
