class Solution {
public:
    bool isPalindrome(int x) {
        int a = x;
        int b = 0;
        while(x > 0){
            int r = x % 10;
            b = b * 10 + r;
            x/=10;
        }
        return b == a;
    }
};