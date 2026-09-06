class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> res(26, 0);
        for(char ch: s){
            res[ch - 'a']++;
        }
        for(char ch: t){
            res[ch - 'a']--;
        }
        for(int no: res){
            if(no != 0)return false;
        }
        return true;
    }
};
