class Solution:
       
    def lcm(self, a, b):
        c = abs(a*b)
        
        while b:
            a,b = b, a%b
            
        return c//a

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna