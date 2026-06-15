class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c = 0;
        int can = nums[0];
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == can){
                c++;
            }
            else{
                c--;
                if(c == 0)can = nums[i];
                c++;
            }
        }
        return can;
    }
};