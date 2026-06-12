class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans = nums;
        for(int no: nums){
            ans.push_back(no);
        }
        return ans;
    }
};