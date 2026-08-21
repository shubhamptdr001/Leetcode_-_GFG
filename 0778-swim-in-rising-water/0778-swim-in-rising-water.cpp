class Solution {
public:
    int swimInWater(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<vector<int>>dist(n,vector<int>(n, INT_MAX)); 
        vector<vector<int>>directions ={{1,0},{-1,0},{0,1},{0,-1}};
    
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        pq.push({grid[0][0], 0, 0});
        dist[0][0] = grid[0][0];
        
        while(!pq.empty()) {
            auto top = pq.top(); pq.pop();
            int t = top[0],r = top[1],c = top[2];
            
            if(r ==n-1 && c == n-1) return t;
            
            for(auto &dir : directions) {
                int nr = r + dir[0], nc = c + dir[1];
                if(nr >=0 && nc >=0 && nr <n && nc <n){
                    int newTime = max(t, grid[nr][nc]);
                    if(newTime < dist[nr][nc]) {
                        dist[nr][nc] = newTime;
                        pq.push({newTime, nr, nc});
                    }
                }
            }
        }
        return -1; 
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna