class Solution {
  public:
    long long int nthPosition(long long int n) {
        
        long long int p = 1;
        while(p*2 <= n){
            p *= 2;
        }
        return p;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna