class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        
        //bool result = false;
        
        
        
        vector<int> sum(nums.size(), 0);
        sum[0] = nums[0];
        
        if(k == 0)
        {
            for(int i = 1; i < nums.size(); i++)
            {
                sum[i] = sum[i-1] + nums[i];
                
                if(sum[i] == 0)
                {
                    return true;
                }
                
                for(int j = 0; j < i-1; j++)
                {
                    if( (sum[i] - sum[j]) == 0 )
                    {
                        return true;
                    }
                }
                
            }
            
            return false;
        }
        
        
        for(int i = 1; i < nums.size(); i++)
        {
            sum[i] = sum[i-1] + nums[i];
            
            if(sum[i] % k == 0)
            {
                return true;
            }
            
            for(int j = 0; j < i-1; j++)
            {
                if( (sum[i] - sum[j])%k == 0 )
                {
                    return true;
                }
            }
        }
        
        return false;
        
    }
};