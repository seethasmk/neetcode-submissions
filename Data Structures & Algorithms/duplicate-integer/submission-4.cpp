class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> val;
        for(int num: nums){
            if(val.count(num))return true;
            val.insert(num);
        }
        return false;
    }
};