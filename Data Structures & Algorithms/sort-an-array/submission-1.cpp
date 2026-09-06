class Solution {
public:
    void merge(vector<int>& nums, int l, int m, int r){
        vector<int> temp;
        int i = l, j = m+1;
        while(i <= m && j <= r){
            if(nums[i] <= nums[j]){
                temp.push_back(nums[i]);
                i++;
            }
            else{
                temp.push_back(nums[j]);
                j++;
            }
        }
        while(i <= m){
            temp.push_back(nums[i]);
            i++;
        }
        while(j <= r){
            temp.push_back(nums[j]);
            j++;
        }
        for(int k=l; k <= r; k++){
            nums[k] = temp[k-l];
        }
    }
    void mergeSort(vector<int>& nums, int l, int r){
        if(l >= r)return;
        int mid = l + (r-l)/2;
        mergeSort(nums, l, mid);
        mergeSort(nums, mid+1, r);
        merge(nums, l, mid, r);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;   
    }
};