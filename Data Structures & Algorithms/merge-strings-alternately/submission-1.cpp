class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int l = 0;
        string res = "";
        while(l < word1.size() && l < word2.size()){
            res += word1[l];
            res += word2[l];
            l++;
        }
        while(l < word1.size()){
            res += word1[l];
            l++;
        }
        while(l < word2.size()){
            res += word2[l];
            l++;
        }
        return res;
    }
};