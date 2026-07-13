class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int p = 0;
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j]){
                    int sp = 4;
                    if((i+1 <= rows-1) && grid[i+1][j])sp-=1;
                    if((i-1 >= 0) && grid[i-1][j])sp-=1;
                    if((j+1 <= cols-1) && grid[i][j+1])sp-=1;
                    if((j-1 >= 0) && grid[i][j-1])sp-=1;
                    p += sp;
                }
            }
        }
        return p; 
    }
};