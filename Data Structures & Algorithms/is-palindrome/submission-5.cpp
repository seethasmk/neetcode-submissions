class Solution {
public:
    bool isPalindrome(string s) {
        string res = "";
        for(char ch: s){
            if(isalnum(ch)){
                res += tolower(ch);
            }
        }
        int start = 0;
        int end = res.length()-1;
        while(start < end){
            if(res[start] != res[end])return false;
            start++;
            end--;
        }
        return true;
    }
};
