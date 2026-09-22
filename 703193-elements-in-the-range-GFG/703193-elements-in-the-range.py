class Solution:
    def checkElements(self, start, end, arr):
        # code here
        for i in range(start,end+1):
            if i not in arr:
                return False
        return True        


# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna