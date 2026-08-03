class Solution {
  public:
    void helper(Node* root,int x,int &maxi){
        if(!root)return;
        
        if(root->data >= x && root->data < maxi) maxi = min(maxi,root->data);
        
        if(root->left && root->data > x)helper(root->left,x,maxi);
        if(root->right && root->data < x)helper(root->right,x,maxi);
    }
    int findCeil(Node* root, int x) {
        int maxi = INT_MAX;
        
        helper(root,x,maxi);
        if(maxi == INT_MAX)return -1;
        return maxi;
        
    }
};
// This implementation performs a DFS traversal and keeps track of the smallest node value >= x.
// Time Complexity: O(n) in the worst case (traverse all nodes).
// Space Complexity: O(h) for recursion stack, where h is tree height (O(log n) for balanced, O(n) for skewed).
// An iterative approach can achieve the same average‑case time with potentially less recursion overhead.
// If you want to stop early when the exact ceil is found, you could add a check inside helper to return immediately.

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna