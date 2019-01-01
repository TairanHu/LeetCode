class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        
        vector<int> res;
        if(nums.size() == 0)
        {
            return res;
        }
        
        vector<int> DP(nums.size(), -1);
        vector<int> tmp(nums.size(), 1);
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size(); i++)
        {
            DP[i] = i;
            int max = 1;
            for(int j = i-1; j >= 0; j--)
            {
                if(nums[i]%nums[j] == 0)
                {
                    if(max < (tmp[j]+1))
                    {
                        max = tmp[j]+1;
                        DP[i] = j;
                    }
                }
            }
            tmp[i] = max;
        }

        int cur = max_element(tmp.begin(), tmp.end()) - tmp.begin();

        while(DP[cur] != cur)
        {
            res.push_back(nums[cur]);
            cur = DP[cur];
        }
        res.push_back(nums[cur]);
        
        //reverse(res.begin(), res.end());
        return res;      
    }
};