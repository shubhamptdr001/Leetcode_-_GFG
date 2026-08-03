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
    int result = -1;
    int count =0;
    void inorder(Node *root, int k){
        if(!root || count>=k){
            return;
        }
        inorder(root->left,k);
        count++;
        if(count == k){
            result = root->data;
            return;
        }
        inorder(root->right,k);
    }
    int kthSmallest(Node *root, int k) {
        if(!root)return result;
        inorder(root,k);
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna