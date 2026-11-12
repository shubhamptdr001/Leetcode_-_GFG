class Solution {
  public:
    int kthSmallest(vector<int> &arr, int k) {
        sort(arr.begin(),arr.end());
        
        return arr[k-1];
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna