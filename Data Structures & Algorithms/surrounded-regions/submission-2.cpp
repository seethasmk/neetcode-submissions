class Solution {
public:
    void solve(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                bool isCorner = (i==0 || j == 0 || i == rows-1 || j == cols -1);
                if(isCorner && board[i][j] == 'O'){
                    dfs(board, i, j);
                }
            }
        }

        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(board[i][j] == 'S') board[i][j] = 'O';
                else if(board[i][j] == 'O')board[i][j] = 'X';
            }
        }
    }

    void dfs(vector<vector<char>>& board, int i, int j){
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size() || board[i][j] != 'O')return;
        board[i][j] = 'S';
        dfs(board, i+1, j);
        dfs(board, i-1, j);
        dfs(board, i, j+1);
        dfs(board, i, j-1);
    }
};
