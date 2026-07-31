/* Structure of Binary Tree Node
class Node {
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
    vector<int> zigZagTraversal(Node* root) {
        vector<int>ans;
        
        if(!root) return ans;
        
        queue<Node*>q;
        q.push(root);
        bool rev = false;
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
            // COACH: Your logic is correct! You've implemented a Breadth-First Search (BFS) 
            // and used a boolean flag to reverse the level vector for zig-zagging.
            // Time Complexity: O(N) where N is the number of nodes.
            // Space Complexity: O(W) where W is the maximum width of the tree.
            // This is the optimal time complexity for this problem.
            if(rev){
                reverse(level.begin(),level.end());
            }
            for(auto i:level) ans.push_back(i);
            rev = !rev;
        }
        return ans;
        
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna