class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr1[26] = {0};
        int arr2[26] = {0};
        for(int i=0; i < s.length(); i++){
            arr1[s[i] - 'a']++;
        }
        for(int j=0; j < t.length(); j++){
            arr2[t[j] - 'a']++;
        }
        for(int k = 0; k < 26; k++){
            if(arr1[k] != arr2[k])return false;
        }
        return true;
    }

};
