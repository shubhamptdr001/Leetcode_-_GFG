class DisjointSet{
    
    public:
    vector<int>parent,size;
    DisjointSet(int n){
        parent.resize(n+1);
        size.resize(n+1,1);
        for(int i=0;i<=n;i++) parent[i] = i;
    }

    int findUparent(int node){
        if(node == parent[node]) return node;
        return parent[node] = findUparent(parent[node]);
    }
    
    void unionBySize(int u,int v){
        int ulp_u = findUparent(u);
        int ulp_v = findUparent(v);

        if(ulp_u == ulp_v) return;

        if(size[ulp_u] < size[ulp_v]){
            parent[ulp_u] = ulp_v;
            size[ulp_v] += size[ulp_u];
        }else{
            parent[ulp_v] = ulp_u;
            size[ulp_u] += size[ulp_v];
        }
    }
};
class Solution {
    private:
    bool check(int r,int c,int n,int m){
        return (r>=0 && c>=0 && r<n && c<m);
    }
public:
    int largestIsland(vector<vector<int>>& grid) {
        int n = grid.size();

        DisjointSet ds(n*n);

        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j] == 0) continue;
                int nrow[4] = {-1,0,1,0};
                int ncol[4] = {0,-1,0,1};

                for(int k=0;k<4;k++){
                    int adjr = i + nrow[k];
                    int adjc = j + ncol[k];

                    if(check(adjr,adjc,n,n) && grid[adjr][adjc] == 1){
                        int Nodeno = i * n + j;
                        int adjNodeno = adjr * n + adjc;
                        ds.unionBySize(Nodeno,adjNodeno);
                    }
                } 
            }
        }
        int mx =1;
        bool hasone = false;
        for(int i=0;i<n;i++){
            for(int j =0;j<n;j++){
                if(grid[i][j] == 1){
                    hasone = true;
                    continue;
                }    
                int nrow[4] = {-1,0,1,0};
                int ncol[4] = {0,-1,0,1};
                set<int>com;
                for(int k=0;k<4;k++){
                    int adjr = i + nrow[k];
                    int adjc = j + ncol[k];

                    if(check(adjr,adjc,n,n)){
                        if(grid[adjr][adjc] == 1){
                            com.insert(ds.findUparent(adjr * n + adjc));
                        }
                    }
                } 

                int mxsize =0;
                for(auto it:com){
                    mxsize += ds.size[it];
                }
                mx = max(mx,mxsize+1);
            }
        }
        if(mx == 1 && hasone) return n*n;
        return mx;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna