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
    vector<int> bottomView(Node *root) {
         vector<int>ans;
        
        if(!root) return ans;
        
        map<int,int>m;
        queue<pair<Node*,int>>q;
        q.push({root,0});
        
        while(!q.empty()){
            int n = q.size();
            
            while(n--){
                Node* k = q.front().first;
                int row = q.front().second;
                q.pop();
                m[row] = k->data;
                if(k->left)q.push({k->left,row-1});
                if(k->right) q.push({k->right,row+1});
            }
        }
        for(auto [i,j]:m){
            ans.push_back(j);
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna