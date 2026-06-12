class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;
        int arr[26] = {0};
        for(char ch: s){
            arr[ch - 'a']++;
        }
        for(char hc: t){
            arr[hc - 'a']--;
        }
        for(int i = 0; i < 26; i++){
            if(arr[i] != 0)return false;
        }
        return true;
    }

};
