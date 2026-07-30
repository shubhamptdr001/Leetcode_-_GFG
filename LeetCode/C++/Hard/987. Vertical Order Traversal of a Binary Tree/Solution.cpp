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
    struct cmp {
    bool operator()(TreeNode* a, TreeNode* b) const {
        return a->val < b->val;
    }
};
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        vector<vector<int>> ans;
        if(!root)return ans;

        map<int,multiset<TreeNode*,cmp>>m;

        queue<pair<TreeNode*,int>>q;
        q.push({root,0});

        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* node = q.front().first;
                int pos = q.front().second;

                q.pop();
                m[pos].insert(node);
                if(node->left)q.push({node->left,pos-1});
                if(node->right)q.push({node->right,pos+1});

            }
        }
        for(auto [pos,node]:m){
            vector<int>l;
            for(auto i : node){
                l.push_back(i->val);
            }
            ans.push_back(l);
        }
        return ans;
    }
};