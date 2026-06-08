class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> val;
        for(int x: nums){
        if(val.count(x) == 1){
            return true;
        }
        else val.insert(x);
       }
       return false;
       }
};