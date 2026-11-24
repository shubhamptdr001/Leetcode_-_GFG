class Solution {
public:
    long long custom_gcd(long long a,long long b){
        while (b != 0) {
            long long temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
    int custom_lcm(long long a,long long b){
        if(a==0 || b==0)return 0;

        return (a/custom_gcd(a,b))*b;
    }
    int maxLength(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        long long overall_lcm = 1;
        long long max_val = 0;
        for (int x : nums) {
            overall_lcm = custom_lcm(overall_lcm, x);
            max_val = max(max_val, (long long)x);
        }
        long long max_p = overall_lcm * max_val;

        for (int i = 0; i < n; ++i) {
            long long prod = 1;
            long long g = 0;
            long long l = 1;

            for (int j = i; j < n; ++j) {
                prod *= nums[j];
                g = custom_gcd(g, nums[j]);
                l = custom_lcm(l, nums[j]);

                if (prod == l * g) {
                    ans = max(ans, j - i + 1);
                }

                if (prod > max_p) break;
            }
        }

        return ans;

    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna