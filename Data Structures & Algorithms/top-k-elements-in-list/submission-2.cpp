class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        for(int num: nums){
            freq[num]++;
        }
        int n = nums.size();
        vector<vector<int>> buckets(n+1);
        for(auto& [num, count]: freq){
            buckets[count].push_back(num);
        }
        vector<int> res;
        for(int i =n; i >=0; i--){
            for(int num: buckets[i]){
                res.push_back(num);
                if(res.size() == k)return res;
            }
        }
        return res;
    }
};
