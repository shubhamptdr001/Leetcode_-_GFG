class Solution {
public:
    int solve(vector<vector<int>>& grid,vector<vector<int>>& dp,int i,int j){
        if(i<0 || j<0) return INT_MAX;
        if(i==0 && j==0){
            return grid[0][0];
        }

        if(dp[i][j] != -1) return dp[i][j];

        return dp[i][j] = grid[i][j] + min(solve(grid,dp,i-1,j),solve(grid,dp,i,j-1));
    }
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        vector<vector<int>>dp(m,vector<int>(n,-1));
        return solve(grid,dp,m-1,n-1);

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna