#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {
    multimap<int, string, greater<int>> student_Data;
    string name;
    int score;
    char ch;

    do{
        
                cout << "Enter student name: ";
                cin >> name;
                cout << "Enter student score: ";
                cin >> score;
                student_Data.insert({score, name});
           
                if (student_Data.empty()) {
                    cout << "student data not available.\n";
                } else {
                    cout << "\nRank List of Students:\n";
                    int rank = 1;
                    for (auto entry : student_Data) {
                        cout << "Rank " << rank << ": " << entry.second;
                        cout << " - Score: " << entry.first << endl;
                        rank++;
                    }
                }

                cout << "Do you want to enter another student? (y/n): ";
                cin >> ch;

    }while(ch=='y' || ch=='Y');

    return 0;
}
