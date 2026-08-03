# [Serialize and Deserialize a Binary Tree](https://www.geeksforgeeks.org/problems/serialize-and-deserialize-a-binary-tree/1)
## Hard
Given the root of a binary tree. You have to perform Serialization and Deserialization. Serialization is to store a tree in an array so that it can be later restored and deserialization is reading tree back from the array. Complete the functions:

serialize() : stores the tree into an array&nbsp;and returns the array.
deSerialize() :&nbsp;deserializes the array to the tree and returns the root of the tree.

Note:&nbsp;Multiple nodes can have the same data and the node values are&nbsp;always&nbsp;positive integers. Your code will be correct if the tree returned by&nbsp;deSerialize(serialize(input_tree)) is same as the input tree. Driver code will print the level order traversal of the tree returned by deSerialize(serialize(input_tree)).
Examples :
Input: root = [1, 2, 3] &nbsp; &nbsp; &nbsp; 
Output: [1, 2, 3]

Input: root = [10, 20, 30, 40, 60, N, N] 
Output: [10, 20, 30, 40, 60]
