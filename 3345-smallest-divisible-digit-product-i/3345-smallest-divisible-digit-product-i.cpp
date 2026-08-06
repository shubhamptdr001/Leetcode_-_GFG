class Solution {
public:
    int proofdig(int i){
        int ans =1;
        while(i){
            ans = ans * (i%10);
            i /= 10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        
        int small=n;
        for(int i = n;i<=100;i++){
            if(i >= n && proofdig(i)%t==0){
                small = i;
                break;
            }
        }
        return small;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna