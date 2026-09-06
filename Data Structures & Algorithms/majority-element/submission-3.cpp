class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int cand = nums[0];
        for(int num: nums){
            if(count == 0){
                cand = num;
                count=1;
            }
            else if(num == cand){
                count++;
            }
            else count--;
        }
        return cand;
    }
};