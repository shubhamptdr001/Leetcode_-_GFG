/* Structure of binary tree node
class Node {
public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};*/

class Solution {
  public:
    vector<int> serialize(Node *root) {
        
        vector<int>ans;
        if(!root)return ans;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            Node* curr = q.front();
            q.pop();
            if(!curr)ans.push_back(-1);
            else ans.push_back(curr->data);
            if(curr){
                q.push(curr->left);
                q.push(curr->right);
            }
            
        }
        return ans;
    }
    
    Node *deSerialize(vector<int> &arr) {
        
      Node* root = new Node(arr[0]);
      
      queue<Node*>q;
      q.push(root);
      int i =1;
      while(!q.empty()){
          Node* curr = q.front();
          q.pop();
          
          if(arr[i] != -1){
              curr->left = new Node(arr[i]);
              q.push(curr->left);
          }
          i++;
          if(arr[i] != -1){
              curr->right = new Node(arr[i]);
              q.push(curr->right);
          }
          i++;
      }
      return root;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna