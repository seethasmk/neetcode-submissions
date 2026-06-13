class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> val;
        for(int i=0; i < nums.size(); i++){
            int comp = target - nums[i];
            if(val.count(comp))return {val[comp], i};
            val[nums[i]] = i;
        }
        return {};
    }
};
