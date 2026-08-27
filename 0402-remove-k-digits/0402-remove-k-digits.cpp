class Solution {
public:
    string removeKdigits(string num, int k) {
        int n = num.size();
        stack<char>st;
        string ans = "";

        for(int i=0;i<n;i++){
            while(!st.empty() && st.top() > num[i] && k >0){
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while(k>0 && !st.empty()){
            st.pop();
            k--;
        }
        while(!st.empty()){
            char el = st.top();
            ans += el;
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        int i=0;
        int p = ans.size();
        while(i < p && ans[i] == '0'){
            i++;
        }
        ans = ans.substr(i);
        if(ans.empty()) return "0";
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna