class Solution {
public:
    bool exist(vector<vector<char>>& board, string word) {
        
        vector<vector<bool> > vis(board.size(), vector<bool>(board[0].size(), 0));
        
        for(int i = 0; i < board.size(); i++)
        {
            for(int j = 0; j < board[0].size(); j++)
            {
                if(vis[i][j] == 0 && search(board, word, vis, i, j, 0))
                {
                        return true;
                }
            }
        }
        
        return false;
    }
    
    bool search(vector<vector<char>>& board, string word, vector<vector<bool>>& vis, int x, int y, int pos)
    {
        
        if(board[x][y] == word[pos])
        {
            vis[x][y] = 1;
            
            if(pos == word.size()-1)
            {
                return true;
            }
            
            if(x-1 >= 0 && vis[x-1][y] == 0)
            {
                if(search(board, word, vis, x-1, y, pos+1))
                {
                    return true;
                }
            }
            
            if(x+1 < board.size() && vis[x+1][y] == 0)
            {
                if(search(board, word, vis, x+1, y, pos+1))
                {
                    return true;
                }
            }
            
            if(y-1 >= 0 && vis[x][y-1] == 0)
            {
                if(search(board, word, vis, x, y-1, pos+1))
                {
                    return true;
                }
            }
            
            if(y+1 >= 0 && vis[x][y+1] == 0)
            {
                if(search(board, word, vis, x, y+1, pos+1))
                {
                    return true;
                }
            }
            
            vis[x][y] = 0;
            
        }
        
        return false;
        
    }
    
};