class Solution:
    def fibonacciNumbers(self, n: int) -> list[int]:
        # code here
        ans = []
        
        x = 0
        y = 1
        if(n-1>=0): ans.append(0)
        if(n-1>=1): ans.append(1)
        for i in range(3,n+1):
            k = x+y
            ans.append(k)
            x = y
            y = k
            
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna