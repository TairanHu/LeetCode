class Solution {
private:
    int m, n;
public:
    void solve(vector<vector<char>>& board) {
        if(board.size() == 0)
        {
            return ;
        }
        
        m = board.size(), n = board[0].size();
        
        for(int i = 0; i < m; i++) 
        {
            dfs(i, 0, board);
            dfs(i, n - 1, board);
        }
        
        for(int j = 0; j < n; j++) 
        {
            dfs(0, j, board);
            dfs(m - 1, j, board);
        }
        
        for(int i = 0; i < m; i++) 
        {
            for(int j = 0; j < n; j++) 
            {
                if(board[i][j] == '*')
                    board[i][j] = 'O';
                else if(board[i][j] == 'O')
                    board[i][j] = 'X';
            }
        }
    }
    void dfs(int row, int col, vector<vector<char>>& board) 
    {
        if(board[row][col] != 'O') return;
        
        board[row][col] = '*';
        
        if(row - 1 > 0) dfs(row - 1, col, board);
        if(col - 1 > 0) dfs(row, col - 1, board);
        if(row + 1 < m) dfs(row + 1, col, board);
        if(col + 1 < n) dfs(row, col + 1, board);
    }
};