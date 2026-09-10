class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> vals;
        while(n != 1){
            int sum = 0;
            while(n > 0){
                sum += pow(n%10, 2);
                n /= 10;
            }
            if(vals.count(sum))return false;
            vals.insert(sum);
            n = sum;
        }
        return true;
    }
};
