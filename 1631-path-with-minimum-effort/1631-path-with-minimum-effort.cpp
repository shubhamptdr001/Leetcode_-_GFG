class Solution {
public:
    int minimumEffortPath(vector<vector<int>>& heights) {
        int m = heights.size();
        int n = heights[0].size();

        vector<vector<int>>dist(m,vector<int>(n,INT_MAX));
        priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>>pq;
        pq.push({0,{0,0}});
        dist[0][0] =0;

        int row[4] = {0,-1,0,1};
        int col[4] = {1,0,-1,0};
        while(!pq.empty()){
            int r = pq.top().second.first;
            int c = pq.top().second.second;
            int val = pq.top().first;
            
            pq.pop();
            if(val > dist[r][c]) continue;
            if(r == m-1 && c == n-1)return val;
            
            for(int i=0;i<4;i++){
                int nrow = r+row[i];
                int ncol = c+col[i];
                
                if(nrow>=0 && nrow<m && ncol>=0 && ncol<n){
                    int edge = abs(heights[r][c]-heights[nrow][ncol]);
                    int newval = max(edge,val);
                    if(newval < dist[nrow][ncol]){
                        dist[nrow][ncol] = newval;
                        pq.push({newval,{nrow,ncol}});
                    }
                }
            }

        }
        return -1;;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna