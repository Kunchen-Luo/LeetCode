#include <vector>
class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; --i) {
            if(digits[i] != 9) {
                ++digits[i];
                for(i = i + 1; i < n; ++i) {
                    digits[i] = 0;
                }
                return digits;
            }
        }
        std::vector<int> ans(n + 1);
        ans[0] = 1;
        return ans;
    }
};