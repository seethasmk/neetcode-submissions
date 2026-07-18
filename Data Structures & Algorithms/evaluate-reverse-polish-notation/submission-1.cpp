class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        for(string ch: tokens){
            if(ch == "+" || ch == "-" || ch == "/" || ch == "*"){
                int b = st.top(); st.pop();
                int a = st.top(); st.pop();
                int res;
                if(ch == "+")res = a + b;
                else if(ch == "-")res = a - b;
                else if(ch == "*")res = a * b;
                else res = a/b;
                st.push(res);
            }
            else{
                st.push(stoi(ch));
            }
        }
        return st.top();
    }
};
