class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int maxlength = 0;
        unordered_set<int> vals(nums.begin(), nums.end());
        for(int no: vals){
            if(vals.count(no-1))continue;
            int length = 1;
            int curr = no;
            while(vals.count(curr+1)){
                length++;
                curr++;
            }
            maxlength = max(length, maxlength);
        }
        return maxlength;
    }
};
