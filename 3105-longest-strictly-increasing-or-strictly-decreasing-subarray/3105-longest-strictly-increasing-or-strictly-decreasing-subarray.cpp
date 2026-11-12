class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int size=nums.size();
        if(size==1) return 1;
         int c1=1,c2=1,maxi1=1,maxi2=1;
        for(int i=0;i<size-1;i++){
           
             if(nums[i]>nums[i+1]){
                c1+=1;
                 maxi1=max(maxi1,c1);
                 c2=1;
             }
              if(nums[i]<nums[i+1]){
                c2+=1;
                maxi2=max(maxi2,c2);
                c1=1;
             }   
             if(nums[i]==nums[i+1]){
                maxi1=max(maxi1,c1);
                 maxi2=max(maxi2,c2);
                 c1=1;
                 c2=1;
             }
        }
        int maxim=max(maxi1,maxi2);
        return maxim;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna