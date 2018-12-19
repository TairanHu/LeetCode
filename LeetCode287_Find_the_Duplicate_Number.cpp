class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        
        vector<bool> tmp(nums.size(), 0);
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(tmp[nums[i]] == 1)
            {
                return nums[i];
            }
            
            tmp[nums[i]] = 1;
        }
    }
};