class Solution:
    def longIncSubArr(self, arr):
        
        maxlen = 1
        i = 0
        f =0
        s =1
        
        for j in range(1,len(arr)):
            
            if arr[j-1] >= arr[j]:
                i=j
            
            curr = j-i+1    
            if curr > maxlen:
                maxlen = curr
                f = i
                s = j+1
                
                
        return arr[f:s]   

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna