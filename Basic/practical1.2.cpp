#include<iostream>
using namespace std;
class InvetoryManagement{
  int id,price,product;
  char name[50];
  float quantity;
  static int total_amount;
  static int p_id;

  public:
  InvetoryManagement(){
    id=++p_id;
  }
  void Add_New_Product(){

    cout<<"Enter Product name : ";
    cin>>name;
    quantity=1;
    cout<<"Enter Product price: ";
    cin>>price;

  }
  void add_quantity(){
    int x;
  cout<<"Enter your id: ";
   cin>>x;
   if(x==id){
   cout<<"ENTER QUANTITY: ";
   cin>>quantity;
   price*=quantity;
   }
   else{ cout<<"Invalid input "; }
  }
  void sum_price();
 static void total_price();
  };
  int InvetoryManagement :: p_id=10;
  int InvetoryManagement :: total_amount=0;
  void InvetoryManagement :: sum_price(){
    total_amount += price;
  }
   void InvetoryManagement::total_price(){
     cout<<"total_amount"<<total_amount;
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

