class Solution {
public:
    int searchInsert(vector<int>& nums, int& target) {
        int i = nums.size();
        if (target > i) {
            return
        }
        for (auto& x : nums) {
            if (x < target) {
                i++;
            } else {
                return i;
            }
        }
        return i;
    }
};
