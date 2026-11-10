class Solution {
public:
    int climbStairs(int n, vector<int>& costs) {

        vector<int>dp(n+1,INT_MAX);
        dp[0] = 0;
        for (int step = 1; step <= n; step++) {
            for (int jump = 1; jump <= 3; jump++) {
                if (step - jump >= 0) {
                    int total = dp[step - jump]
                              + costs[step - 1]
                              + jump * jump;

                    dp[step] = min(dp[step], total);
                }
            }
        }
        return dp[n];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna