class Solution {
public:
    vector<int> getRow(int rowIndex) {
        
        vector<vector<int>> result;
        vector<int> tmp;
        
        tmp.push_back(1);
        result.push_back(tmp);
        
        for(int i = 1; i <= rowIndex; i++)
        {
            tmp.clear();
            tmp.push_back(1);
            for(int j = 0; j < i-1; j++)
            {
                tmp.push_back(result[i-1][j] + result[i-1][j+1]);
            }
            tmp.push_back(1);
            result.push_back(tmp);
        }
        
        return tmp;
        
    }
};