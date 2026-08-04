/* Structure of a Binary Search Tree node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = nullptr;
        right = nullptr;
    }
}; */

class Solution {
  public:
   void findps(Node* root,Node* &pre,Node* &succ,int key){
       if(!root)return;
       
       if(root->data == key){
            if(root->left != NULL){
                Node* temp = root->left;
                while(temp->right){
                    temp = temp->right;
                }
                pre = temp;
            }
            if(root->right != NULL){
                Node* temp = root->right;
                while(temp->left){
                    temp = temp->left;
                }
                succ = temp;
            }
            return;
        }
        if(root->data > key){
            succ = root;
            findps(root->left,pre,succ,key);
        }
        else{
            pre = root;
            findps(root->right,pre,succ,key);
        }
       
   }
    vector<Node*> findPreSuc(Node* root, int key) {
        vector<Node*>ans;
        if(!root)return ans;
        Node* pre = NULL;
        Node* succ = NULL;
        
        findps(root,pre,succ,key);
        ans.push_back(pre);
        ans.push_back(succ);
      return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna