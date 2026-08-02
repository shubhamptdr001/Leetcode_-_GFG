/* Structure of a Tree Node
class Node {
public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
    bool isleaf(Node* root){
        if(root == NULL){
            return false;
        }
        return root->left == NULL && root->right == NULL;
    }
    bool isSumProperty(Node *root) {
        
        if(root == NULL || isleaf(root))return true;
        int total = root->data;
        int right=0,left=0;
        
        if(root->left)left = root->left->data;
        
        if(root->right)right = root->right->data;
        
        return (left + right == total) &&
                isSumProperty(root->left) && isSumProperty(root->right);
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna