class Solution:
    def missingNum(self, arr):
        n = len(arr)+1
        
        curr_sum = sum(arr)
        total = ((n*(n+1))//2)
        
        return total - curr_sum

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna