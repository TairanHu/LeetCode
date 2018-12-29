class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        
        vector<vector<int>> res;
        vector<int> tmp;
        res.push_back(tmp);
        
        sort(nums.begin(), nums.end());
        
        for(int num = 0; num < nums.size(); num++)
        {
            get_res(num+1, 0, tmp, nums);
        }
        
        map<vector<int>, int>::iterator iter;
        for(iter = r.begin(); iter != r.end(); iter++)
        {
            res.push_back(iter->first);
        }
        
        return res;
        
    }
    
    void get_res(int num, int pos, vector<int>& tmp, vector<int>& nums)
    {
        if(num == 0)
        {
            r[tmp]++;
            return;
        }
        
        for(int i = pos; i < nums.size()-num; i++)
        {
            tmp.push_back(nums[i]);
            get_res(num-1, i+1, tmp, nums);
            tmp.pop_back();
        }
        
        for(int i = nums.size()-num; i < nums.size(); i++)
        {
            tmp.push_back(nums[i]);
        }
        r[tmp]++;
        for(int i = nums.size()-num; i < nums.size(); i++)
        {
            tmp.pop_back();
        }
        
    }
private:
    map<vector<int>, int> r;
};