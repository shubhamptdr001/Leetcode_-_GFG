class Solution:
    def ispal(self,n):
        s = str(n)
        i,j = 0,len(s)-1
        while i<j:
            if s[i] != s[j]:
                return False
            i += 1
            j -= 1
        return True        
        
    def isPalinArray(self, arr):
         # code here
         for i in arr:
             if not self.ispal(i):
                 return False
         
         return True         
                 

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna