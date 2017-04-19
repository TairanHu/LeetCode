class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        
        long L = 0;
        long R = 0;
        long res = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            L = max((int)L, nums[i]);
            R += nums[i];
        }
        
        while(L <= R)
        {
            long mid = (L+R)/2;
            
            if(guess(mid, nums, m))
            {
                res = mid;
                R = mid-1;
            }
            else
            {
                L = mid+1;
            }
            
        }
        
        return res;
        
    }
    
    bool guess(long mid, vector<int>& nums, int m)
    {
        long sum = 0;
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] > mid)
            {
                return false;
            }
            
            if(sum + nums[i] > mid)
            {
                m--;
                sum = nums[i];
            }
            else
            {
                sum += nums[i];
            }
        }
        
        return m >= 1;
    }
    
    
    
};