class Solution {
public:
    // Solution 1
    int method1(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }
            else {
                int profit = prices[i] - minPrice;
                if (profit > maxProfit) maxProfit = profit;
            }
        }
        return maxProfit;
    }
    // Solution 2
    int method2(vector<int>& prices) {
        int minPrice = prices[0];
        int maxProfit = 0;
        for (int i = 0; i < prices.size(); i++) {
            minPrice = min(minPrice, prices[i]);
            int profit = prices[i] - minPrice;
            maxProfit = max(maxProfit, profit);
        }
        return maxProfit;
    }
    int maxProfit(vector<int>& prices) {
        
        // return method1(prices);
        return method2(prices);
    }
};
