class Solution:

    def reverseInGroups(self, arr, k):
        """code here"""
        ans = []
        temp = []
        for i in range(len(arr)):
            temp.append(arr[i])
            if(len(temp)==k or i==len(arr)-1):
                ans.extend(temp[::-1])
                temp.clear()
        arr[:] = ans
        return arr
         

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna