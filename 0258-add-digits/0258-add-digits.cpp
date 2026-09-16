class Solution {
public:
    int addDigits(int num) {
        if(num/10 == 0) return num;
        int n = 0;
        while(num){
            n += num%10;
            num /= 10;
        }
        return addDigits(n);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna