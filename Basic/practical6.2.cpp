#include<iostream>
using namespace std;

class point
{   public:
    float x=0,y=0;
    float move_x,move_y;

 void insert_data(){
    cout<<"enter a movement of x:";
    cin>>move_x;
    cout<<"enter a movement of y:";
    cin>>move_y;

    x=x+move_x;
    y=y+move_y;
 }

 void display_data(){
    if(x==0 && y==0){
        cout<<"point is ( 0 , 0 )";
    }
    else{
    cout<<"Movement of y:"<<move_y<<endl;
    cout<<"Movement of x:"<<move_x<<endl;
    cout<<"point is ( "<<x<<" , "<<y<<" )"<<endl;
    }
}
};

int main(){
    point* p = new point;
    int ch;

    next:
        cout << "\n1 -> Insert Data\n2 -> Display Data\n";
        cout<<"Enter a choice: ";
        cin >> ch;
    
        switch (ch) {
            case 1: 
            {
              p -> insert_data();
              goto next;
            }

            case 2:
            {
              p -> display_data();
              goto next;
            }
            
            default:
            {
              cout<<"Exit this programe.";
              break;
            }
            
        }
        delete p;
        return 0;
    }