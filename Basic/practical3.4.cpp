#include <iostream>
using namespace std;

template <typename T>
T find_max(T* arr, int size) {
    T maxVal = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

template <typename T>
void reverseArray(T* arr, int size) {
    for (int i = 0; i < size/2 ; i++) {
        swap(arr[i], arr[size - i-1]);
    }
}

template <typename T>
void displayArray(T* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i];
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;
  
    int intArray[100]; 
    cout << "Enter integer elements: ";
    for (int i = 0; i < size; i++) {
        cin >> intArray[i];
    }
    
    cout << "Maximum value: " << find_max(intArray, size) << endl;
    reverseArray(intArray, size);
    cout << "Reversed array: ";
    displayArray(intArray, size);
    
    double doubleArray[100]; 
    cout << "Enter float elements: ";
    for (int i = 0; i < size; i++) {
        cin >> doubleArray[i];
    }
    
    cout << "Maximum value: " << find_max(doubleArray, size) << endl;
    reverseArray(doubleArray, size);
    cout << "Reversed array: ";
    displayArray(doubleArray, size);
    
    return 0;
}
