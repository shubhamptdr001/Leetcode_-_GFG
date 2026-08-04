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

class Nodevalue{
public:
    int maxNode,minNode,Sum;
    Nodevalue(int minNode,int maxNode,int Sum){
        this->maxNode = maxNode;
        this->minNode = minNode;
        this->Sum = Sum;
    }
};
class Solution {
private:
        int ans =0;
        Nodevalue BST(TreeNode* root){
            if(!root){
                return Nodevalue(INT_MAX,INT_MIN,0);
            }
            auto left = BST(root->left);
            auto right = BST(root->right);

            if(left.maxNode < root->val && root->val < right.minNode){
                int currSum = left.Sum + right.Sum + root->val;
                ans = max(ans, currSum);
                return Nodevalue(min(root->val,left.minNode),max(root->val,right.maxNode),currSum);
            }
            return Nodevalue(INT_MIN,INT_MAX,max(left.Sum,right.Sum));
        }    
public:
    int maxSumBST(TreeNode* root) {
       BST(root);
       return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna