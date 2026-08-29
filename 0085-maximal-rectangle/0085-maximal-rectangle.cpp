class Solution {
public:
     vector<int> findnse(vector<int>&height){
        int n = height.size();
        vector<int>ans(n);
        stack<int>st;
        for(int j=n-1;j>=0;j--){
            while(!st.empty() && height[st.top()] >= height[j]){
                st.pop();
            }
            ans[j] = st.empty() ? n : st.top();
            st.push(j);
        }
        return ans;
    }
    vector<int> findpse(vector<int>&height){
        int n = height.size();
        vector<int>ans(n);
        stack<int>st;
        for(int j=0;j<n;j++){
            while(!st.empty() && height[st.top()] > height[j]){
                st.pop();
            }
           ans[j] = st.empty() ? -1 : st.top();
           st.push(j);
        }
        return ans;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int ans = 0;
         
         vector<int>height(m,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(matrix[i][j]=='1'){
                    height[j] +=1;
                }else{
                    height[j] = 0;
                }
            }
            vector<int>nse = findnse(height);
            vector<int>pse = findpse(height);
            for(int j=0;j<m;j++){
                int width = nse[j]-pse[j]-1;
                ans = max(ans,height[j] * width);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna