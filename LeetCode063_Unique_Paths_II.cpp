class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        int tmp[m][n] = {0};
        
        int i;
        for(i = 0; i < m; i++)
        {
            if(obstacleGrid[i][0] == 1)
            {
                break;
            }
            tmp[i][0] = 1;
        }
        while(i < m)
        {
            tmp[i][0] = 0;
            i++;
        }
        
        for(i = 0; i < n; i++)
        {
            if(obstacleGrid[0][i] == 1)
            {
                break;
            }
            tmp[0][i] = 1;
        }
        while(i < n)
        {
            tmp[0][i] = 0;
            i++;
        }

        for(int j = 1; j < m; j++)
        {
            for(int k = 1; k < n; k++)
            {
                if(obstacleGrid[j][k] == 1)
                {
                    tmp[j][k] = 0;
                    continue;
                }
                tmp[j][k] = tmp[j-1][k] + tmp[j][k-1];
            }
        }
        
        return tmp[m-1][n-1];
        
        
    }
};