class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> counts;
        for(int i=0; i < n+1; i++){
            int z = i;
            int c =0;
            while(z > 0){
                int r = z % 2;
                z /= 2;
                if(r)c++;
            }
            counts.push_back(c);
        }
        return counts;
    }
};
