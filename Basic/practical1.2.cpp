#include<iostream>
using namespace std;
class InvetoryManagement{
  int id=0,price,product;
  char name[50];
  float quantity;
  static int total_amount;

  public:
  void Add_New_Product(){

    cout<<"Enter Product name : ";
    cin>>name;
    cout<<"Enter Product Id: ";
    cin>>id;
    quantity=1;
    cout<<"Enter Product price: ";
    cin>>price;

  }
  void add_quantity(){
  cout<<"Enter your id: ";
   cin>>id;
   cout<<"ENTER QUANTITY: ";
   cin>>quantity;
   price*=quantity;
  }
  void sum_price();
 static void total_price();
  };
  int InvetoryManagement :: total_amount=0;
  void InvetoryManagement :: sum_price(){
    total_amount += price;
  }
   void InvetoryManagement::total_price(){
     cout<<total_amount;
  }

int main(){
    InvetoryManagement p[3];

    for(int i=0;i<3;i++){
    p[i].Add_New_Product();


    }
     for(int i=0;i<3;i++){
     p[i].add_quantity();
    p[i].sum_price();
    }
    p[0].InvetoryManagement::total_price();
    return 0;
}

