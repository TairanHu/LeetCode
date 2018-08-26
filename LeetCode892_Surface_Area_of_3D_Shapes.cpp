class Solution {
public:
    int surfaceArea(vector<vector<int>>& grid) {
        
        int res = 0;
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j] > 0)
                {
                    res += grid[i][j]*4 + 2;
                }                
            }
        }
        
        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                int tmp = 0;
                if(i > 0)
                {
                    tmp += min(grid[i][j], grid[i-1][j]); 
                }
                
                if(i < grid.size()-1)
                {
                    tmp += min(grid[i][j], grid[i+1][j]); 
                }
                
                if(j > 0)
                {
                    tmp += min(grid[i][j], grid[i][j-1]); 
                }
                
                if(j < grid[i].size()-1)
                {
                    tmp += min(grid[i][j], grid[i][j+1]); 
                }
                
                
                res -= tmp;
            }
        }
        
        return res;
        
    }
};