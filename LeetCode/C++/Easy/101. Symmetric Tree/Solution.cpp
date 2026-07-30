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
    bool isSymmetric(TreeNode* root) {
        if(!root)return true;

        queue<TreeNode*>q;
        q.push(root->left);
        q.push(root->right);

        while(!q.empty()){
            TreeNode* a = q.front();q.pop();
            TreeNode* b = q.front();q.pop();

            if(!a && !b)continue;
            if(!a || !b) return false;
            if(a->val != b->val)return false;

            q.push(a->left);
            q.push(b->right);

            q.push(b->left);
            q.push(a->right);

        }
        return true;
    }
};