class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int a = 0;
        for(int no: nums){
            a ^= no;
        }
        return a;
    }
};
