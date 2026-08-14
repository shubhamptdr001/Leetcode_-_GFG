class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        int j =0;
        
        for(int i=0;i<arr.size();i++){
            if(arr[i] !=0){
                swap(arr[i],arr[j]);
                j++;
            }
        }
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna