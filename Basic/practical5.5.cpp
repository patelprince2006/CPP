#include <iostream>
using namespace std;

class Shape {
public:
    virtual ~Shape() {} 
    virtual float Area() const = 0; 
};

class Rectangle : public Shape {
private:
    float length, width;
public:
    Rectangle(float l, float w) {
      length =l;
      width=w;
    }
    
    void insert_data(){
       cout<<"enter a length:";
       cout<<"enter a width:";
    }
    float Area() const override {
        return length * width;
    }
};

class Circle : public Shape {
private:
    float radius;
public:
    Circle(float r)  {
      radius = r;
    }
    void get_data(){
      cout<<"enter a radius:";
      cin>>radius;
    }

    float Area() const override {
       float PI = 3.14; 
        return PI * radius * radius;
    }
};

void Display_Areas(Shape* shapes[], int size) {
    for (int i = 0; i < size;i++) {
        cout << "Area: " << shapes[i]->Area() << endl;
    }
}

int main() {
    Shape* shapes[2];

    
    Rectangle r1(10, 5);
    Circle c1(7);

    shapes[0] = &r1;
    shapes[1] = &c1;

    Display_Areas(shapes, 2);

    return 0;
}
