class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {

        if(grid.size() == 0)
            return 0;

        int x = 0;
        int y = 0;
        int z = 0;

        for(int i = 0; i < grid.size(); i++)
        {
            for(int j = 0; j < grid[i].size(); j++)
            {
                if(grid[i][j])
                    z += 1;
            }
        }

        for(int i = 0; i < grid.size(); i++)
        {
            int max_tmp = 0;
            for(int j = 0; j < grid[i].size(); j++)
            {
                max_tmp = (max_tmp > grid[i][j]) ? max_tmp : grid[i][j];
            }

            x += max_tmp;
        }

        int i = 0;
        for(int j = 0; j < grid[i].size(); j++)
        {
            int max_tmp = 0;
            for(i = 0; i < grid.size(); i++)
            {
                max_tmp = (max_tmp > grid[i][j]) ? max_tmp : grid[i][j];
            }
            i = 0;
            y += max_tmp;
        }

        return x + y + z;

    }
};
