class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> result;
        vector<int> tmp;
        sort(candidates.begin(), candidates.end());

        //for(int i = 0; i < candidates.size(); i++)
        {
            tmp.clear();
            get_result(candidates, target, 0, result, tmp);
        }

        return result;

    }

    void get_result(vector<int>& candidates, int target, int pos, vector<vector<int>>& result, vector<int>& tmp)
    {
        if(target == 0)
        {
            result.push_back(tmp);
            return;
        }

        for(int i = pos; i < candidates.size() && candidates[i] <= target; i++ )
        {
            ////不考虑重复元素
            tmp.push_back(candidates[i]);
            get_result(candidates, target-candidates[i], i, result, tmp);
            tmp.pop_back();
        }

    }

};
