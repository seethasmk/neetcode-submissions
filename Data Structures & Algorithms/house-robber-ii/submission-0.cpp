class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1)return nums[0];
        if(n == 2)return max(nums[0], nums[1]);
        int a = houserob(nums, 0, n-2);
        int b = houserob(nums, 1, n-1);
        return max(a, b);
    }

    int houserob(vector<int>& nums, int start, int end){
        int a = nums[start];
        int b = max(nums[start], nums[start+1]);
        for(int i= start+2; i <= end; i++){
            int c = max(nums[i]+ a, b);
            a = b;
            b = c;
        }
        return b;
    }
};
