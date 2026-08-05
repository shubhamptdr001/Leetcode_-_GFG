class Solution {
  public:
    void helper(vector<vector<int>>& edges,vector<vector<int>>&adj){
        for(auto x:edges){
            adj[x[0]].push_back(x[1]);
            adj[x[1]].push_back(x[0]);
        }
    }
    bool isCycle(int V, vector<vector<int>>& edges) {
        if(V == 1)return false;
        
        vector<vector<int>>adj(V);
        helper(edges,adj);
        
        vector<bool>vis(V,false);
        
        for(int i =0;i<V;i++){
            
            if(vis[i]) continue;
            queue<pair<int,int>>q;
            q.push({i,-1});
            vis[i] = true;
            
            while(!q.empty()){
                auto [node,parent] = q.front();
                q.pop();
                
                for(auto x:adj[node]){
                    if(!vis[x]){
                        vis[x]= true;
                        q.push({x,node});
                    }else if(x != parent){
                        return true;
                    }
                }
            }
            
        }
        return false;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna