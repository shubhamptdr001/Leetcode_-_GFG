class Solution:
    def firstSearch(self, arr, k):
        for i in range(len(arr)):
            if arr[i] == k:
                return i
        
        return -1        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna