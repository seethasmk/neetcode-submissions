class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> vals;
        for(int i=0; i < nums.size(); i++){
            int need = target - nums[i];
            if(vals.count(need))return {vals[need], i};
            vals[nums[i]] = i;
        }
        return {};
    }
};
