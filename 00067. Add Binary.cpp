class Solution {
public:
    string addBinary(const string& string_a, const string& string_b) {
        //takes 2 binary strings and returns sum as string
        int int_aa = string_a.size()-1; //traverse strings backwards
        int int_bb = string_b.size()-1;
        int int_ans = (int_aa>int_bb ? int_aa : int_bb) + 1; //max length of a/b +1 in case of carry
        char char_ans[int_ans + 2];
        char_ans[int_ans+1] = '\0';

        int int_sum = 0; //stores sum of digits
        while (true) {
            //run if in bounds of string_a
            if (int_aa>=0) {
                //add string_a digit to int_sum then decrements int_aa index
                int_sum+=string_a[int_aa--]&1;
                //&1 looks at only last bit 0 or 1
                //&15 instead of &1 converts char to int for digits 0-9

                //same with string_b
                if (int_bb>=0) {
                    int_sum+=string_b[int_bb--]&1;
                } else {
                    //else, don't add to int_sum
                }
            } else {
                if (int_bb>=0) {
                    int_sum+=string_b[int_bb--]&1;
                } else {
                    //both strings ended, break.
                    break;
                }
            }
            char_ans[int_ans--] = (int_sum % 2 == 0 ? '0' : '1');
            int_sum >>= 1; //bitshift right, read next bit
        }
        //handle final carry
        if (int_sum) {
            char_ans[int_ans] = '1';
            return string(char_ans);
        }
        return string(char_ans+1);
    }
};
