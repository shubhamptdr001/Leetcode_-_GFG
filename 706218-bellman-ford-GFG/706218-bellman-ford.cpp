class Solution {
  public:
    vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
        vector<int>dist(V,1e8);
        dist[src]=0;
        
        for(int i=0;i<V-1;i++){
            for(auto &edge:edges){
                int u = edge[0];
                int v = edge[1];
                int weight = edge[2];
                
                if(dist[u] != 1e8 && dist[u] + weight < dist[v]){
                    dist[v] = dist[u] + weight;
                }
            }
        }
        for(auto &edge:edges){
            int u = edge[0];
            int v = edge[1];
            int weight = edge[2];
            
            if(dist[u] != 1e8 && dist[u] + weight < dist[v]){
                return {-1};
            }
        }
        return dist;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna