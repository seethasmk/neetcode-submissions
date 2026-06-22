class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> ans;
        for(int i=0; i < prices.size()-1; i++){
            int maxval = 0;
            for(int j=i+1; j < prices.size(); j++){
                maxval = max(maxval, prices[j] - prices[i]);
            }
            ans.push_back(maxval);
        }
        int maxans = *max_element(ans.begin(), ans.end());
        return maxans;
    }
};
