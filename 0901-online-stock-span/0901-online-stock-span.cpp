class StockSpanner {
    vector<int>arr;
    stack<pair<int,int>>st;
public:
    StockSpanner() {
        
    }
    
    int next(int price) {
        int n = arr.size();
    
        while(!st.empty() && st.top().first <= price){
            st.pop();
        }
        arr.push_back((st.empty()) ? n+1: n-st.top().second);
        st.push({price,n}); 
        n = arr.size();
        return arr[n-1];
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna