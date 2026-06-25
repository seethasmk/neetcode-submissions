class Solution {
public:
    string convertToTitle(int columnNumber) {
        string res = "";
        while(columnNumber > 0){
            int rem = (columnNumber -1) % 26;
            res = char('A'+rem) + res;
            columnNumber = (columnNumber -1)/26;
        }
        return res;
    }
};