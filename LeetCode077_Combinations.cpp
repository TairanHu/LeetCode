class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        
        vector<vector<int>> result;
        vector<int> tmp;
        
        get_result(n, k, result, tmp, 0);
        return result;
        
    }
    
    void get_result(int n, int k, vector<vector<int>>& result, vector<int>& tmp, int pos)
    {
        if(k == 0)
        {
            result.push_back(tmp);
            return;
        }
        
        for(int i = pos; i < n; i++)
        {
            tmp.push_back(i+1);
            get_result(n, k-1, result, tmp, i+1);
            tmp.pop_back();
        }
        
        
    }
};