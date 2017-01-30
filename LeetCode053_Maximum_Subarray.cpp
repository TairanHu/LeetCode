class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int size = nums.size();
        int DP[size] = {0};
        int result = 0;
        
        DP[0] = nums[0];
        result = DP[0];
        
        for(int i = 1; i < size; i++)
        {
            int tem = DP[i-1] + nums[i];
            if(tem < nums[i])
            {
                DP[i] = nums[i];
            }
            else
            {
                DP[i] = tem;
            }
            
            if(result < DP[i])
            {
                result = DP[i];
            }
            
        }
        return result;
        
    }
};