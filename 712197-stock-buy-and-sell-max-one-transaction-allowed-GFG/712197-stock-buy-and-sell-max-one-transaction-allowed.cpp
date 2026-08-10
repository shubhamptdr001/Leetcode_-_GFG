class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int profit = 0;
        int mini = prices[0];
        
        for(int i=1;i<prices.size();i++){
            profit = max(profit,prices[i]-mini);
            mini = min(mini,prices[i]);
        }
        return profit;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna