#include <iostream>
#include <cstring>
using namespace std;

class InventoryManagement {
    int id, price;
    char name[50];
    float quantity;
    static int total_amount;
    static int p_id;

public:
    InventoryManagement() {
        id = ++p_id;
        quantity = 0; 
    }

    void Add_New_Product() {
        cout << "Enter Product Name: ";
         cin>>name;
        cout << "Enter Product Price: ";
        cin >> price;
        quantity = 1; 
    }

    void add_quantity() {
        int x;
        cout << "Enter Product ID to update quantity: ";
        cin >> x;

        if (x == id) {
            cout << "Enter Quantity: ";
            float new_quantity;
            cin >> new_quantity;
            quantity += new_quantity; 
        } else {
            cout << "Invalid Product ID" << endl;
        }
    }

    void sum_price() {
        total_amount += (price * quantity);
    }

    static void total_price() {
        cout << "Total Amount: " << total_amount << endl;
    }
};

int InventoryManagement::p_id = 10;
int InventoryManagement::total_amount = 0;

int main() {
    InventoryManagement products[3];

    for (int i = 0; i < 3; i++) {
        products[i].Add_New_Product();    }

    for (int i = 0; i < 3; i++) {
        products[i].add_quantity();
        products[i].sum_price();
    }

    InventoryManagement::total_price();

    return 0;
}
