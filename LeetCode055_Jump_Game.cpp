class Solution {
public:
    bool canJump(vector<int>& nums) {
        
        int n = nums.size();
        int step_max = 0;
        
        for(int i = 0; i < n; i++)
        {
            if(i > step_max)
            {
                return false;
            }
            if(step_max < i+nums[i])
            {
                step_max = i + nums[i];
            }
        }
        return true;
    }
    
};