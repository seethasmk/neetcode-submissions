class Solution {
public:
    int getSum(int a, int b) {
        unsigned int ua = a, ub = b;
        while(ub != 0){
            unsigned int carry = ua & ub;
            ua = ua ^ ub;
            ub = carry << 1;
        }

        return static_cast<int>(ua);
    }
};
