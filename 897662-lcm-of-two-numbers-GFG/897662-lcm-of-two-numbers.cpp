class Solution {
  public:
    int lcm(int a, int b) {
        
        for(int i=1;i>0;i++){
            if(i%a==0 && i%b==0){
                return i;
            }
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna