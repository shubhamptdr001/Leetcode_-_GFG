class MinStack {
    stack<int>st;
    stack<int>st1;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st.push(value);
    }
    
    void pop() {
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        int mini = INT_MAX;
        while(!st.empty()){
            int i = st.top();
            st.pop();
            mini = min(mini,i);
            st1.push(i);
        }
        while(!st1.empty()){
            int i = st1.top();
            st1.pop();
            st.push(i);
        }
        
        return mini;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */