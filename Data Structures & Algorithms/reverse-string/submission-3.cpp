class Solution {
public:
    void reverseString(vector<char>& s) {
        rev(s, 0, s.size()-1);
    }

    void rev(vector<char> &v, int l, int r){
        if(l >= r)return;
        swap(v[l], v[r]);
        rev(v, l+1, r-1);
    }
};