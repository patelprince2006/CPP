#include<iostream>
using namespace std;

class Fule_consumption{
   int distance;
   int fule,total_fule;

   public:
   void insert_data(){
    cout<<"enter a distance and use fule per kilometer:";
    cin>>distance>>fule;
   }
   void cal_total_fule(){
       total_fule=distance/fule;
   }

   Fule_consumption operator+(Fule_consumption p){
        Fule_consumption t;
        t.distance= distance + p.distance;
        t.fule= fule + p.fule;
        t.total_fule= total_fule + p.total_fule;
        return t;
   }

};

int main(){
    Fule_consumption f[3];

    for(int i=0;i<2;i++){
       f[i].insert_data();
       f[i].cal_total_fule();
    }

    f[3]=f[2]+f[1];

    if(f[3]<f[2] || f[3]<f[1]){
        cout<<"fule is more consumption";
    }
    else{
        cout<<"fule is less consumpion";
    }
    return 0;
}