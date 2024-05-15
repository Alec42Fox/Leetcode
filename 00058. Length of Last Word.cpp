class Solution {
public:
    int lengthOfLastWord(string& s) {
        int i = s.size()-1, k = 0;
        while (s[i] == ' ') {
            i--;
        }
        for (; i >= 0; i--) {
            if (s[i]==' ') {
                return k;
            }
            k++;
        }
        return k;
    }
};
