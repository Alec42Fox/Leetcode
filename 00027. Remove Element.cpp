#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int& val) {
        int k = 0;
        int i = 0;
        for (; i < nums.size(); i++) {
            if (nums[i] != val) {
                nums[k] = nums[i];
                k++;
            }
        }
        for (; i > k; i--) {
            nums.pop_back();
        }
        return nums.size();
    }
};
