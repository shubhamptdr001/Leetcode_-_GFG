class Solution {
public:
    
    bool predictTheWinner(vector<int>& nums) {
         int n = nums.size();
        vector<int> dp(nums);

        for (int l = n - 2;l >= 0; l--){
            for (int r = l + 1; r < n; r++) {
                dp[r] = max(
                    nums[l] - dp[r],      
                    nums[r] - dp[r - 1]
                );
            }
        }
        return dp[n - 1] >= 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna