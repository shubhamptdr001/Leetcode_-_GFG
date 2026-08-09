class Solution {
public:
    vector<int>dp;

    int solve(vector<int>& nums,int n){
        if(n<0) return 0;
        if(n==0) return nums[0];
        if(dp[n] != -1) return dp[n];
        int rob = nums[n] + solve(nums,n-2);
        int broke = solve(nums,n-1);

        return dp[n] = max(rob,broke);
     }
     int exclude(vector<int>& nums,int st,int end){
        if(st>end)return 0;
        int size = end - st + 1;
        dp.assign(size,-1);
        vector<int>temp;
        for(int i=st;i<=end;i++){
            temp.push_back(nums[i]);
        }
        return solve(temp,size-1);
     }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];

        int start = exclude(nums,0,n-2);
        int end = exclude(nums,1,n-1);
        
        return max(start,end);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna