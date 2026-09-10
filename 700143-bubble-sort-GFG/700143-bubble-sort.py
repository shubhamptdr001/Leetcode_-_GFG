class Solution:
    def bubbleSort(self,arr):
        # code here
        
        for i in range(0,len(arr)):
            for j in range(i+1,len(arr)):
                if arr[i] > arr[j]:
                    temp = arr[j]
                    arr[j] = arr[i]
                    arr[i] = temp
        
        return arr            
                

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna