#include<iostream>
using namespace std;

class parent { 
    public: 
        virtual ~parent() { 
            cout << "parent destructor called\n"; 
        } 
    }; 
     
    class child : public parent { 
 
    private: 
        int* data; 
    public: 
        child() { 
            data = new int[30];
        } 
        ~child() override { 
            delete[] data; 
            cout << "child destructor called\n"; 
        } 
    }; 
     
    int main() { 
        parent* obj = new child(); 
        delete obj;
        return 0;
    }