class Solution {
public:
    int countSegments(string s) {
        int count = 0;

        for (int i = 0; i < static_cast<int>(s.size()); i++){
            if (s[i] != ' ' && (i == 0 || s[i - 1] == ' ')){
                count++;
            }
        }
        return count;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna