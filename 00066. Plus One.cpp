#include <algorithm>
class Solution {
public:
    vector<int> plusOne(vector<int>& v1) {
        int i = v1.size();
        while (i-->0) {
            if (v1[i] == 9) {
                v1[i] = 0;
            } else {
                v1[i] += 1;
                return v1;
            }
        }
        v1.push_back(0);
        v1[0] = 1;
        return v1;
    }
};
