# [Longest Increasing Subarray](https://www.geeksforgeeks.org/problems/longest-increasing-subarray3811/1)
## Easy
Given an array arr[] of integers. Find the longest contiguous subarray in which each element is strictly greater than the one before it. If multiple subarrays have the same maximum length, return the first one.
Examples: 
Input: arr[] = [5, 6, 3, 5, 7, 8, 9, 1, 2]Output: [3, 5, 7, 8, 9]
Explanation: here the subarray arr[2:6] = [3, 5, 7, 8, 9] is longest subarray to follow strictly increasing order.
Input: arr[] = [12, 13, 1, 5, 4, 7, 8, 10, 10, 11]
Output: [4, 7, 8, 10]
Explanation: here the subarray arr[4:7] = [4, 7, 8, 10] is longest subarray to follow strictly increasing order.
Constraints: 1 ≤ arr.size() ≤ 1051 ≤ arr[i] ≤ 105