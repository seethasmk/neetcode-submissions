class MinStack {
public:
    stack<int> st;
    stack<int> minst;

    MinStack() {
    }

    void push(int val) {
        if(st.empty()){
            st.push(val);
            minst.push(val);
        }
        else{
            int element = min(val, minst.top());
            st.push(val);
            minst.push(element);
        }
        return;
    }
    
    void pop() {
        st.pop();
        minst.pop();
        return;
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return minst.top(); 
    }
};
