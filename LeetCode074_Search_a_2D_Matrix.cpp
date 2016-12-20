class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int l_row = 0;
        int r_row = matrix.size()-1;
        int row = (l_row + r_row)/2;
        
        if(r_row == -1)
        {
            return false;
        }
        
        while(l_row <= r_row)
        {
            if(matrix[row][0] < target)
            {
                l_row = row+1;
                row = (l_row + r_row)/2;
            }
            else if(matrix[row][0] > target)
            {
                r_row = row-1;
                row = (l_row + r_row)/2;
            }
            else
            {
                return true;
            }

        }
        
        int l_col = 0;
        int r_col = matrix[0].size()-1;
        int col = (l_col + r_col)/2;
        
        while(l_col <= r_col)
        {
            if(matrix[row][col] < target)
            {
                l_col = col+1;
                col = (l_col + r_col)/2;
            }
            else if(matrix[row][col] > target)
            {
                r_col = col-1;
                col = (l_col + r_col)/2;
            }
            else
            {
                return true;
            }
        }
        
        return false;
        
    }
};