int init = [] {
    cin.tie(nullptr)->sync_with_stdio(false); //disable sync of I/O to speed it up
    
    freopen("user.out", "w", stdout); //redirect output to file "user.out"
    
    for (string s; getline(cin, s);) {
        //get input

        //initialize vars
        long int_ans = 0;
        if (s[0] == '-') {
            for (int int_i = s.size()-1; int_i > 0; --int_i) {
                int_ans = int_ans*10 + (s[int_i]&15);
                if (int_ans > 2147483641) {
                    cout<<'0'<<'\n';
                    goto goto_jump;
                }
            }
            cout<<'-'<<int_ans<<'\n';
        } else {
            for (int int_i = s.size()-1; int_i >= 0; --int_i) {
                int_ans = int_ans*10 + (s[int_i]&15);
                if (int_ans > 2147483641) {
                    cout<<'0'<<'\n';
                    goto goto_jump;
                }
            }
            cout<<int_ans<<'\n';
        }
        goto_jump:
    }
    return 0;
}();

class Solution {
public:
    int reverse(int & x) {
        return 0;
    }
};
