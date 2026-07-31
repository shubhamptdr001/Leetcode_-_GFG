/*
Definition for Node
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> rightView(Node *root) {
         vector<int>ans;
        
        if(!root) return ans;
        
        queue<Node*>q;
        q.push(root);
        
        while(!q.empty()){
            int n = q.size();
            
            vector<int>level;
            while(n--){
                Node* k = q.front();
                q.pop();
                
                level.push_back(k->data);
                if(k->left)q.push(k->left);
                if(k->right)q.push(k->right);
            }
            ans.push_back(level[level.size()-1]);
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna