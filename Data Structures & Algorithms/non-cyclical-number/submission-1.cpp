class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> nums;
        while(n != 1){
            n = sumOfSquares(n);
            if(nums.count(n))return false;
            nums.insert(n);
        }
        return true;
    }
    int sumOfSquares(int x){
        int sum = 0;
        while(x > 0){
            int digit = x % 10;
            sum += (digit * digit);
            x /= 10;
        }
        return sum;
    }
};
