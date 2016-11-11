
//±È½Ï´Ö²Ú

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        if(matrix.size() == 0)
        {
            return result;
        }
        int num = matrix.size();
        
        int i = -1;
        int j = -1;
       
        for(int row = 0; row <= num/2; row++)
        {
            int case1 = 1, case2 = 1, case3 = 1, case4 = 1;
            i = i+1;
            j = j+1;
            while(j < matrix[i].size()-row)
            {
                case1 = 0;
                result.push_back(matrix[i][j++]);
            }
            if(case1) break;
            i = i+1;
            j = j-1;
            while(i < matrix.size()-row)
            {
                case2 = 0;
                result.push_back(matrix[i++][j]);
            }
            if(case2) break;
            i = i-1;
            j = j-1;
            while(j >= row)
            {
                case3 = 0;
                result.push_back(matrix[i][j--]);
            }
            if(case3) break;
            i = i-1;
            j = j+1;
            while(i >= row+1)
            {
                case4 = 0;
                result.push_back(matrix[i--][j]);
            }
            if(case4) break;
            //cout << matrix[i+1][j] << " ";
        }
        return result;
        
    }
};