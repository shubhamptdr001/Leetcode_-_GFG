class Solution {
  public:
    int shortestPath(int V, vector<vector<int>> &edges, int src, int dest) {
        vector<int>adj[V];

        for(auto i:edges){
            adj[i[1]].push_back(i[0]);
            adj[i[0]].push_back(i[1]);
        }
        vector<int>dist(V,INT_MAX);
        
        queue<int>q;
        q.push(src);
        dist[src] =0;

        while(!q.empty()){
            int node = q.front();
            q.pop();
            
            for(auto neigh: adj[node]){
                if(dist[node]+1<dist[neigh]){
                    dist[neigh] = dist[node]+1;
                    q.push(neigh);
                }
            }
        }
        vector<int>ans(V,-1);
        for(int i=0;i<V;i++){
            if(dist[i] != INT_MAX){
                ans[i] = dist[i];
            }
        }
        return ans[dest];
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna