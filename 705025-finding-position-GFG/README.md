# [Finding Position](https://www.geeksforgeeks.org/problems/finding-position2223/1?page=1&company=Amazon)
## Easy
Some people(n) are standing in a queue. A selection process follows a rule where people standing on even positions&nbsp;are selected. Of the selected people a queue is formed and again out&nbsp;of these only&nbsp;people on even position&nbsp;are selected. This continues until we are left with one person.&nbsp;Find out the position of that person in the original queue.Example 1:
Input: n = 5
Output:&nbsp;4&nbsp;
Explanation: 1,2,3,4,5 -&gt; 2,4 -&gt; 4.

Example 2:
Input: n = 9
Output:&nbsp;8
Explanation: 1,2,3,4,5,6,7,8,9
-&gt;2,4,6,8 -&gt; 4,8 -&gt; 8. 

Your Task:&nbsp;&nbsp;You dont need to read input or print anything. Complete the function nthPosition()&nbsp;which takes n&nbsp;as input parameter and returns the position(original queue) of that person who is left.Expected Time Complexity: O(logn)Expected Auxiliary Space: O(1)Constraints:2&lt;= n &lt;=108