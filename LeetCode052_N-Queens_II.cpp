class Solution {
public:
    int totalNQueens(int n) {
        
        vector<int> tmp(n*2, 0);
        vector<vector<int>> vis(3, tmp);
        get_ans(0, n, vis);
        
        return res;
    }
    
    void get_ans(int row, int n, vector<vector<int>>& vis)
    {
        //cout << row << " ";
        if(row == n)
        {
            res++;
            return;
        }
        
        for(int i = 0; i < n; i++)
        {
            if(!vis[0][i] && !vis[1][row+i] && !vis[2][row-i+n])
            {
                vis[0][i] = 1;
                vis[1][row+i] = 1;
                vis[2][row-i+n] = 1;
                
                get_ans(row+1, n, vis);
                
                vis[0][i] = 0;
                vis[1][row+i] = 0;
                vis[2][row-i+n] = 0;
                
            }
        }
        
    }
private:
    int res = 0;
    
};