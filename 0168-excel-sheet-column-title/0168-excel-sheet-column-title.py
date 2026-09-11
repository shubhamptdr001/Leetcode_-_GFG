class Solution:
    def convertToTitle(self, columnNumber: int) -> str:
        
        ans = ""

        while(columnNumber):
            columnNumber -= 1
            ans = chr((columnNumber)%26 + ord('A')) +ans
            columnNumber //= 26

        return ans        
        

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna