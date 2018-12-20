class NumMatrix {
public:
    NumMatrix(vector<vector<int>> matrix) {
        
        if(matrix.size() == 0)
            return;
        
        int tmp = 0;
        vector<int> sum;
        
        for(int i = 0; i < matrix[0].size(); i++)
        {
            tmp += matrix[0][i];
            sum.push_back(tmp);
        }
        DP.push_back(sum);
        
        for(int i = 1; i < matrix.size(); i++)
        {
            tmp = 0;
            sum.clear();
            for(int j = 0; j < matrix[0].size(); j++)
            {
                tmp += matrix[i][j];
                sum.push_back(tmp + DP[i-1][j]);
            }
            DP.push_back(sum);
        }        
        
    }
    
    int sumRegion(int row1, int col1, int row2, int col2) {
        
        if(row1 > 0 && col1 > 0)
        {
            return DP[row2][col2] + DP[row1-1][col1-1] - DP[row2][col1-1] - DP[row1-1][col2];
        }
        
        if(row1 > 0)
        {
            return DP[row2][col2] - DP[row1-1][col2];
        }
        
        if(col1 > 0)
        {
            return DP[row2][col2] - DP[row2][col1-1];
        }
        
        return DP[row2][col2];
        
    }
    
private:
    vector<vector<int>> DP;
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix obj = new NumMatrix(matrix);
 * int param_1 = obj.sumRegion(row1,col1,row2,col2);
 */