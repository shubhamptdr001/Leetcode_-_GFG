class Solution {
    private:
    vector<int>parent;
public:
    int finduparent(int node){
        if(parent[node] == node) return node;
        return parent[node] = finduparent(parent[node]);
    }
    void unionby(int u,int v){
        int ulp_u = finduparent(u);
        int ulp_v = finduparent(v);
        if(ulp_u == ulp_v)return;

        parent[ulp_v] = ulp_u;
    }
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(connections.size() < n-1) return -1;
        parent.resize(n);

        for(int i=0;i<n;i++) parent[i] = i;

        for(auto &conn: connections){
            unionby(conn[0],conn[1]);
        }
        int components =0;
        for(int i=0;i<n;i++){
            if(parent[i]==i) components++;
        }
        return components-1;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna