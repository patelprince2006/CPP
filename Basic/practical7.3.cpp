#include <iostream>
#include <fstream>
#include <iomanip>
#include <cstring>
using namespace std;

const int MAX_PRODUCTS = 100;

struct Product {
    char name[50];
    int quantity;
    float price;
};

void addProduct(const char* filename) {
    Product p;
    cout << "Enter product name: ";
    cin >> p.name;
    cout << "Enter quantity: ";
    cin >> p.quantity;
    cout << "Enter price: ";
    cin >> p.price;

    ofstream fout(filename, ios::app);
    if (!fout) {
        cerr << "Error opening file!\n";
        return;
    }

    fout << p.name << " " << p.quantity << " " << p.price << endl;
    fout.close();
    cout << "Product added.\n";
}

void viewInventory(const char* filename) {
    ifstream fin(filename);
    if (!fin) {
        cerr << "Error opening file!\n";
        return;
    }

    Product p;
    cout << left << setw(15) << "Product" << setw(10) << "Qty" << setw(10) << "Price" << endl;

    while (fin >> p.name >> p.quantity >> p.price) {
        cout << left << setw(15) << p.name << setw(10) << p.quantity << setprecision(2) << p.price << endl;
    }

    fin.close();
}

void searchProductFile(const char* filename, const char* target) {
    ifstream fin(filename);
    if (!fin) {
        cerr << "Error opening file!\n";
        return;
    }

    Product p;
    bool found = false;

    while (fin >> p.name >> p.quantity >> p.price) {
        if (strcmp(p.name, target) == 0) {
            cout << "Found: " << p.name << ", Qty: " << p.quantity << ", Price: " << p.price << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Product not found.\n";

    fin.close();
}


int main() {
    const char* filename = "inventory.txt";
    Product products[MAX_PRODUCTS];
    int count = 0;
    int choice;
    char searchName[50];

    do {
        cout << "\nInventory Management\n";
        cout << "1. Add Product\n";
        cout << "2. View Inventory\n";
        cout << "3. Search Product (File)\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addProduct(filename);
                break;
            case 2:
                viewInventory(filename);
                break;
            case 3:
                cout << "Enter product name to search: ";
                cin >> searchName;
                searchProductFile(filename, searchName);
                break;
           
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
