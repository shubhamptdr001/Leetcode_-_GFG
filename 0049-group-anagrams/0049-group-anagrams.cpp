class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>mp;

        for(int i=0;i<strs.size();i++){
            multiset<char>st;
            string s = strs[i];
            for(char j:s){
                st.insert(j);
            }
            string ans ="";
            for(char c:st){
                ans+=c;
            }
            mp[ans].push_back(s);
        }
        vector<vector<string>>a;
        for(auto k:mp){
            vector<string>b = k.second;
            a.push_back(b);
        }
        return a;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna