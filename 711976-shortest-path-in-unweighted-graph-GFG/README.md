# [Shortest Path in Unweighted Graph](https://www.geeksforgeeks.org/problems/shortest-path-in-undirected-graph-having-unit-distance/1)
## Medium
Given an undirected graph with V vertices numbered from 0 to V-1 and E edges, where edges[i] = [u, v] denotes an undirected edge between vertex u and vertex v, given two vertices src and dest, find the length of the shortest path from src to dest. If there is no path between src and dest, return -1.
Note: All edges have a unit weight of 1.
Examples :
Input: V = 9, edges[][] = [[0, 1], [0, 3], [1, 2], [3, 4], [4, 5], [2, 6], [5, 6], [6, 7], [6, 8], [7, 8]], src = 0, dest = 8
Output: 4
Explanation: One of the shortest paths from vertex 0 to vertex 8 is 0 -&gt; 1 -&gt; 2 -&gt; 6 -&gt; 8, which contains 4 edges.
Input: V = 4, edges[][]= [[0, 3], [1, 3]], src = 3, dest = 2
Output: -1
Explanation: There is no path between vertices 3 and 2.
Constraints:
1 ≤ V ≤ 10^40 ≤ E ≤ V × (V - 1) / 20 ≤ edges[i][0], edges[i][1] &lt; V