# [Floor in BST](https://www.geeksforgeeks.org/problems/closest-neighbor-in-bst/1)
## Easy
Given the root of a binary search tree and a number k, find the greatest number in the binary search tree that is less than or equal to k.
Note: If no such node value exists that is smaller than k, then return -1.
Examples:
Input: root = [10, 7, 15, 2, 8, 11, 16],  k  =  14Output: 11
Explanation: The greatest element in the tree which is less than or equal to 14, is 11.
Input: root = [5, 2, 12, 1, 3, 9, 21, N, N, N, N, N, N, 19, 25],  k  = 24Output: 21
Explanation: The greatest element in the tree which is less than or equal to 24, is 21. 
Input: root = [5, 2, 12, 1, 3, 9, 21, N, N, N, N, N, N, 19, 25], k = 4Output: 3
Explanation: The greatest element in the tree which is less than or equal to 4, is 3.
Constraints:1 ≤ number of nodes ≤ 1051 ≤ node-&gt;data, k ≤ 105All nodes are unique in the BST