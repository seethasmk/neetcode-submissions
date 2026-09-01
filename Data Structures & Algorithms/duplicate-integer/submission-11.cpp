class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> dups;
        for(int no: nums){
            if(dups.count(no))return true;
            dups.insert(no);
        }
        return false;
    }
};