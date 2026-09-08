class Solution {
public:
    int climbStairs(int n) {
        int ways1 = 1;
        int ways2 = 2;
        if(n <= 2)return n;
        for(int i=3; i <= n; i++){
            int ways3 = ways2 + ways1;
            ways1 = ways2;
            ways2 = ways3;
        }
        return ways2;
    }
};
