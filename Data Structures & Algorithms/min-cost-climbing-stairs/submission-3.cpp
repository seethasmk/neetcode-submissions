class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        if(n <= 2){
            return min(cost[0], cost[1]);
        }
        int a = 0;
        int b = 0;
        for(int i=2; i < n ; i++){
            int c = min(a + cost[i-2], b + cost[i-1]);
            a = b;
            b = c;
        }
        return min(a + cost[n-2], b + cost[n-1]);
    }
};
