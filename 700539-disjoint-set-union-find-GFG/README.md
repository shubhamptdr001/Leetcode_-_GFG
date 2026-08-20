# [Disjoint set (Union-Find)](https://www.geeksforgeeks.org/problems/disjoint-set-union-find/1)
## Easy
You are given n elements numbered from&nbsp;1&nbsp;to&nbsp;n. Initially, each element is in its own group and its group's representative as well. You need to process&nbsp;k&nbsp;queries of two types:

Type 1:&nbsp;1 x zPerforms a UNION&nbsp;operation on elements&nbsp;x&nbsp;and&nbsp;z.&nbsp;After merging, the representative of z becomes the representative of the whole group. Merge the group containing x into the group containing z by making the representative of x point to the ultimate representative of z.


Type 2:&nbsp;2 xPerform a&nbsp;FIND&nbsp;operation on element&nbsp;x. Output the representative of the group containing x.

Note:

The representative of an element is the root of its group, i.e., the element whose parent is itself.
Initially, every element is its own representative.

Examples:
Input: n = 5, k = 4, queries[] = [[2, 4], [2, 1], [1, 3, 1], [2, 3]]
Output: [4, 1, 1]
Explanation:
2 4 → Find the representative of 4. Since 4 is initially in its own group, the answer is 4.
2 1 → Find the representative of 1. Since 1 is initially in its own group, the answer is 1.
1 3 1 → Union the groups containing 3 and 1. The representative of 3 is attached to the representative of 1. So the parent of 3 becomes 1.
2 3 → Find the representative of 3. Now 3 belongs to the group whose leader is 1, so the answer is 1.

Input: n = 6, k = 6, queries[] = [[1, 2, 3], [1, 4, 5], [2, 2], [2, 3], [1, 3, 5], [2, 4]]
Output: [3, 3, 5]
Explanation:
1 2 3 → Merge group of 2 into group of 3. Now 2 points to 3.
1 4 5 → Merge group of 4 into group of 5. Now 4 points to 5.
2 2 → Representative of 2 is 3.
2 3 → Representative of 3 is 3.
1 3 5 → Merge group of 3 into group of 5. Now 3 points to 5, and 2 also indirectly belongs to the same group.
2 4 → Representative of 4 is 5.
Constraints:1 ≤ n, k ≤ 10001&nbsp;≤ x, z&nbsp;≤ n