class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 0;
        int profit = 0;
        int c_profit = 0;
        
        if (prices.size() == 0) {
            return profit;
        }

        for (int i = 0; i < prices.size() - 1; ++i) {
            buy = prices[i];
            sell = prices[i+1];
            
            if (buy < sell) {
             c_profit += sell - buy;   
            }        
        profit += c_profit;
        c_profit = 0;
    }
        return profit;
    }
};
