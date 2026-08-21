class DisjointSet{
    vector<int>parent;
    public:
    DisjointSet(int n){
        parent.resize(n+1);
        for(int i=0;i<=n;i++) parent[i] = i;
    }

    int findUparent(int node){
        if(node == parent[node]) return node;
        return parent[node] = findUparent(parent[node]);
    }
    void builtParent(int u,int v){
        int ulp_u = findUparent(u);
        int ulp_v = findUparent(v);

        if(ulp_u == ulp_v) return;
        parent[ulp_v] = ulp_u;
    }
};
class Solution {
public:
    int removeStones(vector<vector<int>>& stones) {
        int maxRow = 0;
        int maxCol = 0;

        for(auto i:stones){
            maxRow = max(maxRow,i[0]);
            maxCol = max(maxCol,i[1]);
        }

        DisjointSet ds(maxRow + maxCol + 2);
        unordered_map<int, int>mp;
        for(auto stone:stones){
            int stoneRow = stone[0]; 
            int stoneCol = stone[1] + maxRow + 1;
            ds.builtParent(stoneRow,stoneCol);

            mp[stoneRow] =1;
            mp[stoneCol] =1;
        }
        int cnt =0;
        for(auto &i:mp){
            if(ds.findUparent(i.first) == i.first) cnt++;
        }
        return stones.size()-cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna