class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        vector<int> stcost(n+1,0);
        stcost[0] = cost[0];
        stcost[1] = cost[1];
        for(int i=2; i < n; i++){
            stcost[i] = cost[i] + min(stcost[i-1], stcost[i-2]);
        }
        return min(stcost[n-1], stcost[n-2]);
    }
};
