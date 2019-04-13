class Solution {
public:
    int nthUglyNumber(int n) {

        vector<int> nums(n, 0);
        nums[0] = 1;
        int times2 = 0;
        int times3 = 0;
        int times5 = 0;
        
        for(int i = 1; i < n; i++)
        {
            nums[i] = min(nums[times2]*2, min(nums[times3]*3, nums[times5]*5));
            if(nums[i] == nums[times2]*2)
                times2++;
            if(nums[i] == nums[times3]*3)
                times3++;
            if(nums[i] == nums[times5]*5)
                times5++;
        }
        
        return nums[n-1];
        
        
    }
};