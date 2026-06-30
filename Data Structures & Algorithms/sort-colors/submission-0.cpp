class Solution {
public:
    void sortColors(vector<int>& nums) {
        int c0 = 0, c1 = 0, c2 = 0;
        for(int no: nums){
            if(no == 0)c0++;
            else if(no == 1)c1++;
            else c2++;
        }
        int i = 0;
        while(i < nums.size()){
            while(c0 > 0){
                nums[i] = 0;
                i++;
                c0--;
            }
            while(c1 > 0){
                nums[i] = 1;
                i++;
                c1--;
            }
            while(c2 > 0){
                nums[i] = 2;
                i++;
                c2--;
            }
        }
    }
};