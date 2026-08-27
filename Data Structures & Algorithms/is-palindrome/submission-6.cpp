class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char ch: s){
            if(isalnum(ch)){
                res += tolower(ch);
            }
        }
        int l = 0;
        int r = res.length()-1;
        while(l < r){
            if(res[l] != res[r])return false;
            l++;
            r--;
        }
        return true;
    }
};
