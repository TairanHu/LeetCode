class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        
        int pos = 0;
        int closeset_sum = 65535;
        int result = 0;
        
        sort(nums.begin(), nums.end());
        
        if(nums.size() < 3)
        {
            return result;
        }
        
        for(int i = 0; i < nums.size()-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }
            
            int start = i+1;
            int end = nums.size()-1;
            
            while(start < end)
            {
                if(start > i+1 && nums[start] == nums[start-1])
                {
                    start++;
                    continue;
                }
                
                int sum = nums[i] + nums[start] + nums[end];
                
                if(sum - target > 0)
                {
                    end--;
                }
                else if(sum - target <= 0)
                {
                    start++;
                }
                
                
                if(closeset_sum > abs(sum - target))
                {
                    closeset_sum = abs(sum - target);
                    result = sum;
                }
                
            }
            
            
        }
        
        return result;
        
    }
};