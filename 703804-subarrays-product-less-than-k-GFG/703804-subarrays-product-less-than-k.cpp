class Solution {
  public:
    int countSubarray(vector<int>& arr, int k) {
        if(k==1) return 0;
        
        int n = arr.size();
        
        long long pro = 1;
        long long cnt =0;
        
        int left =0;
        for(int right=0;right<n;right++){
            pro *= arr[right];
            
            while(left<=right && pro>=k){
                pro /= arr[left];
                left++;
            }
            cnt += right-left+1;
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna