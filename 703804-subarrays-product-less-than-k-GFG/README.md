# [Subarrays Product Less than K](https://www.geeksforgeeks.org/problems/count-the-subarrays-having-product-less-than-k1708/1)
## Medium
Given an integer array arr[] of positive numbers, the task is to find the number of possible contiguous subarrays having product less than k. 
Examples:
Input : k = 10, arr[] = [1, 2, 3, 4]
Output : 7
Explanation:
The contiguous subarrays whose product is less than 10 are [1], [2], [3], [4], [1, 2], [2, 3], and [1, 2, 3]. Therefore, the total number of valid contiguous subarrays is 7.
Input: k = 100, arr[] = [1, 9, 2, 8, 6, 4, 3]
Output: 16Explanation: There are 16 contiguous subarrays whose product of elements is strictly less than 100. 
Constraints:1 ≤ n ≤ 1051 ≤ k ≤ 1051 ≤ arr[i] ≤ 103