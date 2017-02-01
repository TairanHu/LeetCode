class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        
        if(matrix.empty())
        {
            return 0;
        }
        
        int row = matrix.size();
        int col = matrix[0].size();
        int DP[row+1][col+1];
        int result = 0;
        
        memset(DP, 0, sizeof(DP));
        
        for(int i = 0; i < row; i++)
        {
            for(int j = 0; j < col; j++)
            {
                if(matrix[i][j] == '0')
                {
                    DP[i+1][j+1] = 0;
                }
                else
                {
                    DP[i+1][j+1] = 1 + min(DP[i][j], min(DP[i+1][j], DP[i][j+1]));
                    result = max(DP[i+1][j+1], result);
                }
            }
        }
        return result*result;
    }
};