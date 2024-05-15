class Solution {
public:
    bool isPalindrome(int& x) {
        if (x<0) {return false;}
        if (x<10) {return true;}
        if (x%10 == 0 || x>2147447412) {return false;}
        long int c=0,g=x;
        while(x>0){
            c=c*10+x%10;
            x/=10;
        }
        return (g==c);  
    }
};
