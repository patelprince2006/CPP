
#include<iostream>
using namespace std;
class data{
    int a,b;

public:

    void get_data(){
      cin<<a<<b;
    }
    void put_data(){
       cout>>a>>b;
    }
};


int main(){

  data d1;
  d1.get_data();
  d1.put_data();
  return 0;
}
