class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> maps;
        for(int i=0; i < nums.size(); i++){
            int val = target - nums[i];
            if(maps.count(val)){
                return {maps[val], i};
            }
            maps[nums[i]] = i;
        }
        return {};
    }
};
