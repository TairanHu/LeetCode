class Solution {
public:
    int rob(vector<int>& nums) {
        
        const int size = nums.size();
        
        if(size == 0)
        {
            return 0;
        }
        
        int DP[size];
        if(size == 1)
        {
            return nums[0];
        }
        if(size == 2)
        {
            return max(nums[0], nums[1]);
        }
        DP[0] = nums[0];
        DP[1] = max(nums[0], nums[1]);
        
        for(int i = 2; i < size; i++)
        {
            int tem = 0;
            tem = DP[i-2] + nums[i];
            DP[i] = max(DP[i-1], tem);
        }
        
        return DP[size-1];
        
        
    }
};