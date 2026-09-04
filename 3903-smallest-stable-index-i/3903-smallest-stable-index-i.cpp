class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int>mini;
        vector<int>maxi;
        int mx = INT_MIN;
        
        for(auto i:nums){
            mx = max(mx,i);
            maxi.push_back(mx);
        }
        int mn = INT_MAX;
        for(int i=n-1;i>=0;i--){
            mn = min(mn,nums[i]);
            mini.push_back(mn);
        }
        reverse(mini.begin(),mini.end());
        for(int i =0;i<n;i++){
            int p = maxi[i]-mini[i];
            if(p <= k){
                return i;
            }
        }
        return -1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna