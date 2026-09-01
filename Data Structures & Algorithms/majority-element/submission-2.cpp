class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int element = nums[0];
        for(int no: nums){
            if(count == 0){
                element = no;
                count++;
            }
            else if(no != element){
                count--;
            }
            else if(element == no)count++;
        }
        return element;
    }
};