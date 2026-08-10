class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        int left =0;
        int right = arr.size()-1;
        while(left<right){
            
            int sum = arr[left]+arr[right];
            
            if(sum == target) return true;
            
            if(sum > target) right--;
            else left++;
        }
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna