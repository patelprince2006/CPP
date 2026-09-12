class Solution {
public:
    vector<int> solveQueries(vector<int>& nums, vector<int>& queries) {

        int n = nums.size();
        int m = queries.size();

        vector<int> ans(m);

        for (int i = 0; i < m; i++) {

            int q = queries[i];
            int t = nums[q];

            vector<int> p;

            for (int j = 0; j < n; j++) {
                if (nums[j] == t && j != q) {
                    p.push_back(j);
                }
            }

            if (p.empty()) {
                ans[i] = -1;
                continue;
            }

            int mini = n;

            for (int j = 0; j < p.size(); j++) {

                int diff = abs(q - p[j]);

                diff = min(diff, n - diff);

                mini = min(mini, diff);
            }

            ans[i] = mini;
        }

        return ans;
    }
};