class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        vector<int> dp(nums.size(), 1);
        int res = 1;
        
        for(int i = 1; i < nums.size(); i++)
        {
            for(int j = i-1; j >= 0; j--)
            {
                if(nums[i] > nums[j])
                {
                    int tmp = dp[j] + 1;
                    dp[i] = dp[i] > tmp ? dp[i] : tmp;
                    
                }
            }
            res = res > dp[i] ? res : dp[i];
        }
        
        return res;
        
    }
};



//nlogn  binary
class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        vector<int> res;
        
        for(int i = 0; i < nums.size(); i++)
        {
            auto it = lower_bound(res.begin(), res.end(), nums[i]);
            if(it == res.end())
                res.push_back(nums[i]);
            else
                *it = nums[i];
            
        }
        
        return res.size();
        
    }
};