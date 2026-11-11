class Solution {
  public:
    vector<int> getMinMax(vector<int> &arr) {
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(auto i:arr){
            mini = min(i,mini);
            maxi = max(i,maxi);
        }
        return {mini,maxi};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna