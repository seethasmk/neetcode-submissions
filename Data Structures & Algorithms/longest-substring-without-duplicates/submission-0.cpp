class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxLen = 0;
        int left = 0;
        unordered_set<char> wdw;
        for(int right = 0; right < s.size(); right++){
            while(wdw.count(s[right])){
                wdw.erase(s[left]);
                left++;
            }
            wdw.insert(s[right]);
            maxLen = max(maxLen, right - left + 1);
        }
        return maxLen;
    }
};
