class MyQueue {
public:
    stack<int> s;
    MyQueue() {
        
    }
    void push(int x) {
        s.push(x);
    }
    int pop() {
        int sz = s.size();
        stack<int> x;
        while(!s.empty()){
            x.push(s.top());
            s.pop();
        }
        int z = x.top();
        x.pop();
        while(!x.empty()){
            s.push(x.top());
            x.pop();
        }
        return z;
    }
    int peek() {
        int sz = s.size();
        stack<int> x;
        while(!s.empty()){
            x.push(s.top());
            s.pop();
        }
        int z = x.top();
        while(!x.empty()){
            s.push(x.top());
            x.pop();
        }
        return z;
    }
    bool empty() {
        return s.empty();  
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */