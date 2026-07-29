class MinStack {
    stack<int>st;
    stack<int>st1;
public:
    MinStack() {
        
    }
    
    void push(int value) {
        st1.push(value);
        if(!st.empty() && st.top()<value)value = st.top();
        st.push(value);
        
    }
    
    void pop() {
        if(st.empty())return;
        st.pop();
        st1.pop();
    }
    
    int top() {
        if(st1.empty()) return NULL;
        return st1.top();
    }
    
    int getMin() {
        if(st.empty())return NULL;
        return st.top();
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