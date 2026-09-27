class Solution:
    def maxSubarraySum(self, arr):
        c_sum = 0
        max_sum = float('-inf')
        for i in range(len(arr)):
            c_sum += arr[i]
            
            max_sum = max(max_sum,c_sum)
            if(c_sum<0):
                c_sum =0
            
        return max_sum    

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna