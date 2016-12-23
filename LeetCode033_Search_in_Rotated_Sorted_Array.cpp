class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int l = 0;
        int r = nums.size()-1;
        int q;
        
        while(l <= r)
        {
            q = (l+r)/2;
            if(nums[q] == target)
            {
                return q;
            }
            
            if(nums[q] >= nums[l])
            {
                if(nums[l] <= target && target <= nums[q])
                {
                    r = q-1;
                }
                else
                {
                    l = q+1;
                }
            }
            else
            {
                if(nums[r] >= target && target >= nums[q])
                {
                    l = q+1;
                }
                else
                {
                    r = q-1;
                }
            }
            
        }
        return -1;
        
    }
};