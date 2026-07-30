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
        map<int,map<int,vector<int>>>m;

        queue<pair<TreeNode*,pair<int,int>>>q;
        q.push({root,{0,0}});

        while(!q.empty()){
            int n = q.size();

            while(n--){
                TreeNode* node = q.front().first;
                int row = q.front().second.first;
                int col = q.front().second.second;
                m[row][col].push_back(node->val);
                q.pop();

                if(node->left)q.push({node->left,{row+1,col-1}});
                if(node->right)q.push({node->right,{row+1,col+1}});
            }
        }
        int ans = root->val;
        for(auto &row:m){
            vector<int>l;
            for(auto &col:row.second){
                for(auto i:col.second){
                    l.push_back(i);
                }
            }
            ans = l[0];
        }
        return ans;
    }
};