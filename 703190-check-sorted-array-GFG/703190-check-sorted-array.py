class Solution:
    def isSorted(self, arr):
        for i in range(len(arr)-1):
            if arr[i+1] < arr[i]:
                return False
        
        return True        
            

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna