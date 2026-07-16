class Solution {
public:
    int subsetXORSum(vector<int>& nums) {
        int n = nums.size();
        int total = 0;

        for(int mask = 0; mask < (1 << n); mask++){
            int xorTotal = 0;
            for(int i=0; i < n; i++){
                if(mask & (1 << i)){
                    xorTotal ^= nums[i];
                }
            }
            total += xorTotal;
        }

        return total;
    }
};