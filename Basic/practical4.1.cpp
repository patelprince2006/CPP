#include<iostream>
using namespace std;

class shape{
    float r;
  
    public:
    void get_radius(){
        cout<<"enter a radius: ";
        cin>>r;
    }
    float insert_r(){
        return r;
       }
};

class circle : private shape{
   float a;

   public:
   void cal_area(){
     get_radius();
     a=3.14*insert_r()*insert_r();
   }
   
   void diaplay_area(){
    cout<<"area : "<<a;
   }
//    void get_radius(){    //for public
//     cout<<"enter a radius: ";
//     cin>>r;
// }
};

int main(){
    shape s;
    circle c;

    cout<<sizeof(c)<<endl;
    cout<<sizeof(s)<<endl;

    // c.get_radius();
    c.cal_area();
    c.diaplay_area();

    return 0;
}