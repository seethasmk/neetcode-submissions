class Solution {
public:
    bool isPalindrome(string s) {
        string ns = "";
        for(char ch:s){
            if(isalnum(ch)) ns+=tolower(ch);
        }
        int start = 0;
        int end = ns.length()-1;
        while(start <= end){
            if(ns[start] != ns[end])return false;
            start++;
            end--;
        }
        return true;
    }
};
