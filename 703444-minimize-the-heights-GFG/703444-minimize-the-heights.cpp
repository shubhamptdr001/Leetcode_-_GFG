class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
        int n = arr.size();
        
        int mini = INT_MAX;
        int maxi = INT_MIN;
        
        for(int i=0;i<n;i++){
            if(arr[i]<k){
                maxi = max(maxi,arr[i]+k);
                mini = min(mini,arr[i]+k);
            }else{
                maxi = max(maxi,arr[i]-k);
                mini = min(mini,arr[i]-k);
            }    
        }
        return maxi-mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna