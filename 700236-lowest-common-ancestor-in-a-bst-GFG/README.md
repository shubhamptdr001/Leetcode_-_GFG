# [Lowest Common Ancestor in a BST](https://www.geeksforgeeks.org/problems/lowest-common-ancestor-in-a-bst/1)
## Medium
Given the root of a Binary Search Tree (BST) with unique node values and two nodes n1 and n2 (n1 != n2), find their Lowest Common Ancestor (LCA).
The Lowest Common Ancestor (LCA) of two nodes is defined as the deepest node in the tree that has both n1 and n2 as descendants, where a node can be a descendant of itself.
Examples:
Input: root = [5, 4, 6, 3, N, N, 7, N, N, N, 8], n1-&gt;data = 7, n2-&gt;data = 8 &nbsp; &nbsp; &nbsp; Output: 7Explanation: 7 is the lowest node that has both 7 and 8 as descendants.

Input: root = [20, 8, 22, 4, 12, N, N, N, N, 10, 14], n1-&gt;data = 8, n2-&gt;data = 14 Output: 8Explanation: 8 is the lowest node that has both 8 and 14 as descendants.
Input: root = [1, 2, 3], n1-&gt;data = 2, n2-&gt;data = 3

Output: 1Explanation: 1 is the lowest node that has both 2 and 3 as descendants.
