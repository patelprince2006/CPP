#include <iostream>
#include <string>
using namespace std;

class Student {
protected:
    string name;
    float marks;
public:
      Student() {}
    Student(string n, float m){
        name = n;
        marks = m;
    }
    virtual void cal_Grade() = 0;
};

class Under_graduate : public Student {
public:
     Under_graduate() {}
    Under_graduate(string n, float m) : Student(n, m) {}

    void cal_Grade() override {
        cout << "Under_graduate Student name: " << name << endl;
        cout  << " Marks: " << marks << endl;
        if (marks >= 85)
            cout << "Grade: A\n";
        else if (marks >= 70)
            cout << "Grade: B\n";
        else if (marks >= 50)
            cout << "Grade: C\n";
        else
            cout << "Grade: F\n";
    }
};

class Post_graduate : public Student {
public:
     Post_graduate() {}
    Post_graduate(string n, float m) : Student(n, m) {}
    
    void cal_Grade() override {
        cout << "Post_graduate Student name: " << name << endl;
        cout  << " Marks: " << marks << endl;
        if (marks >= 90)
            cout << "Grade: A\n";
        else if (marks >= 75)
            cout << "Grade: B\n";
        else if (marks >= 60)
            cout << "Grade: C\n";
        else
            cout << "Grade: F\n";
    }
};

int main() {
    Under_graduate ug[10];
    Post_graduate pg[10];
    
    int count = 0;
    int co=0;
    int choice;
    string name;
    float marks;

   
    n : cout << "\n1. Add Under_graduate Student data\n";
        cout << "2. Add Post_graduate Student data\n";
        cout << "3. Display under graduate Students data\n";
        cout << "4. Display post graduate Students data\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
            if (count <= 10){
               cout << "Enter name: ";
               cin >> name;
               cout << "Enter marks: ";
               cin >> marks;
               
                ug[count] = Under_graduate(name, marks);
                ++count;
               }
             break;
            case 2:
            if (co <= 10){
                cout << "Enter name: ";
                cin >> name;
                cout << "Enter marks: ";
                cin >> marks;

               pg[co] = Post_graduate(name, marks);
                ++co;
                break;
            }
            case 3:
                for (int i = 0; i < count; ++i) {            
                        ug[i].cal_Grade();
                }
                break;

            case 4:
             for (int i = 0; i < co; ++i) {
                  pg[i].cal_Grade();
             }
              break;
            default:
                goto e;
                cout << "Invalid choice. Please try again.\n";
        }
    goto n;

    e: return 0;
}
