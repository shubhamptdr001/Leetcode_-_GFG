class Solution {
public:
void solve(int n,int open,int close,vector<string>&s,string ans){
    if(ans.size()==2*n){
        s.push_back(ans);
        return;
    }
    if(open < n) solve(n,open+1,close,s,ans+"(");
    if(open>close) solve(n,open,close+1,s,ans+")");
}
    vector<string> generateParenthesis(int n) {
        vector<string>s;
        solve(n,0,0,s,"");
        return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna