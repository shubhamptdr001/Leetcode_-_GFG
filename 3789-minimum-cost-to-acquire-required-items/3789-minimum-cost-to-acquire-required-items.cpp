class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long combine = 1LL * need1 * cost1 + 1LL* need2 * cost2;
        long long common = min(need1,need2);
        long long remain = 0;

        if(need1>need2){
            remain = 1LL*(need1-need2)*cost1;
        }else{
            remain = 1LL * (need2-need1)*cost2;
        }

        long long partial = 1LL * common * costBoth + remain;
        long long both = 1LL * max(need1,need2)*costBoth;

        return min({combine,partial,both});
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna