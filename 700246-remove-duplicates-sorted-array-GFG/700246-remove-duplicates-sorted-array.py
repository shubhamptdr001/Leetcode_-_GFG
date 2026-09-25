class Solution:
    def removeDuplicates(self, arr):
        if not arr:
            return []
        li = [arr[0]]
        
        
        for i in range(1,len(arr)):
            
            if arr[i]!=arr[i-1]:
                li.append(arr[i])
               
        return li    
                
                
                

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna