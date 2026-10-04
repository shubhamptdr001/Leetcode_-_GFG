# [String Rotation Check](https://www.geeksforgeeks.org/problems/check-if-strings-are-rotations-of-each-other-or-not-1587115620/1)
## Medium
Given two strings s1 and&nbsp;s2, of equal lengths. The task is to check&nbsp;if&nbsp;s2&nbsp;is a rotated version of the string&nbsp;s1.Note: A string is a rotation of another if it can be formed by moving characters from the start to the end (or vice versa) without rearranging them.Examples :Input: s1 = "abcd", s2 = "cdab"Output: true
Explanation: After 2 right rotations, s1 will become equal to s2.
Input: s1 = "aab", s2 = "aba"Output: true
Explanation: After 1 left rotation, s1 will become equal to s2.Input: s1 = "abcd", s2 = "acbd"Output: false
Explanation: Strings are not rotations of each other.