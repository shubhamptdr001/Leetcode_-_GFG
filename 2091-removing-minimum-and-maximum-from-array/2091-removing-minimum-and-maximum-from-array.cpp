class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mx = INT_MIN;
        int mn = INT_MAX;
        int minpos = -1;
        int maxpos = -1;

        for(int i =0;i<n;i++){
            if(mx < nums[i]){
                mx = nums[i];
                maxpos = i;
            }
            if(mn > nums[i]){
                mn = nums[i];
                minpos = i;
            }
        }
        int left = min(minpos,maxpos);
        int right = max(minpos,maxpos);

        int fromfront = right + 1;
        int fromback = n - left;
        int fromboth = (left + 1) + (n - right);

        return min({fromfront,fromback,fromboth});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna