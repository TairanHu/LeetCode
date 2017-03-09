class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>> result;
        vector<int> tmp;
        
        if(numRows == 0)
        {
            return result;
        }
        
        tmp.push_back(1);
        result.push_back(tmp);
        tmp.clear();
        
        for(int i = 1; i < numRows; i++)
        {
            tmp.push_back(1);
            for(int j = 0; j < i-1; j++)
            {
                tmp.push_back(result[i-1][j] + result[i-1][j+1]);
            }
            tmp.push_back(1);
            result.push_back(tmp);
            tmp.clear();
        }
        
        return result;
        
    }
};