class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> result;
        vector<int> tmp;
        
        int n = nums.size();
        
        for(int k = 0; k <= n; k++)
        {
            get_result(n, k, result, tmp, nums, 0);
        }
        
        return result;
    }
    
    void get_result(int n, int k, vector<vector<int>>& result, vector<int>& tmp, vector<int>& nums, int pos)
    {
        if(k == 0)
        {
            result.push_back(tmp);
            return;
        }
        
        for(int i = pos; i < n; i++)
        {
            tmp.push_back(nums[i]);
            get_result(n, k-1, result, tmp, nums, i+1);
            tmp.pop_back();
        }
    }
};