class Solution {
public:
    bool dfs(int node, vector<vector<int>>& graph,vector<int>&vis){
        
        if(vis[node] == 1){
            return false;
        }
        if(vis[node] == 2){
            return true;
        }
        vis[node] =1;
        for(auto i:graph[node]){
            if(!dfs(i,graph,vis)){
                return false;
            }
        }
        vis[node] = 2;
        return true;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        vector<int>vis(n,0);
       
        vector<int>ans;
        for(int i=0;i<n;i++){
                if(dfs(i,graph,vis)) 
                {
                    ans.push_back(i);
                }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna