class Solution {
public:
    void merge(vector<int>& nums, int L, int M, int R){
        vector<int> tmp;
        int i = L, j = M+1;
        while(i <= M && j <= R){
            if(nums[i] <= nums[j]){
                tmp.push_back(nums[i]);i++;
            }
            else{
                tmp.push_back(nums[j]);j++;
            }
        }
        while(i <= M){
            tmp.push_back(nums[i]);
            i++;
        }
        while(j <= R){
            tmp.push_back(nums[j]);
            j++;
        }

        for(int a = L; a <= R; a++){
            nums[a] = tmp[a-L];
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