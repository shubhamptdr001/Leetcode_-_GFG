class Solution:
    def nextLargerElement(self, arr):
        
        ans = []
        st = []
        
        for i in range(len(arr)-1,-1,-1):
            while not len(st)==0 and st[-1]<=arr[i]:
                st.pop()
            
            if len(st) == 0:
                ans.append(-1)
            else:
                ans.append(st[-1])
            
            st.append(arr[i])
        
        ans.reverse()
        
        return ans    

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna