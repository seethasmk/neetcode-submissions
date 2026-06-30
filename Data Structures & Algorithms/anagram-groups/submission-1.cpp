class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<array <int,26>, vector<string>> ags;
        for(int i=0; i < strs.size(); i++){
            array<int,26> arr = {0};
            for(char ch: strs[i]){
                arr[ch - 'a']++;
            }
            ags[arr].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for(auto& [key, val]: ags){
            res.push_back(val);
        }
        return res;
    }
};
