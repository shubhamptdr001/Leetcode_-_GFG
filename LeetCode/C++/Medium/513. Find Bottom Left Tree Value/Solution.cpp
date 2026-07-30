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
    int findBottomLeftValue(TreeNode* root) {
        map<int, vector<int>> level;

        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* node = q.front().first;
                int row = q.front().second;
                level[row].push_back(node->val);
                q.pop();

                if(node->left)q.push({node->left,row+1});
                if(node->right)q.push({node->right,row+1});
            }
        }
        int ans = root->val;
        for(auto &row:level){
           ans = row.second[0];
        }
        return ans;
    }
};