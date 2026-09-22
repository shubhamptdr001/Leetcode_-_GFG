class Solution:
    def getAlternates(self, arr):
        # Code Here
        my_list = []
        for idx, val in enumerate(arr):
            if idx % 2 == 0:
                my_list.append(val)
        
        return my_list        
                

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna