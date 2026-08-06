class Solution {
  public:
    void dfs(vector<vector<char>>& grid,int i,int j){
        int n = grid.size();
        int m = grid[0].size();
        
        if(i<0 || i>=n || j<0 || j>= m || grid[i][j] == 'W'){
            return;
        }
        
        grid[i][j] = 'W';
        
        dfs(grid,i,j-1);
        dfs(grid,i+1,j+1);
        dfs(grid,i-1,j-1);
        dfs(grid,i-1,j+1);
        dfs(grid,i+1,j-1);
        dfs(grid,i,j+1);
        dfs(grid,i-1,j);
        dfs(grid,i+1,j);
    }
    int countIslands(vector<vector<char>>& grid) {
        
        int n = grid.size();
        int m = grid[0].size();
        
        int islands = 0;
        
        for(int i=0;i<n;i++){
            for(int j =0;j<m;j++){
                if(grid[i][j] == 'L'){
                    islands++;
                    dfs(grid,i,j);
                }
            }
        }
        return islands;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna