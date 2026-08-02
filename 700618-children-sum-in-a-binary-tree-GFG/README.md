# [Children Sum in a Binary Tree](https://www.geeksforgeeks.org/problems/children-sum-parent/1)
## Medium
Given a binary tree, find if it satisfies the&nbsp;Children Sum Property which has the following rules

Each non-leaf node must have a value equal to the&nbsp;sum&nbsp;of its&nbsp;left&nbsp;and&nbsp;right&nbsp;children's values. 
A NULL child is considered to have a value of&nbsp;0, and all leaf nodes are considered valid by default.

&nbsp;
Examples:
Input: root = [35, 20, 15, 15, 5, 10, 5]
Output: True
Explanation: Here, every node is sum of its left and right child.
Input: root = [1, 4, 3, 5]  
Output: False
Explanation: Here, 1 is the root node and 4, 3 are its child nodes. 4 + 3 = 7 which is not equal to the value of root node. Hence, this tree does not satisfy the given condition.
Constraints:1 ≤ number of nodes ≤ 1050 ≤ node-&gt;data ≤ 105