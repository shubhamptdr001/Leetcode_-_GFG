class Solution {
  public:
    bool check(vector<int>&arr, long long wall,int k){
        int n = arr.size();
        long long total = arr[0];
        int cnt = 0;
        for(int i=1;i<n;i++){
            if(total + arr[i] <= wall){
                total += arr[i];
            }else{
                cnt++;
                total = arr[i];
            }
            if(cnt >= k){
                return true;
            }
        }
        return false;
    }
    int minTime(vector<int>& arr, int k) {
       int n = arr.size();
       
       long long s = 0;
       long long e =0;
       
       for(int i=0;i<n;i++)
       {
           if(s<arr[i]){
               s = arr[i];
           }
           e += arr[i];
       }
       
       long long mid = s+(e-s)/2;
       while(s<=e){
           mid = s+(e-s)/2;
           if(check(arr,mid,k)){
               s = mid+1;
           }else{
               e = mid-1;
           }
       }
       return s;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna