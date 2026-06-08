class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int, int> newmap;
        for(int i=0; i < n; i++){
            int val = target - nums[i];
            if(newmap.find(val) != newmap.end()){
                return {newmap[val], i};
            }
            newmap[nums[i]] = i;
        }
        return {};
    }
};
