#include <iostream>
using namespace std;

class counter {
    public:
    int a, b;

    void insert_data() {
        cout << "Enter a and b: ";
        cin >> a >> b;
    }

    void display_data() {
        cout << "a: " << a << endl << "b: " << b << endl;
    }
};

int main() {
    int capacity;
    cout << "Enter capacity: ";
    cin >> capacity;

    counter* c = new counter[capacity];  
    int count = 0;
    int ch;

next:
    cout << "\n1 -> Insert Data\n2 -> Display Data\n";
    cout<<"Enter a choice: ";
    cin >> ch;

    switch (ch) {
        case 1: {
            if (count < capacity) {
                c[count].insert_data();
                count++;
            } else {
                cout << "Capacity overflow\n";
            }
            goto next;
        }

        case 2: {
            if (count == 0) {
                cout << "Array is empty.\n";
            } else {
                for (int i = 0; i < count; ++i) {
                    c[i].display_data();
                }
            }
            goto next;
        }

            delete[] c;
            cout << "Exiting program.\n";
            return 0;

        default: {
            cout << "Invalid choice.\n";
            goto next;
        }
    }
}
