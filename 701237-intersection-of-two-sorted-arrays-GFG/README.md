# [Intersection of Two Sorted Arrays](https://www.geeksforgeeks.org/problems/intersection-of-two-sorted-array-1587115620/1)
## Easy
Given two sorted arrays arr1[] and arr2[]. Your task is to return the intersection of both arrays.Intersection of two arrays is said to be elements that are common in both arrays.&nbsp;The intersection should not count duplicate elements.Note: If there is no intersection then return an empty array.
Examples:
Input: arr1[] = [1, 2, 3, 4], arr2[] = [2, 4, 6, 7, 8]
Output: [2, 4]
Explanation: 2 and 4 are only common elements in both the arrays.
Input: arr1[] = [1, 2, 2, 3, 4], arr2[] = [2, 2, 4, 6, 7, 8]
Output: [2, 4]
Explanation: 2 and 4 are the only common elements.
Input: arr1[] = [1, 2], arr2[] = [3, 4]
Output: []
Explanation: No common elements.
Constraints:1 ≤ arr1.size(),arr2.size() ≤ 1051 ≤ arr1[i], arr2[i] ≤ 106