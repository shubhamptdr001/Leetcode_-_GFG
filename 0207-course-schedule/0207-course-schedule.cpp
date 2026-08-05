class Solution {
public:
    bool dfs(int node, vector<vector<int>>&adj,vector<bool>&vis,vector<bool>&pathvis){
        vis[node] = true;
        pathvis[node] =true;

        for(auto neigh:adj[node]){
            if(!vis[neigh]){
                if(dfs(neigh,adj,vis,pathvis)){
                    return true;
                }
            }else if(pathvis[neigh]) return true;
        }
        pathvis[node] = false;
        return false;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>>adj(numCourses);

        for(auto &x : prerequisites){
            adj[x[1]].push_back(x[0]);
        }

        vector<bool>vis(numCourses,false);
        vector<bool>pathvis(numCourses,false);

        for(int i =0;i<numCourses;i++){

            if(!vis[i]){
                if(dfs(i,adj,vis,pathvis)){
                    return false;
                }
            }
        }
        
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna