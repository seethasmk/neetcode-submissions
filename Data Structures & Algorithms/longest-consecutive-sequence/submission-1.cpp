class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> vals(nums.begin(), nums.end());
        int maxLen = 0;
        for(int num: nums){
            int x = num;
            int length = 1;
            if(vals.count(x-1))continue;
            while(vals.count(x+1)){
                length++;
                x++;
            }
            maxLen = max(maxLen, length);
        }
        return maxLen;
    }
};
