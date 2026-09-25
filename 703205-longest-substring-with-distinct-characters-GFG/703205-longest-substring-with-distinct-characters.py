class Solution:
    def longestUniqueSubstr(self, s):
        
        seen = set()
        ans = -1
        left = 0
        
        for right in range(len(s)):
            while s[right] in seen:
                seen.remove(s[left])
                left+=1
                
            seen.add(s[right])
            ans = max(right-left+1,ans)
        return ans    
                
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna