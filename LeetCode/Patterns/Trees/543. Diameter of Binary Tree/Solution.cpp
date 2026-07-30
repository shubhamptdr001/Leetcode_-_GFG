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
    int dia =0;
    int height(TreeNode* root){
        if(!root)return 0;
        
        int leftd = height(root->left);
        int rightd = height(root->right);

        dia = max(dia,leftd+rightd);
        return max(leftd,rightd)+1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return dia;
    }
};