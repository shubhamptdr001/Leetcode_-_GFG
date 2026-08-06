class Solution {
public:
    bool isBipartite(vector<vector<int>>& graph) {
        // if a graph contain cycle - even nodes = bipartite
        // odd nodes = not bipartite
        // linear graph with no cycle are always - bipartite
        int n = graph.size();
        vector<int>color(n,-1);
        
        for(int start =0;start<n;start++){
             if(color[start]!=-1)
                continue;

            queue<int> q;
            q.push(start);
            color[start]=0;

            while(!q.empty()){
                int node = q.front();
                int c = color[node];
                q.pop();

                for(auto i:graph[node]){
                    
                    if(color[i] == -1){
                        color[i] = !c;
                        q.push(i);
                    }
                    else if(color[i] == c){
                        return false;
                    }
                }
        }
        }
        
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna