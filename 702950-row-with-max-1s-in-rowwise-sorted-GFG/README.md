# [Row with Max 1s in Rowwise Sorted](https://www.geeksforgeeks.org/problems/row-with-max-1s0023/1)
## Medium
Given a 2D binary array arr[][] of size n*m consisting of only 1s and 0s. Each row of the array is sorted in non-decreasing order. Find and return the index of the first row that contains the maximum number of 1s. If no such row exists, return -1.
Note: The array follows 0-based indexing.
Examples:
Input: arr[][] = [[0,1,1,1], [0,0,1,1], [1,1,1,1]]
Output: 2
Explanation: Row 2 contains the most number of 1s (4 - 1s). Hence, the output is 2.
Input: arr[][] = [[0,0], [1,1]]
Output: 1
Explanation: Row 1 contains the most number of 1s (2 - 1s). Hence, the output is 1.
Input: arr[][] = [[0,0], [0,0]]
Output: -1
Explanation: No row contains any 1s, so the output is -1.
