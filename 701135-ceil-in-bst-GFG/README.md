# [Ceil in BST](https://www.geeksforgeeks.org/problems/implementing-ceil-in-bst/1)
## Medium
Given a root&nbsp;binary search tree and an integer&nbsp;x , find the Ceil of&nbsp;x in the tree.
Ceil(x) is a number that is either equal to x or is immediately greater than x. If Ceil could not be found, return -1.
Examples:
Input: root = [5, 1, 7, N, 2, N, N, N, 3], x = 3
Output: 3
Explanation: We find 3 in BST, so ceil of 3 is 3.
Input: root = [10, 5, 11, 4, 7, N, N, N, N, N, 8], x = 6Output: 7
Explanation: We find 7 in BST, so ceil of 6 is 7.
Constraints:1 &nbsp;≤ Number of nodes &nbsp;≤ 1051 &nbsp;≤ Value of nodes ≤ 105