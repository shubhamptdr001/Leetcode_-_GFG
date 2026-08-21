class DisjointSet{
    vector<int>parent,size;
    public:
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
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        
        int n = accounts.size();
        DisjointSet ds(n);
        unordered_map<string,int>map;

        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail = accounts[i][j];
                if(map.find(mail) == map.end()){
                    map[mail] = i;
                }
                else{
                    ds.unionBySize(i,map[mail]);
                }
            }
        }
        vector<string> mergemail[n];

        for(auto it: map){
            string mail = it.first;
            int node = ds.findUparent(it.second);
            mergemail[node].push_back(mail);
        }
        vector<vector<string>> ans;

        for(int i=0;i<n;i++){
            if(mergemail[i].size() == 0) continue;
            sort(mergemail[i].begin(),mergemail[i].end());
            vector<string>temp;
            temp.push_back(accounts[i][0]);
            for(auto it:mergemail[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna