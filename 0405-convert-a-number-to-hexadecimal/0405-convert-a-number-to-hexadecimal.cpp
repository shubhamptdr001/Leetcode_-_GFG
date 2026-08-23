class Solution {
public:
    string toHex(int num) {
        if(num == 0) return to_string(0);
        unsigned int n = num;
        string s="";
        string digit = "0123456789abcdef";
        while(n){
            int rem = n % 16;
            s = digit[rem] + s;
            n /= 16;
        }
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna