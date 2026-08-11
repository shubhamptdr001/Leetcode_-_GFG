class Solution {
  public:
    bool isSquare(vector<vector<int>>& points) {
        if(abs(points[0][0] - points[1][0])+abs(points[0][1] - points[1][1]) == abs(points[2][0] - points[3][0])+abs(points[2][1] - points[3][1])
            && abs(points[0][0] - points[3][0])+abs(points[0][1] - points[3][1]) == abs(points[2][0] - points[1][0])+abs(points[2][1] - points[1][1]))
            return true;
        return false;    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna