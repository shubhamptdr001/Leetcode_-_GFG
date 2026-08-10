class Solution {
  public:
    vector<vector<int>> insertInterval(vector<vector<int>> &intervals,
                                       vector<int> &newInterval) {
       // Coaching Analysis:
       // Your logic is correct and handles the three phases (before, during/merge, after) perfectly.
       // Time Complexity: O(N) where N is the number of intervals.
       // Space Complexity: O(N) to store the result.
       // This is the optimal complexity for this problem.
       // You can safely submit this solution!
       
       vector<vector<int>>result;
        int n = intervals.size();
        
        int i=0;
        
        while(i<n){
            if(intervals[i][1] < newInterval[0]){
                result.push_back(intervals[i]);
                
            }else if(intervals[i][0] > newInterval[1]){
                break;
            }
            else{
                //merge
                newInterval[0] = min(newInterval[0],intervals[i][0]);
                newInterval[1] = max(newInterval[1],intervals[i][1]);
            }
            i++;
        }
        result.push_back(newInterval);
        while(i<n){
            result.push_back(intervals[i]);
            i++;
        }
        return result;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna