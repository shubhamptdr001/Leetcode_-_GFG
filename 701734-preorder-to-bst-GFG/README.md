# [Preorder to BST](https://www.geeksforgeeks.org/problems/preorder-to-postorder4423/1)
## Medium
Given an array pre[] representing the preorder traversal of a Binary Search Tree.&nbsp;Construct the corresponding BST and return its root.
Note: All node values are distinct.
Examples:
Input: pre[] = [40, 30, 35, 80, 100]
Output: [40, 30, 80, N, 35, N, 100]
Explanation: The corresponding BST is: 
Input: pre[] = [10, 5, 1, 7, 40, 50]
Output: [10, 5, 40, 1, 7, N, 50]Explanation: The corresponding BST is:
Constraints:1 ≤ n ≤ 103, n is the size of pre1 ≤ pre[i] ≤ 104