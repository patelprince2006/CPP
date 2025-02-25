
#include<iostream>
using namespace std;

class Store_Management{
    int id;
    char name[25];
    int price=0,money;
    int quantity;

    public:
    void Add_item_detail(){
        cout<<"enter item id:";
        cin>>id;
        cout<<"enter item name: ";
        cin>>name;
        cout<<"enter item price of per item: ";
        cin>>money;
        cout<<"enter item quantity: ";
        cin>>quantity;
        price=money*quantity;
    }

    void Increase_quantity(){
        int x;
    cout<<"enter your item id: ";
    cin>>x;
    if(x==id){
        int y;
        cout<<"enter your add quantity: ";
        cin>>y;
        quantity+=y;
        price+=(y*money);
    }
    else{ cout<<"invalid id"; }
    }

    void Decrease_quantity(){
        int w;
        cout<<"enter your id: ";
        cin>>w;
        if(w==id){
            int z;
            cout<<"enter your  quantity: ";
            cin>>z;
            quantity-=z;
            price-=(z*money);
        }
    }
    
void Display_item_details(){
    int p;
    cout<<"enter your account number: ";
    cin>>p;
    if(p==id){
      cout<<"your id is: "<<id<<endl;
      cout<<"your name is: "<<name<<endl;
      cout<<"your quantity is: "<<quantity<<endl;
      cout<<"your price is:"<<price<<endl;
    }
    }
    int get_id(){
        return id;
    }
};

int main(){
    Store_Management s[10];
    int c=0,choice;
next:cout<<"1 -> Add_item_detail"<<endl<<"2 -> Increase_quantity"<<endl<<"3 -> Decrease_quantity"<<endl<<"4 -> Display_item_details"<<endl;
    cout<<"enter your choice: ";
    cin>>choice;
    switch (choice)
    {
    
    case 1:
       if(c<10){
         s[c].Add_item_detail();
         c++;
         
        }
        break;

    case 2:
     int id_num;
     cout<<"enter id number: ";
     cin>>id_num;
        for(int i=0;i<10;i++){
            if(s[i].get_id()==id_num){
         s[i].Increase_quantity();
         break;
        }
        }
        break;

    case 3:
    cout<<"enter id number: ";
    cin>>id_num;
       for(int i=0;i<10;i++){
           if(s[i].get_id()==id_num){
        s[i].Decrease_quantity();
        break;
       }
     }
        break;
    
    case 4:
    cout<<"enter id number: ";
    cin>>id_num;
       for(int i=0;i<10;i++){
           if(s[i].get_id()==id_num){
        s[i].Display_item_details();
        break;
       }
       }
        break;

    default:{
        goto e;
        break;
    }
    }
    goto next;
    e:return 0;
}