#include <iostream>
using namespace std;

class Calculator {
public:
    int add(int a, int b) {
        return a + b;
    }

    float add(float a, float b) {
        return a + b;
    }

    float add(int a, float b) {
        return a + b;
    }

    float add(float a, int b) {
        return a + b;
    }
};

int main() {
    Calculator cal;
    
    string types[20];  
    float results[20]; 
    int count = 0;     
    int choice;

     for(int i=0;i<20;i++){
        cout << "1. Add int + int\n";
        cout << "2. Add float + float\n";
        cout << "3. Display Results\n";
        cout << "Enter your choice: ";
        cin >> choice;

        int x, y;
        float a, b;
        float result;

        switch (choice) {
            case 1:
                cout << "Enter two integers: ";
                cin >> x >> y;
                result = cal.add(x, y);
                types[count] = "int + int";
                results[count] = result;
                count++;
                break;

            case 2:
                cout << "Enter two floats: ";
                cin >> a >> b;
                result = cal.add(a, b);
                types[count] = "float + float";
                results[count] = result;
                count++;
                break;

            case 3:
                for (int i = 0; i < count; i++) {
                    cout << "Type: " << types[i] <<": "<< results[i] << endl;
                }
                break;

            default:
                break;
        }
    }

    return 0;
}
