class Solution {
public:
    int rotatedDigits(int n) {
        int count = 0;
        for (int i = 1; i <= n; ++i) {
            int temp = i;
            bool has_valid_rotation = false;
            bool has_invalid_digit = false;
            
            while (temp > 0) {
                int digit = temp % 10;
                if (digit == 3 || digit == 4 || digit == 7) {
                    has_invalid_digit = true;
                    break;
                }
                if (digit == 2 || digit == 5 || digit == 6 || digit == 9) {
                    has_valid_rotation = true;
                }
                temp /= 10;
            }
            
            if (has_valid_rotation && !has_invalid_digit) {
                count++;
            }
        }
        return count;
    }
};
