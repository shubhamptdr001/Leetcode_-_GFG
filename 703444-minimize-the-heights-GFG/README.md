# [Minimize the Heights](https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1)
## Medium
Given an array arr[] representing the heights of n towers and a positive integer k. For each tower, perform exactly one of the following operations exactly once:Increase its height by k, orDecrease its height by k.After performing the operation on every tower, the height of any tower must not become negative.Return the minimum possible difference between the heights of the tallest and the shortest towers after modifying all the towers.Examples :Input: k = 2, arr[] = [1, 5, 8, 10]
Output: 5
Explanation: The array can be modified as [1+k, 5-k, 8-k, 10-k] = [3, 3, 6, 8]. The difference between the largest and the smallest is 8-3 = 5.
Input: k = 3, arr[] = [3, 9, 12, 16, 20]
Output: 11
Explanation: The array can be modified as [3+k, 9+k, 12-k, 16-k, 20-k] = [6, 12, 9, 13, 17]. The difference between the largest and the smallest is 17-6 = 11.&nbsp;
