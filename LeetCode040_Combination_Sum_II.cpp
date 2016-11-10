class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> result;
        vector<int> tmp;
        
        sort(candidates.begin(), candidates.end());
        
        get_result(candidates, 0, target, result, tmp);
        
        return result;
        
    }
    
    void get_result(vector<int>& candidates, int pos, int target, vector<vector<int>>& result, vector<int>& tmp)
    {
        if(target == 0)
        {
            result.push_back(tmp);
            return;
        }
        
        for(int i = pos; i < candidates.size() && candidates[i] <= target; i++)
        {
			//重复元素不选择
            if(i > pos && candidates[i] == candidates[i-1])
            {
                continue;
            }    
            
            tmp.push_back(candidates[i]);
            get_result(candidates, i+1, target-candidates[i], result, tmp);
            tmp.pop_back();
        }
        
    }
    
};