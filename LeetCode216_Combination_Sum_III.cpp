class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> tmp;
        vector<int> vis(n, 0);
        vector<vector<int>> res;
        int pos = 1;
        int nums = 0;
        fun(res, tmp, vis, pos, k, n, nums);
        
        return res;
        
    }
    
    void fun(vector<vector<int>> &res, vector<int> &tmp, vector<int> &vis, int pos, int k, int n, int nums)
    {
        if(nums == k)
        {
            if(accumulate(tmp.begin(), tmp.end(), 0) == n)
            {
                res.push_back(tmp);
            }
            return;
        }
        
        for(int i = pos; i <= 9; i++)
        {
            if(vis[i])
                continue;
            
            if(!tmp.empty() && tmp[tmp.size()-1] > i)
                continue;
            
            vis[i] = 1;
            tmp.push_back(i);
            fun(res, tmp, vis, pos+1, k, n, nums+1);
            tmp.pop_back();
            vis[i] = 0;
        }        
    }
    
};