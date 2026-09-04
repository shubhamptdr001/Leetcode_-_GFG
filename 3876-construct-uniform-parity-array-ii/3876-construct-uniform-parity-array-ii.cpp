class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int n = nums1.size();
        vector<int>even;
        vector<int>odd;
        int i=0,j=0;

        for(auto k:nums1){
            if(k%2==0){
                even.push_back(k);
            }else odd.push_back(k);
        }
        sort(even.begin(),even.end());
        sort(odd.begin(),odd.end());

        int m = even.size();
        int p = odd.size();
        if(m==0 || p==0) return true;
        int l=0;
        for(int k=0;k<m;k++){
            if(!(odd[l] < even[k])){
                return false;
            }
        }
        return true;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna