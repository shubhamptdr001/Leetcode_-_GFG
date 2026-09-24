class Solution:
    def rotateArr(self, arr, d):
        n = len(arr)
        
        d %= n
        
        arr[:d] = reversed(arr[:d])
        arr[d:n] = reversed(arr[d:n])
        arr[:] = reversed(arr[:])
        
        
            

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna