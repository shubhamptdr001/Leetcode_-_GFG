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
    TreeNode* helper(vector<int>& inorder, vector<int>& postorder,unordered_map<int ,int>&map,int &k,int l,int r){
        if(l>r || k<0) return nullptr;
        TreeNode* root = new TreeNode(postorder[k]);
        k--;
        int idx = map[root->val];
        root->right = helper(inorder,postorder,map,k,idx+1,r);
        root->left = helper(inorder,postorder,map,k,l,idx-1);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        unordered_map<int ,int>map;
        int i=0;
        for(auto k:inorder){
            map[k]=i;
            i++;
        }
        int k = postorder.size()-1;
        return helper(inorder,postorder,map,k,0,postorder.size()-1);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna