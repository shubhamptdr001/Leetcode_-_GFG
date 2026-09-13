class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int maxi = nums[0];
        int m = 0;

        for(int i = 1;i<n;i++){
            if(maxi < nums[i]){
                maxi = max(maxi,nums[i]);
                m = i;
            }
        }
        return m;
    }    
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna