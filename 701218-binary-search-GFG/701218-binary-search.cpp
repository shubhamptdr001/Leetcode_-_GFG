class Solution {
  public:
    bool binarySearch(vector<int>& arr, int k) {
        int e = arr.size()-1;
        int s = 0;
        
        int mid = s+(e-s)/2;
        while(s<=e){
            mid = s+(e-s)/2;
            if(arr[mid]==k){
                return true;
            }
            else if(arr[mid]>k){
                e = mid-1;
            }
            else s = mid+1;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna