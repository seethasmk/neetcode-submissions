class MyStack {
public:
    queue<int> q;
    MyStack() {   
    }
    void push(int x) {
        q.push(x);
    }
    int pop() {
        int s = q.size();
        int i= 1;
        while(i < s){
            q.push(q.front());
            q.pop();
            i++;
        }
        int z = q.front();
        q.pop();
        return z;
    }
    int top() {
        return q.back();  
    }
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */