class Solution:
	def twoSum(self, arr, target):
		seen = {}
        
        for i,x in enumerate(arr):
            req = target-x
            
            if req in seen:
                return True
            
            seen[x] = i
        
        return False    

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna