class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        
        vector<vector<string>> res;
        vector<string> tmp;
        get_ans(res, tmp, n, 0);
        
        return res;
        
    }
    
    void get_ans(vector<vector<string>>& res, vector<string> tmp, int n, int row)
    {
        if(row == n)
        {
            res.push_back(tmp);
            return;
        }
        
        string line(n, '.');
        
        for(int i = 0; i < n; i++)
        {
            int j;
            for(j = 0; j < row; j++)
            {
                int pos = tmp[j].find('Q');
                if(tmp[j][i] == 'Q' || row-i == j-pos || row+i == j+pos)
                {
                    break;
                }
            }
            
            if(j == row)
            {
                line[i] = 'Q';
                tmp.push_back(line);
                get_ans(res, tmp, n, row+1);
                tmp.pop_back();
                line[i] = '.';
            }
        }
            
    }
    
};