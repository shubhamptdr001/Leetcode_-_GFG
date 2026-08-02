class Solution {
public:
    bool stoneGame(vector<int>& piles) {
        int n = piles.size();

        vector<int>dp(n);

        for(int l=n-2;l>=0;l--){
            for(int r=l+1;r<0;r++){
                dp[r] = max(piles[l]-dp[r],piles[r]-dp[l-1]);
            }
        }
        return dp[n-1]>=0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna