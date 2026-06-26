class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string res = "";
        if(str1 + str2 != str2+ str1)return res;
        int a = str1.length();
        int b = str2.length();
        int c = gcd(a,b);
        res = str1.substr(0,c);
        return res;
    }

    int gcd(int a, int b){
        if(b == 0)return a;
        return gcd(b, a%b);
    }
};