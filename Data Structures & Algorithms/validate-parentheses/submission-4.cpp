class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        for(int i=0; i < s.length(); i++){
            if(s[i] == '(' || s[i] == '[' || s[i] == '{'){
                st.push(s[i]);
            }
            else{
                if(st.empty())return false;
                int t = st.top();
                st.pop();
                if(!((t == '(' && s[i] == ')') || (t == '{' && s[i] == '}') || (t == '[' && s[i] == ']'))){
                    return false;
                }
            }
        }
        return st.empty();
    }
};
