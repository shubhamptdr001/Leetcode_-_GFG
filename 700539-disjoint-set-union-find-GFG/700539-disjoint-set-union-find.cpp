class Solution {
    private:
    vector<int>parent,size;
  public:
    int find(int v){
        if(v == parent[v]) return v;
        return parent[v] = find(parent[v]);
    }
    void unionBySize(int u,int v){
        int ulp_u = find(u);
        int ulp_v = find(v);
        
        if(ulp_u == ulp_v) return;
        
         parent[ulp_u] = ulp_v;
    }
    vector<int> DSU(int n, vector<vector<int>>& queries) {
        vector<int>ans;
        parent.resize(n+1);
        size.resize(n+1,1);
        
        for(int i=0;i<=n;i++){
            parent[i] = i;
        }
        
        for(auto &query:queries){
            if(query[0]==2){
                ans.push_back(find(query[1]));
            }
            else if(query[0]==1){
                unionBySize(query[1],query[2]);
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna