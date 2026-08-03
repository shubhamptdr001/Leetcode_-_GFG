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
    void flattenrn(TreeNode* root,TreeNode* &nr)
    {
        if(!root) return;
        flattenrn(root->right,nr);
        flattenrn(root->left,nr);

        root->left = NULL;
        root->right = nr;
        nr = root;
    }
    void flatten(TreeNode* root) {
        if(!root) return;
        TreeNode* nr =NULL;
        flattenrn(root,nr);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna