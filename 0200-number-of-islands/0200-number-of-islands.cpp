class Solution {
public:
    void bfs(vector<vector<char>>& grid,int &i,int &j,vector<vector<int>>&vis){
        vis[i][j] =1;
        queue<pair<int ,int>>q;
        q.push({i,j});
        int n = grid.size();
        int m = grid[0].size();

        while(!q.empty()){
            int row = q.front().first;
            int col = q.front().second;

            q.pop();
            int nrow[4] = {0,-1,0,1};
            int ncol[4] = {-1,0,1,0};

            for(int k=0;k<4;k++){
                int nr = row+nrow[k];
                int nc = col+ncol[k];

                if(nr>=0 && nr<n && nc>=0 && nc < m && grid[nr][nc] == '1' && !vis[nr][nc]){
                    q.push({nr,nc});
                    vis[nr][nc] =1;
                }
            }
        }
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int cnt =0;
        vector<vector<int>>vis(n,vector<int>(m,0));

        for(int i =0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == '1' && !vis[i][j]){
                    cnt++;
                    bfs(grid,i,j,vis);
                }
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna