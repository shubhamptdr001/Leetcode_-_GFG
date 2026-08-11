class Solution {
  public:
    bool isPS(long long n){
        long long r = sqrt(n);
        return r*r == n;
    }
    bool isFibonacci(int n) {
        if(n<0)return false;
        long long sqr = 1LL * n * n;
        
        return isPS(5 * sqr - 4) || isPS(5*sqr+4);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna