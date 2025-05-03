#include<iostream>
using namespace std;

class fahrenhit;

class celcius{
  float temp;

  public:
  void insert_data(){
    cout<<"enter a temprature: ";
    cin>>temp;
  }

  void convert_c_to_f(){
     cout<<"celcius temprature:"<<temp<<endl;
     temp = (temp*(9.0/5.0))+32;
     cout<<"feranhit temprature:"<<temp<<endl;
  }
  float get_celcius(){
    return temp;
  }

  bool operator==(fahrenhit &f);
  
};

class fahrenhit{
   float t;

   public:
   void get_data(){
     cout<<"enter a feranhit valu:";
     cin>>t;
   }

   void convert_f_to_c(){
     cout<<"feranhit temprature:"<<t<<endl;
     t=(((t-32)*5.0)/9.0);
     cout<<"celcius temprature:"<<t<<endl;
   }

   float get_fahrenhit(){
    return t;
    }

    bool operator==(celcius &c);
};

bool celcius::operator==(fahrenhit& f) {
  
  return temp == ((f.get_fahrenhit() - 32) * 5 / 9);
}


bool fahrenhit::operator==(celcius& c){
  
  return t == (c.get_celcius() * 9 / 5) + 32;
}

int main(){
   celcius c;
   fahrenhit f;
  n: cout<<"1 -> celcius"<<endl<<"2 -> feranhit"<<"3 -> compare equality"<<endl;
   int choice;
   cout<<"enter your choice:";
   cin>>choice;
   switch(choice){
     case 1:
     {  c.insert_data();
        c.convert_c_to_f();
        break;
     }
     
     case 2:
     { f.get_data();
       f.convert_f_to_c();
       break;
     }
     case 3:
     {
       cout << "Comparing temperatures...\n";
        c.get_celcius();
        f.get_fahrenhit();
        if (c == f) {
              cout << "Temperatures are equal" << endl;
        } else {
               cout << "Temperatures are not equal" << endl;
          }
      }
       break;

     default:
     {  goto e;
        break;
     }
     
   }
   goto n;
  e: return 0;
}
