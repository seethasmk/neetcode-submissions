class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int i = a.length()-1;
        int j = b.length()-1;

        while(i >= 0 || j >= 0 || carry){
            int sa = (i >= 0)? (a[i]-'0'): 0;
            int sb = (j >= 0)? (b[j]-'0'): 0;
            int sab = sa + sb + carry;
            int rbit = sab % 2;
            carry = sab / 2;
            res = char('0'+ rbit)+ res;
            i--;
            j--;
        }
        return res;
    }
};