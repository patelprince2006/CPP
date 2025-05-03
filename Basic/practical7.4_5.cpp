#include<iostream>
#include<fstream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    string name;
    int m1, m2, m3;
    float grade;

    ifstream file("Prince.txt");

    if (!file) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    file >> name >> m1 >> m2 >> m3;

    grade = (m1 + m2 + m3) / 3.0;

    cout << left << setw(20) << "Name" << right << setw(10) << "Grade" << endl;
    cout << left << setw(20) << name << right << setw(10) << fixed << setprecision(2) << grade << endl;

    file.close();
    return 0;
}
