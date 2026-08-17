class Solution {
  public:
    int findMaxValue(vector<vector<int>>& mat) {
        int n = mat.size();
        
        int maxi = INT_MIN;
        
       for(int i=n-1;i>=0;i--){
           for(int j=n-1;j>=0;j--){
               if(i+1<n && j+1<n){
                   maxi = max(maxi,mat[i+1][j+1]-mat[i][j]);
               }
               if(i+1<n) mat[i][j] = max(mat[i][j],mat[i+1][j]);
               if(j+1<n) mat[i][j] = max(mat[i][j],mat[i][j+1]);
           }
       }
        return maxi;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna