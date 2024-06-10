class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        std::vector<int> v(128, INT_MAX); //store previous char
        int int_ans = 0, int_end = s.size();
        for (int i = int_end-1; i != -1; i--) { //go backwards
            if (v[s[i]] < int_end) //if char in substring
                int_end = v[s[i]]; //update end of substring
            v[s[i]] = i; //add char to map
            int_ans = std::max(int_ans, int_end - i); //update ans
        }
        return int_ans; //return ans
    }
};
