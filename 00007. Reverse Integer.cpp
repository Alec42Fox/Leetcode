class Solution {
public:
    int reverse(int x) {
        int y=0;
        int sum=0;
        while(x!=0){
            y=x%10;
            if (sum > INT_MAX / 10 || (sum == INT_MAX / 10 && y > 7)) return 0;
            if (sum < INT_MIN / 10 || (sum == INT_MIN / 10 && y < -8))return 0;
            sum=(sum*10)+y;
            x=x/10;
        }
        return int(sum);
    }
};
