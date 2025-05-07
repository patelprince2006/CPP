#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    vector<int> transaction_IDs = {1001, 1005, 1003, 1001, 1007, 1005, 1002};

    sort(transaction_IDs.begin(), transaction_IDs.end());

    auto last = unique(transaction_IDs.begin(), transaction_IDs.end());

    transaction_IDs.erase(last, transaction_IDs.end());

    cout << "Unique Transaction IDs:\n";
    for (int id : transaction_IDs) {
        cout << id << endl;
    }

    return 0;
}
