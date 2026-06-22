class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = n-1;
        int c = m+n-1;
        while(a >= 0 && b>= 0){
            if(nums1[a] > nums2[b]){
                nums1[c] = nums1[a];
                c--;
                a--;
            }
            else{
                nums1[c] = nums2[b];
                b--;
                c--;
            }
        }
        int d = 0;
        while(d <= b){
            nums1[d] = nums2[d];
            d++;
        }
    }
};