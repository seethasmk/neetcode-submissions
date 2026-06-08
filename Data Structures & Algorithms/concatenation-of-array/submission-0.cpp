class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int i = 2;
        vector<int> ans;
        while(i > 0){
            for(int ch: nums){
                ans.push_back(ch);
            }
            i--;
        }
        return ans;
    }
};