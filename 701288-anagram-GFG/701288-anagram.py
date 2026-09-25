class Solution:
    def areAnagrams(self, s1, s2):
       # code here
        if len(s1) != len(s2):
           return False
        
        dic1 = {}
        dic2 = {}
        
        for i in range(26):
            dic1[i+ord('a')] = 0
            dic2[i+ord('a')] = 0
            
        for ch in s1:
            dic1[ord(ch)] += 1
        
        for ch in s2:
            dic2[ord(ch)] +=1
        
        return dic1 == dic2    
             

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna