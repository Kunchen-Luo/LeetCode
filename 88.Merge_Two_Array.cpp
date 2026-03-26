#include <vector>
class Solution {
public:
    void merge(std::vector<int>& nums1, int m, std::vector<int>& nums2, int n) {
        std::vector<int> nums3 (m + n);
        int i = 0, j = 0, k = 0;
        while(i < m || j < n) {
            if(j >= n || (i < m && nums1[i] < nums2[j])) {
                nums3[k] = nums1[i];
                ++i;
            }
            else {
                nums3[k] = nums2[j];
                ++j;
            }
            ++k;
        }
        nums1 = nums3;
    }
};