#include <iostream>
#include <map>
#include <string>
using namespace std;

int main() {
    string se,word;
    char ch;
    cout << "Enter a sentense: ";
    getline(cin, se);
    map<string, int> m;
    
    for (int i = 0; i <= se.length(); i++) {
       ch = se[i];

        if (ch == ' ' || ch == '\0') {
            if (!word.empty()) {
                    m[word]++;
                  word = "";
            }
        } 
        else {
            word += ch;
        }
    }

    for (auto word : m) {
        cout << word.first << ": " << word.second << endl;
    }

    return 0;
}

