#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <set>
#include <algorithm>

using namespace std; 

class Solution {
private:
    unordered_map<string, multiset<string>> graph;
    vector<string> itinerary;

    void dfs(string airport) {
        while (!graph[airport].empty()) {
            string next_destination = *graph[airport].begin();
            graph[airport].erase(graph[airport].begin());

            dfs(next_destination);
        }
        itinerary.push_back(airport);
    }

public:
    vector<string> findItinerary(vector<vector<string>>& tickets) {
        for (const auto& ticket : tickets) {
            graph[ticket[0]].insert(ticket[1]);
        }
        
        dfs("JFK");
        
        reverse(itinerary.begin(), itinerary.end());
        
        return itinerary;
    }
};
