class Solution:
    def smallestIndex(self, nums: List[int]) -> int:
        
        for i in range(len(nums)):
            
            if nums[i]>9:
                res = 0
                while nums[i]>0:
                    rem  = nums[i]%10
                    res += rem
                    nums[i] = nums[i] // 10
                nums[i] = res
            if nums[i]==i:
                return i
        return -1                    

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna