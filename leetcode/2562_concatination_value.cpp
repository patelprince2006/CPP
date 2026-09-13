class Solution {
public:
    long long findTheArrayConcVal(vector<int>& nums) {
        long long ans = 0, q;
        int a;
        int n = nums.size();

        for (int i = 0; i < (n + 1) / 2; i++) {

            int t = nums[n - i - 1];
            int mu = 1;
            a = nums[i];

            if (i == n - i - 1) {
                ans += a;
                break;
            }

            while (t > 0) {
                mu *= 10;
                t /= 10;
            }

            q = mu * a + nums[n - i - 1];
            ans += q;
        }

        return ans;
    }
};