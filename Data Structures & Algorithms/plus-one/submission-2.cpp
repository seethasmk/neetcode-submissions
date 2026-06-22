class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        long long num = 0;
        vector<int> no;
        for(int ch: digits){
            num = (num * 10) + ch;
        }
        num += 1;
        while(num > 0){
            no.push_back(num % 10);
            num /= 10;
        }
        reverse(no.begin(), no.end());
        return no;
    }
};
