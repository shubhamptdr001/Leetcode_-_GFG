class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n = nums2.size();
        unordered_map<int,int>mp;

        for(int i=0;i<n;i++){
            mp[nums2[i]]=i;
        }
        stack<int>st;
        vector<int>ans;
      
        for(int i=n-1;i>=0;i--){
            while(!st.empty() && st.top()<nums2[i]){
                st.pop();
            }
            if(!st.empty())ans.push_back(st.top());
            else ans.push_back(-1);
            st.push(nums2[i]);
        }
        reverse(ans.begin(),ans.end());

        vector<int>res;
        for(auto i:nums1){
            
            res.push_back(ans[mp[i]]);
        }
        return res;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna