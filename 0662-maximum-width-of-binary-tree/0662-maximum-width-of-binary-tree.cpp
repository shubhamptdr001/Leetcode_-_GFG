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
    int widthOfBinaryTree(TreeNode* root) {
        if(!root)return 0;
        queue<pair<TreeNode*,int>>q;
        q.push({root,0});   

        int maxlen =0;

        while(!q.empty()){
            int min_idx = q.front().second;
            int lsize = q.size();
            int first,last;
            for(int i=0;i<lsize;++i){
                int curr_idx = q.front().second-min_idx;
                TreeNode* node =q.front().first;
                q.pop();
                if(i==0)first = curr_idx;
                if(i==lsize-1) last =curr_idx;
                if(node->left) q.push({node->left,1LL*(curr_idx)*2+1});
                if(node->right) q.push({node->right,1LL*(curr_idx)*2+2});
                }
                maxlen = max(maxlen,last-first+1);
        }
        return maxlen;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna