class Solution {
public:
    vector<int> validSequence(string word1, string word2) {
       int n = word1.size();
        int m = word2.size();

        vector<int> suffix(m + 1, n);

        int j = m - 1;

        for (int i = n - 1; i >= 0 && j >= 0; i--) {
            if (word1[i] == word2[j]) {
                suffix[j] = i;
                j--;
            }
        }

        vector<int> ans;
        int k = 0;
        bool changed = false;

        for (int i = 0; i < n && k < m; i++) {
            if (word1[i] == word2[k]) {
                ans.push_back(i);
                k++;
            }
            else if (!changed) {
                if (k + 1 == m ||
                    (suffix[k + 1] != n && suffix[k + 1] > i)) {
                    ans.push_back(i);
                    changed = true;
                    k++;
                }
            }
        }

        if (k == m) {
            return ans;
        }

        return {};
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna