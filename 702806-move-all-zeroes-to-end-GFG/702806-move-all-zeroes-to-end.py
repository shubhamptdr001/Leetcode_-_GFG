class Solution:
	def pushZerosToEnd(self, arr):
    	# code here
    	i = 0 
    	j = 1
    	while(j<len(arr)):
    	    while(j<len(arr) and arr[i]==0 and arr[j]==0):
    	        j+=1
    	    if j>=len(arr):
    	        break 
    	    if arr[i]==0 and arr[j]!=0:
    	        arr[i] = arr[j]
    	        arr[j] =0
    	        i+=1
    	        j+=1
    	    else:
    	        i+=1
    	        j+=1
    	        
    	         

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna