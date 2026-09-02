class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int n1 = s1.length();
        int n2 = s2.length();
        if(n1 > n2)return false;
        vector<int> s1c(26, 0);
        vector<int> wdw(26, 0);
        for(int i=0; i < n1; i++){
            s1c[s1[i]-'a']++;
            wdw[s2[i]-'a']++;
        }
        if(s1c == wdw)return true;
        for(int i=n1; i < n2; i++){
            wdw[s2[i]-'a']++;
            wdw[s2[i-n1]-'a']--;
            if(wdw == s1c)return true;
        }
        return false;
    }
};
