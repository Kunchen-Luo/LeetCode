#include <vector>
class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int length = nums.size();
        if(length == 0)
            return 0;
        int fast = 1, slow = 1;
        while(fast < length) {
            if(nums[fast] != nums[fast - 1]) {
                nums[slow] = nums[fast];
                ++slow;
            }
            ++fast;
        }
        return slow;
    }
};