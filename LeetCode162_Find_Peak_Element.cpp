class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        
        int l = 0;
        int r = nums.size()-1;
        int mid;
        
        while(l <= r)
        {
            mid = (l+r)/2;
            if((mid == 0 || nums[mid] > nums[mid-1]) && (mid == nums.size()-1 || nums[mid] > nums[mid+1]))
            {
                return mid;
            }
            else if(mid > 0 && nums[mid] < nums[mid-1])
            {
                r = mid - 1;
            }
            else
            {
                l = mid + 1;
            }
        }
        return mid;
        
    }
};