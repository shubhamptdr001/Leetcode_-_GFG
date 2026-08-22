class Solution {
public:
    bool checkDivisibility(int n) {
        int dsum = 0;
        int pro = 1;
        int k = n;
        while(n){
            int rem = n%10;
            dsum += rem;
            pro *= rem;
            n = n/10 ;
        }
        int finalsum = dsum + pro;
        if(k % finalsum == 0) return true;
        return false;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna