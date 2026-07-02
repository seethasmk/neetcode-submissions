class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][10] = {false};
        bool col[9][10] = {false};
        bool box[9][10] = {false};
        for(int r = 0; r < 9; r++){
            for(int c=0; c < 9; c++){
                if(board[r][c] == '.')continue;
                int d = board[r][c] - '0';
                int b = (r/3)*3 + (c/3);
                if(row[r][d]|| col[c][d]|| box[b][d]){
                    return false;
                }
                row[r][d] = true;
                col[c][d] = true;
                box[b][d] = true;
            }
        }
        return true;
    }
};
