class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int a = 0;
        int n = nums.size();
        int sum = n*(n+1)/2;
        unordered_set<int> s;
        for(int ch: nums){
            if(s.count(ch)){
                a = ch;
            }
            s.insert(ch);
            sum -= ch;
        }
        return {a,sum+a};
    }
};