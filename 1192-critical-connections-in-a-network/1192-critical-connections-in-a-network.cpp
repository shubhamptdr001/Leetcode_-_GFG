class Solution {
    private:
    int timer =1;
    private:
    void dfs(int node,int parent,vector<int>adj[],vector<int>&tin,vector<int>&low,vector<int>&vis,vector<vector<int>>&bridges){
        vis[node] =1;
        tin[node] = low[node] = timer;
        timer++;
        for(auto it:adj[node]){
            if(it == parent) continue;
            if(vis[it] == 0){
                dfs(it,node,adj,tin,low,vis,bridges);
                low[node] = min(low[node],low[it]);

                if(low[it] > tin[node]){
                    bridges.push_back({it,node});
                }
            }else {
                    low[node] = min(low[node],tin[it]);
                }
        }
    }
public:
    
    vector<vector<int>> criticalConnections(int n, vector<vector<int>>& connections) {
        vector<vector<int>>bridges;

        vector<int>adj[n];
        for(auto it:connections){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
       
        vector<int>vis(n,0);
        vector<int>tin(n,0);
        vector<int>low(n,0);

        dfs(0,-1,adj,tin,low,vis,bridges);
        return bridges;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna