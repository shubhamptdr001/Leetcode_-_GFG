/* Node Structure
class Node {
  public:
    int data;
    Node* left, *right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
}; */

class Solution {
  public:
  bool isleaf(Node* root){
      return root->left == NULL && root->right == NULL;
  }
    void addleft(Node* root,vector<int>&ans){
        if(!root)return;
        Node* temp = root->left;
        while(temp){
            if(!isleaf(temp)){
                ans.push_back(temp->data);
            }
            if(temp->left) temp = temp->left;
            else temp = temp->right;
        }
    }
    void addleaves(Node* root,vector<int>&ans){
        if(root == NULL) return;
        
        if(isleaf(root)){
            ans.push_back(root->data);
            return;
        }
    
        addleaves(root->left, ans);
        addleaves(root->right, ans);
    }
    void addright(Node* root,vector<int>&ans){
        Node* temp = root->right;
        vector<int>r;
        while(temp){
            if(!isleaf(temp)){
                r.push_back(temp->data);
            }
            if(temp->right) temp = temp->right;
            else temp = temp->left;
        }
        for(int i =r.size()-1;i>=0;i--){
            ans.push_back(r[i]);
        }
    }
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        if(!root)return ans;
        if(!isleaf(root))
        ans.push_back(root->data);
        addleft(root,ans);
        addleaves(root,ans);
        addright(root,ans);
        
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna