class Solution:
    def isPrime(self, n):
        if n==1:
            return False
        
        for i in range(2,(n//2)+1):
            if n%i==0:
                return False
        
        return True        
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna