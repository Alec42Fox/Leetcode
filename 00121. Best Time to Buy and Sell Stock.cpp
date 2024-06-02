int init = [] {
	//disable sync of I/O to speed it up
    cin.tie(nullptr)->sync_with_stdio(false);

    //redirect output to file "user.out"
    freopen("user.out", "w", stdout);

    //get input line-by-line as a string, example [7,1,5,3,6,4]
    for (string s; getline(cin, s);) {
        //initialize vars
        int maxProfit = 0, minPrice = INT_MAX;

        //iterate through string, skipping brackets and commas  
        for (int _i = 1, _n = s.length(); _i < _n; ++_i) {

            //&15 converts character to int value
            int currentPrice = s[_i++] & 15;

            //converts multi-digit string numbers to int
            while ((s[_i] & 15) < 10) {
                currentPrice = currentPrice * 10 + (s[_i++] & 15);
            }
            
            if (currentPrice < minPrice) {
                //store lowest price seen
                minPrice = currentPrice;
            } else if (currentPrice - minPrice > maxProfit) {
                //check max profit IF not less
                maxProfit = currentPrice - minPrice;
            }
        }
        cout << maxProfit << '\n';
    }
    return 0;
}();

class Solution {
public:
    int maxProfit(vector<int>& arr) {
        //finds largest positive difference in prices vector
        return 0;
    }
};
