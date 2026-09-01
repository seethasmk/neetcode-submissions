class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> vals;
        for(int i=0; i < nums.size(); i++){
            int diff = target - nums[i];
            if(vals.count(diff)){
                return {vals[diff], i};
            }
            vals[nums[i]] = i;
        } 
        return {}; 
    }
};
