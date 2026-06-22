class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> wdw;
        for(int i=0; i < nums.size(); i++){
            if(wdw.count(nums[i])){
                return true;
            }
            wdw.insert(nums[i]);
            if(wdw.size()>k){
                wdw.erase(nums[i-k]);
            }
        }
        return false;
    }
};