#include <string>
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string test = strs[0];
        for (int i = 0; i<test.size(); i++) {
            for (auto& x : strs) {
                if (test[i] != x[i]) {return test.substr(0,i);}
            }
        }
        return test;
    }
};
