class Solution {
  public:
    int ub(vector<int>& nums, int target){
        int s = 0;
        int e = nums.size()-1;
        
        int ans = nums.size();

        while(s<=e){
            int mid = s+(e-s)/2;

            if(nums[mid]<=target){
                s = mid+1;
                
            }else{
                ans = mid;
                e = mid-1;
            }
        }
        return ans;
    }
    int blackbox(vector<vector<int>> &mat,int target){
        int cnt = 0;
        int n = mat.size();
        for(int i=0;i<n;i++){
            cnt += ub(mat[i],target);
        }
        return cnt;
    }
    int median(vector<vector<int>> &mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int s =mat[0][0];
        int e =mat[n-1][m-1];
        
        for(int i =0;i<n;i++){
            for(int j = 0;j<m;j++){
                s = min(s,mat[i][j]);
                e = max(e,mat[i][j]);
            }
        }
        
        int required = (n * m) / 2 + 1;
        while(s<=e){
            int mid = s+(e-s)/2;
            int sm = blackbox(mat,mid);
            if(sm >= required){
                 e = mid-1;
                
            }else{
               s = mid+1;
            }
        }
        return s;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna