class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> vals;
        for(int i=0; i < nums.size(); i++){
            if(vals.count(nums[i]))return true;
            vals.insert(nums[i]);
        }
        return false;
    }
};