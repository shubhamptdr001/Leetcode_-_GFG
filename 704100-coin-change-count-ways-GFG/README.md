# [Coin Change (Count Ways)](https://www.geeksforgeeks.org/problems/coin-change2448/1)
## Medium
Given an integer&nbsp;array&nbsp;coins[ ]&nbsp;representing different denominations of currency and an integer&nbsp;sum, find the number of ways you can make&nbsp;sum&nbsp;by using different combinations from coins[ ].&nbsp;Note:&nbsp;Assume that you have an infinite supply of each type of coin. Therefore, you can use any coin as many times as you want.Answers are guaranteed to fit into a 32-bit integer.&nbsp;
Examples:
Input: coins[] = [1, 2, 3], sum = 4
Output: 4
Explanation: Four Possible ways are: [1, 1, 1, 1], [1, 1, 2], [2, 2], [1, 3].

Input: coins[] = [2, 5, 3, 6], sum = 10
Output: 5
Explanation: Five Possible ways are: [2, 2, 2, 2, 2], [2, 2, 3, 3], [2, 2, 6], [2, 3, 5] and [5, 5].
Input: coins[] = [5, 10], sum = 3
Output: 0Explanation: Since all coin denominations are greater than sum, no combination can make the target sum.