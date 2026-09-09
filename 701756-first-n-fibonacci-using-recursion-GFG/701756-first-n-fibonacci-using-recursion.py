class Solution:
    def fibonacciNumbers(self, n: int) -> list[int]:
        # code here
        if n == 1:
            return [0]
        if n ==2:
            return [0,1]
            
        ans = self.fibonacciNumbers(n-1)
        
        next_fib = ans[-1] + ans[-2]
        ans.append(next_fib)
            
        return ans

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna