class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        const long long MOD = 1e9+7;
        vector<vector<pair<int,int>>>adj(n);

        for(auto i:roads){
            adj[i[0]].push_back({i[1],i[2]});
            adj[i[1]].push_back({i[0],i[2]});
        }
        vector<long long>dist(n,LLONG_MAX);
        vector<long long> ways(n);
        ways[0] = 1;
        dist[0] = 0;
        priority_queue<pair<long long,long long>,vector<pair<long long,long long>>,greater<pair<long long,long long>>>pq;
        pq.push({0,0});
        
        while(!pq.empty()){
            auto [d,u] = pq.top();
            pq.pop();

            if(d != dist[u]) continue;
            for(auto [v,w]:adj[u]){
                long long newcost = w+d;
                if(dist[v] > newcost){
                     dist[v] = newcost;
                     ways[v] = ways[u];
                     pq.push({newcost,v});
                }
                else if(newcost == dist[v]){
                    ways[v] = (ways[v]+ways[u])%MOD;
                }
            }
        }
        return ways[n-1];
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna