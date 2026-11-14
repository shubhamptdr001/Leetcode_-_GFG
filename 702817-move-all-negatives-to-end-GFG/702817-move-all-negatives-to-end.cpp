class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        
        int n = arr.size();
        vector<int>temp;
        
        for(auto i:arr){
            if(i>=0)temp.push_back(i);
        }
        
        for(auto i:arr){
            if(i<0)temp.push_back(i);
        }
        arr= temp;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna