class Solution:
    # Function to find the subarray with the maximum sum
    def findSubarray(self, arr):
    	# code here
    	 
    	 total = -1
    	 curr_sum = 0
    	 res = []
    	 fres = []
    	 
    	 for num in arr:
    	     
    	     if num<0:
    	         curr_sum = 0
    	         res =[]
    	     else:
    	         curr_sum += num
    	         res.append(num)
    	         
    	         if curr_sum > total:
    	             total = curr_sum
    	             fres = res[:]
    	         elif curr_sum == total:
    	             if len(fres) < len(res):
    	                 fres = res[:]
    	  
    	 if total == -1:
    	      return [-1]
    	 
    	 return fres    

# Synced seamlessly with LeetHub Pro
# Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
# Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna