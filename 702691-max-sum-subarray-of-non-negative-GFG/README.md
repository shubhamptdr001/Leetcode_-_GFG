# [Max Sum Subarray of Non-Negative](https://www.geeksforgeeks.org/problems/maximum-sub-array5443/1)
## Medium
Given an array of integers arr[], find the contiguous subarray with the maximum sum that contains only non-negative numbers. 

If multiple subarrays have the same maximum sum return the one with longest length. 
If there is still a tie, return the subarray with the smallest starting index. 
If the array contains only negative numbers, return -1.

Examples:
Input: arr[] = [1, 2, 3, -1, 6]
Output: [1, 2, 3]
Explanation: The valid non-negative subarrays [1, 2, 3] and [6] both have a sum of 6. Since [1, 2, 3] has the longer length, it is selected.

Input: arr[] = [-1, 2]
Output: [2]
Explanation: The only valid non-negative subarray is [2], so the output is [2].
Input: arr[] = [1, 2, 5, -7, 2, 6]
Output: [1, 2, 5]
Explanation: The valid non-negative subarrays are [1, 2, 5] and [2, 6]. Both have the same sum of 8, but [1, 2, 5] starts earlier and also longest one so it is the preferred subarray.