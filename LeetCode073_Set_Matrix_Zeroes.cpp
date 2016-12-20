class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int row = matrix.size();
        
        if(row == 0)
        {
            return;
        }
        
        int col = matrix[0].size();
        
        vector<vector<int>> pos;
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == 0)
                {
                    vector<int> tmp;
                    tmp.push_back(i);
                    tmp.push_back(j);
                    
                    pos.push_back(tmp);
                }
            }
        }
        
        for(int i = 0; i < pos.size(); i++)
        {
            int j = pos[i][0];
            while(col--)
            {
                matrix[j][col] = 0;
            }
            
            j = pos[i][1];
            while(row--)
            {
                matrix[row][j] = 0;
            }
            
            row = matrix.size();
            col = matrix[0].size();
        }
        
        
    }
};