/* Structure of tree Node
class Node {
  public:
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution {
  public:
    int minTime(Node* root, int target) {
       int time =0;
        if(!root) return time;
        unordered_map<Node*,bool>vis;

        unordered_map<Node*,Node*>parent;
        queue<Node*>q;
        q.push(root);
        Node* main = NULL;
        while(!q.empty()){
                Node* curr = q.front();
                if(curr->data == target)main = curr;
                q.pop();
                if(curr->left){
                    parent[curr->left] = curr;
                    q.push(curr->left);
                }    
                if(curr->right){
                    parent[curr->right] = curr;
                    q.push(curr->right);
                }    
        }
        vis[main] = true;
        q.push(main);
        while(!q.empty()){
            int n = q.size();
            bool burned = false;
            while(n--){
                Node* m = q.front();
                q.pop();
                if(parent[m] && !vis[parent[m]]){
                    q.push(parent[m]);
                    vis[parent[m]] = true;
                    burned = true;
                    
                } 
                if(m->left && !vis[m->left]){
                    q.push(m->left);
                    vis[m->left] = true;
                    burned = true;
                }
                if(m->right && !vis[m->right]){
                    q.push(m->right);
                    vis[m->right] = true;
                    burned = true;
                }
            }
             if(burned)time++;   
        }
        return time;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna