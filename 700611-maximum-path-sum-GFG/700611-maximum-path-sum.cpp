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
};
*/

class Solution {
  public:
     int solve(Node *root, int &res,int sum){
        if(root == NULL)return 0;
        
        int l = solve(root->left,res,sum);
        int r = solve(root->right,res,sum);
        
        int temp = max(max(l,r)+root->data,root->data);
        int ans = max(temp,l+r+root->data);
        res = max(res,ans);
        return temp;
    
    }
    int findMaxSum(Node *root) {
        if(!root) return 0;
        int res = INT_MIN;
        solve(root,res,0);
        return res;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna