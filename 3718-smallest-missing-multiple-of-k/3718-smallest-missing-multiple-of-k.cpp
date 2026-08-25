class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        set<int>st;
        st.insert(nums.begin(),nums.end());
        int ans = -1;
        int i=1;
        while(i<=100){
            if(st.find(k*i) == st.end()){
                ans = k*i;
                break;
            }
            i++;
        }
        return (ans != -1) ? ans : k*i;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna