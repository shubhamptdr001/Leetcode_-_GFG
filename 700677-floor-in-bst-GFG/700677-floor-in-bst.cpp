/*
Definition for Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
   void helper(Node* root, int k, int &mini){
       if(!root)return;
       if(root->data <= k && root->data > mini) mini = max(mini,root->data);
       
       if(root->left && root->data > k) helper(root->left,k,mini);
       if(root->right && root->data<k)helper(root->right,k,mini);
      
   }
    int findMaxFork(Node* root, int k) {
       // COACH ANALYSIS:
       // 1. Logic Issue: Your traversal conditions are slightly flawed. 
       //    If root->data <= k, you might still find a larger value (a better floor) in the right subtree.
       //    If root->data > k, you MUST go left to find a value <= k.
       // 2. Complexity: Current Time O(N) in worst case, Space O(H) for recursion.
       // 3. Optimal: Since it's a BST, you can achieve O(H) time by eliminating half the tree at each step.
       
       int mini = -1;
       
       helper(root,k,mini);
       return mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna