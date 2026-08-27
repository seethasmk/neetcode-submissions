class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {false};
        bool col[9][10] = {false};
        bool box[9][10] = {false};
        for(int r=0; r <9; r++){
            for(int c=0; c<9; c++){
                if(board[r][c] == '.')continue;
                int digit = board[r][c] - '0';
                int b = (r/3 * 3)+ c/3;
                if(row[r][digit] || col[c][digit]|| box[b][digit]){
                    return false;
                }
                row[r][digit] = true;
                col[c][digit] = true;
                box[b][digit] = true;
            }
        }  
        return true;
    }
};
