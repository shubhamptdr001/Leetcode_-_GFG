class Solution {
public:
    int findCheapestPrice(int n, vector<vector<int>>& flights, int src, int dst, int k) {
        vector<vector<pair<int,int>>>adj(n);

        for(auto i:flights){
            adj[i[0]].push_back({i[1],i[2]}); // src -> {dst,val} and directed
        }
        vector<int>dist(n,INT_MAX);
        queue<pair<int,int>>q;  // {cost,{node,d}}
        dist[src] = 0;
        q.push({src,0});

       int stops = 0;
        while(!q.empty() && stops <= k) {
            int size = q.size();
            vector<int> temp = dist;

            while(size--) {
                auto [node, cost] = q.front();
                q.pop();
                for(auto [next, price] : adj[node]) {
                    int newCost = cost + price;
                    if(newCost < temp[next]) {
                        temp[next] = newCost;
                        q.push({next,newCost});
                    }
                }
            }
            dist = temp;
            stops++;
        }

        return dist[dst] == INT_MAX ? -1 : dist[dst];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna