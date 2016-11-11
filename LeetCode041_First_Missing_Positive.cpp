class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        
        if(nums.size() == 0)
        {
            return 1;
        }
        
        sort(nums.begin(), nums.end());
        
        if(nums[0] > 1)
        {
            return 1;
        }
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] - nums[i-1] > 1)
            {
                if(nums[i-1] >= 0)
                {
                    return nums[i-1]+1;
                }
                else if(nums[i] > 1)
                {
                    return 1;
                }
                else
                {
                    continue;
                }
                
            }
        }
        
        if(nums[nums.size()-1] >= 0)
        {
            return nums[nums.size()-1]+1;
        }
        return 1;
    }
};