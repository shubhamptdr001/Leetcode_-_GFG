/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>ans;
        if(!root) return ans;
        unordered_map<TreeNode*,bool>vis;

        unordered_map<TreeNode*,TreeNode*>parent;
        queue<TreeNode*>q;
        q.push(root);
        TreeNode* main = NULL;
        while(!q.empty()){
            int n = q.size();
            while(n--){
                TreeNode* curr = q.front();
                if(curr == target) main = curr;
                q.pop();
                if(curr->left)parent[curr->left] = curr;
                if(curr->right)parent[curr->right] = curr;

                if(curr->left)q.push(curr->left);
                if(curr->right)q.push(curr->right);
            }
        }
        int dis =0;
        vis[main] = true;
        q.push(main);
        while(dis != k){
            int n = q.size();
            while(n--){
                TreeNode* m = q.front();
                q.pop();
                if(parent[m] && !vis[parent[m]]){
                    q.push(parent[m]);
                    vis[parent[m]] = true;
                } 
                if(m->left && !vis[m->left]){
                    q.push(m->left);
                    vis[m->left] = true;
                }
                if(m->right && !vis[m->right]){
                    q.push(m->right);
                    vis[m->right] = true;
                }
            }
             dis++;   
        }
        while(!q.empty()){
            TreeNode* a = q.front();
            ans.push_back(a->val);
            q.pop();
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna