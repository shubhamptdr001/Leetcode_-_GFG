class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();

        vector<int>prefix(n+1,0);
        int minsum = INT_MAX;

        for(int i=0;i<n;i++){
            prefix[i+1] = prefix[i]+nums[i];
        }

        for(int i=0;i<n;i++){
            for(int len=l;len<=r;len++){

                int j = i+len;

                if(j>n) break;
                int sum = prefix[j]-prefix[i];

                if(sum>0){
                    minsum = min(sum,minsum);
                }
            }
        }
        return minsum == INT_MAX ? -1:minsum;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna