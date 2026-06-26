class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int w = 0, mino = 0;
        for(int i=0; i < k; i++){
            if(blocks[i] == 'W')w++;
        }
        mino = w;
        for(int i =k; i < blocks.size(); i++){
            if(blocks[i] == 'W')w++;
            if(blocks[i-k] == 'W')w--;
            mino = min(w, mino);
        }
        return mino;
    }
};