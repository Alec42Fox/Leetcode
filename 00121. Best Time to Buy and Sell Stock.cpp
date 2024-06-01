class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //finds largest positive difference in prices vector
        
        //iterate through prices
        int int_profit = 0;
        for (int i = 1; i < prices.size(); i++) {
            //store lowest price seen in price[0]
            if (prices[i] < prices[0]) {
                prices[0] = prices[i];
            } else if (prices[i] - prices[0] > int_profit) {
                //check max profit IF not less
                int_profit = prices[i] - prices[0];
            }
        }
        cout<<flush;
        return int_profit;
    }
};
