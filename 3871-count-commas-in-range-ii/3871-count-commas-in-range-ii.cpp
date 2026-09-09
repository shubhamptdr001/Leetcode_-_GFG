class Solution {
public:
    long long countCommas(long long n) {
        long long commas = 0;
       if (n >= 1000) commas += (n - 999);
        if (n >= 1000000) commas += (n - 999999);
        if (n >= 1000000000) commas += (n - 999999999);
        if (n >= 1000000000000LL) commas += (n - 999999999999LL);
        if (n >= 1000000000000000LL) commas += (n - 999999999999999LL);
        return commas;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna