class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int sum = 0;
        int a = 0;
        int n = nums.size();
        for(int i=1; i <= n; i++){
            sum += i;
        }
        unordered_set<int> s;
        for(int ch: nums){
            if(s.count(ch)){
                a = ch;
            }
            s.insert(ch);
        }
        for(int ch:s){
            sum -= ch;
        }
        return {a,sum};

    }
};