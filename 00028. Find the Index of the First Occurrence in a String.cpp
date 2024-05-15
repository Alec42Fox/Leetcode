class Solution {
public:
    int strStr(string& s1, string& s2) {
        if (s1.find(s2) >= s1.length()) {
            return -1;
        }
        while (s1.length()) {
            return s1.find(s2);
        }
        return -1;
    }
};
