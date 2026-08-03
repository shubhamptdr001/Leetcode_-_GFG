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
       int mini = -1;
       
       helper(root,k,mini);
       return mini;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna