class Solution {
public:
    int lengthOfLongestSubstring(const string& s) {
        std::unordered_map<char,int> map; //store previous char
        int int_ans = 0, int_end = s.size();
        for (int i = int_end-1; i != -1; i--) { //iterate string backwards
            if (map.find(s[i]) != map.end() && map[s[i]] < int_end) //if char in substring
                int_end = map[s[i]]; //update end of substring
            map[s[i]] = i; //add char to map
            int_ans = std::max(int_ans, int_end - i); //update ans
        }
        return int_ans; //return ans
    }
};
