class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        if(nums.size() <= 1)
        {
            return 0;
        }
        
        int res = 0;
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-1; i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            
            for(int j = nums.size()-1; j > i; j--)
            {
                if(j < nums.size()-1 && nums[j] == nums[j+1])
                {
                    continue;
                }
                
                if(k < nums[j] - nums[i])
                {
                    continue;
                }
                if(k == nums[j] - nums[i])
                {
                    res++;
                    continue;
                }
                if(k > nums[j] - nums[i])
                {
                    break;
                }
            }
        }
        
        return res;
    }
};