#include <iostream>
using namespace std;

class FuelType {
protected:
    string fuel;
public:
    FuelType(string f) {
        fuel = f;
    }
    void display_FuelType() {
        cout << "Fuel Type: " << fuel << endl;
    }
};

class Brand {
protected:
    string brand_Name;
public:
    Brand(string b) {
        brandName = b;
    }
    void display_Brand() {
        cout << "Brand: " << brand_Name << endl;
    }
};

class Car : public FuelType, public Brand {
public:
    Car(string f, string b) : FuelType(f), Brand(b) {}

    void display_CarInfo() {
        display_Brand();
        display_FuelType();
        cout << "-------------------------" << endl;
    }
};

int main() {
   
    Car car1("Petrol", "Toyota");
    Car car2("Diesel", "Ford");
    Car car3("Electric", "Tesla");

    car1.display_CarInfo();
    car2.display_CarInfo();
    car3.display_CarInfo();

    return 0;
}
