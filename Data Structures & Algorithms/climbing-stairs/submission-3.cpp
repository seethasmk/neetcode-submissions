class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)return n;
        int prev = 1;
        int imd = 2;
        for(int i=3; i <= n; i++){
            int curr = imd + prev;
            prev = imd;
            imd = curr;
        }
        return imd;
    }
};
