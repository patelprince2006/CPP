#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main() {
    map<string, vector<string>> directory;
    int choice;
    string folder, file;

    do {
        cout << "\n1. Add Folder\n";
        cout << "2. Add File to Folder\n";
        cout << "3. Show History\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter folder name: ";
                cin >> folder;
                directory[folder];  
                cout << "Folder added.\n";
                break;

            case 2:
                cout << "Enter folder name: ";
                cin >> folder;
                if (directory.count(folder)) {
                    cout << "Enter file name: ";
                    cin >> file;
                    directory[folder].push_back(file);
                    cout << "File added.\n";
                } else {
                    cout << "Folder not found.\n";
                }
                break;

            case 3:
                cout << "\nHistory:\n";
                for (auto d : directory) {
                    cout << "Folder: " << d.first << endl;
                    for (int i = 0; i < d.second.size(); i++) {
                        cout << "  - " << d.second[i] << endl;
                    }
                }
                break;

            case 4:
                cout << "Exit\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }

    } while (choice != 4);

    return 0;
}
