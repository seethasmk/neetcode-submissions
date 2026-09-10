class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }
        vector<vector<int>> buckets(n+1);
        for(auto& [key, counts]: freq){
            buckets[counts].push_back(key);
        }
        vector<int> res;
        for(int i=n; i >=0; i--){
            for(int num: buckets[i]){
                res.push_back(num);
                if(res.size() == k)return res;
            }
        }
        return res;
    }
};
