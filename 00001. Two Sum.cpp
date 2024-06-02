class Solution {
public:
    vector<int> twoSum(vector<int>& nums,const int& target) {
        unordered_map<int,int> map;
        int index = 0;
        for (int& x : nums) {
            if (map.find(target - x) != map.end()) {
                return {map[target - x], index};
            }
            map[x] = index;
            index++;
        }
        return {};
    }
};
