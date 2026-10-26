class Solution {
public:
    void dfs(vector<vector<int>>& grid,int row,int col){
        int m = grid.size();
        int n = grid[0].size();

        if(row<0 || col<0 || row>=m ||col >=n || grid[row][col]==1){
            return;
        }

        grid[row][col] = 1;

        dfs(grid,row-1,col);
        dfs(grid,row,col-1);
        dfs(grid,row+1,col);
        dfs(grid,row,col+1);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();

        for(int i=0;i<m;i++){
            dfs(grid,i,0);
            dfs(grid,i,n-1);
        }

        for(int j =0;j<n;j++){
            dfs(grid,0,j);
            dfs(grid,m-1,j);
        }
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0){
                    cnt++;
                    dfs(grid,i,j);
                }
            }
        }
        return cnt;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna