class Solution {
public:
    int n;
    vector<int>t;
    int solve(vector<int>& stoneValue,int i){
        if(i>=n){
            return 0;
        }
        if(t[i] != -1) return t[i];
        int result = stoneValue[i] - solve(stoneValue,i+1);
        if(i+1 < n) result = max(result,stoneValue[i] + stoneValue[i+1] - solve(stoneValue,i+2));
        if(i+2 < n) result = max(result,stoneValue[i] + stoneValue[i+1] + stoneValue[i+2] - solve(stoneValue,i+3));
        return t[i] = result;
    }
    string stoneGameIII(vector<int>& stoneValue) {
        n = stoneValue.size();
        t.resize(n+1,-1);
        int diff = solve(stoneValue,0);
        if(diff >0) return "Alice";
        else if(diff <0) return "Bob";
        return "Tie";
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna