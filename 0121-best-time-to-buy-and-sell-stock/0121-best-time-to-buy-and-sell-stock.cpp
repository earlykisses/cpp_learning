class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int minPrice = prices[0];

        for (int i = 1; i < prices.size(); i++) {

            // Find the cheapest price to buy
            if (prices[i] < minPrice) {
                minPrice = prices[i];
            }

            // Calculate today's profit
            else {
                maxProfit = max(maxProfit, prices[i] - minPrice);
            }
        }

        return maxProfit;
    }
};