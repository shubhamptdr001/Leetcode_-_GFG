/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    int height(Node* root){
        if(!root)return 0;
    
        return max(height(root->left),height(root->right))+1;
    }
    bool isBalanced(Node* root) {
        if(!root)return true;
        
        int lefth = height(root->left);
        int righth = height(root->right);
        if(abs(lefth - righth)>1)return false;
        
        return isBalanced(root->left) && isBalanced(root->right);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna