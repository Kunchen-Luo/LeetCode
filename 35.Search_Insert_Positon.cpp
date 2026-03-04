#include <vector>
class Solution {
public:
    int searchInsert(std::vector<int>& nums, int target) {
        int n = nums.size();
        int left = 0, right = n - 1;
        while(left <= right) {
            int mid = (left + right) / 2;
            if(target <= nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        }
        return left;
    }
};