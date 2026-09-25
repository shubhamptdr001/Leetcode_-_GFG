# [Max Subarray Sum by Removing At Most One](https://www.geeksforgeeks.org/problems/max-sum-subarray-by-removing-at-most-one-element/1)
## Medium
Given an array&nbsp;arr[], find the maximum sum of a non-empty subarray. You are allowed to skip&nbsp;at most one element&nbsp;in the subarray.
Note:&nbsp;After skipping the element, the subarray must still be non-empty.
Examples:
Input: arr[] = [1, 2, 3, -4, 5]
Output: 11
Explanation: We can get maximum sum subarray by skipping -4.
Input: arr[] = [-2, -3, 4, -1, -2, 1, 5, -3]
Output: 9
Explanation: We can get maximum sum subarray by skipping -2 as [4,-1,1,5] sums to 9, which is the maximum achievable sum.
Constraints:1&nbsp;≤&nbsp;arr.size()&nbsp;≤&nbsp;106-103&nbsp;≤&nbsp;arr[i]&nbsp;≤&nbsp;103