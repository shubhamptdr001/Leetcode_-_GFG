class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int maxCap = INT_MIN;
        
        int i=0;
        int j=n-1;
        
        while(i<j){
            int cap = (j-i) * min(arr[j],arr[i]);
            maxCap = max(maxCap,cap);
            
            if(arr[i]<arr[j]) i++;
            else j--;
        }
        if(maxCap == INT_MIN) return 0;
        return maxCap;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna