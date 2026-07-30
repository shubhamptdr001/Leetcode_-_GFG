/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int maxsum = INT_MIN;
    int solver(TreeNode* root){
        if(!root)return 0;
        int leftsum = 0,rightsum=0;
        if(root->left)leftsum = max(0,solver(root->left));
        if(root->right)rightsum = max(0,solver(root->right));

        int total = root->val + leftsum + rightsum;

        maxsum = max(maxsum,total);
        return root->val+max(leftsum,rightsum);
    }
    int maxPathSum(TreeNode* root) {
        if(!root)return 0;

        solver(root);
        return maxsum;

    }
};