class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<vector<int>> result;
        vector<int> tmp = nums;
        
        int size = nums.size()-1;
        
        get_result(result, nums, size, tmp);
        return result;
    }
    
    void get_result(vector<vector<int>>& result, vector<int>& nums, int size, vector<int>& tmp)
    {
        if(size == 0)
        {
            result.push_back(tmp);
            return;
        }
        
        for(int i = 0; i <= size; i++)
        {
            swap(tmp[i], tmp[size]);
            get_result(result, nums, size-1, tmp);
            swap(tmp[i], tmp[size]);
        }
    }
    
};