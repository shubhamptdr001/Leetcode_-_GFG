class Solution {
  public:
    int maxWater(vector<int> &arr) {
        
        int n = arr.size();
        int total = 0;
        vector<int>prefix(n);
        vector<int>suffix(n);
        
        int maxi = arr[0];
        for(int i=0;i<n;i++){
             maxi = max(maxi,arr[i]);
            prefix[i]= maxi;
        }
        
        maxi = arr[n-1];
        for(int i=n-1;i>=0;i--){
             maxi = max(maxi,arr[i]);
            suffix[i]= maxi;
        }
        
        for(int i=0;i<n;i++){
            total += abs(min(prefix[i],suffix[i]) - arr[i]);
        }
        return total;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna