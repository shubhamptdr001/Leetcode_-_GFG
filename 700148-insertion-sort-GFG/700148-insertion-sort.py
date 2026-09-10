class Solution:
    def insertionSort(self, arr):
        
        for i in range(1,len(arr)):
            curr = arr[i]
            prev = i-1
            while(prev >=0 and arr[prev] > curr):
                arr[prev+1] = arr[prev]
                prev -=1
            arr[prev+1] = curr
        
        return arr    

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna