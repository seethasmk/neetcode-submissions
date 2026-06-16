class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;
        for(int i=0; i < operations.size(); i++){
            if(operations[i] == "+"){
                int b = s.top(); s.pop();
                int a = s.top(); s.pop();
                int sum = a+b;
                s.push(a);
                s.push(b);
                s.push(sum);
            }
            else if(operations[i] == "C")s.pop();
            else if(operations[i] == "D"){ 
                s.push(2* (s.top()));
            }
            else s.push(stoi(operations[i]));
        }
        
        int res = 0;
        while(!s.empty()){
            res += s.top();
            s.pop();
        }
        return res;
    }
};