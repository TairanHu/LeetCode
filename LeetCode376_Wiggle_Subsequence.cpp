class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
        
        if(nums.size() <= 1)
        {
            return nums.size();
        }
        
        int last = 0;
        int med = 1;
        
        while(1)
        {
            if(med >= nums.size())
            {
                return 1;
            }
            if(nums[med] != nums[last])
            {
                break;
            }
            med++;
        }
        
        int res = 2;
        int diff = nums[med] - nums[last];
        
        for(int i = med+1; i < nums.size(); i++)
        {
            if(nums[i] == nums[med])
            {
                continue;
            }
            
            if(diff*(nums[i] - nums[med]) < 0)
            {
                last = med;
                med = i;
                diff = nums[med] - nums[last];
                res++;
            }
            else
            {
                med = i;
            }
        }
        
        return res;
        
        
    }
};