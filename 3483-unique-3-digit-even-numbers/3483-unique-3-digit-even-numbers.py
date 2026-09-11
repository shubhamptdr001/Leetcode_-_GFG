class Solution:
    def totalNumbers(self, digits: List[int]) -> int:
        ans = set()

        for i in range(len(digits)):
            if digits[i]==0:
                continue
            for j in range(len(digits)):
                for k in range(len(digits)):
                    p = (digits[i]*100) + (digits[j]*10)
                    if i != j and j != k and k != i and digits[k]%2==0:
                        p = p + digits[k]       
                        ans.add(p)

        return len(ans);            

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna