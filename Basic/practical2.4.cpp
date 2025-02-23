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
      cout<<"your id is: "<<id;
      cout<<"your name is: "<<name;
      cout<<"your quantity is: "<<quantity;
      cout<<"your price is:"<<price;
    }
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
        for(c=0;c<10;c++){
         s[c].Add_item_detail();
         break;
        }
        break;

    case 2:
        for(c=0;c<10;c++){
         s[c].Increase_quantity();
         break;
        }
        break;

    case 3:
        for(c=0;c<10;c++){
         s[c].Decrease_quantity();
         break;
        }
        break;
    
    case 4:
        for(c=0;c<10;c++){
         s[c].Display_item_details();
         break;
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