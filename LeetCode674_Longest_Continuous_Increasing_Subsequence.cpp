class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        
        if(nums.size() == 0)
            return 0;
        
        int res = 1;
        int count_num = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] - nums[i-1] >0)
                count_num++;
            else
                count_num = 1;
            
            res = res > count_num ? res : count_num;           
            
        }
        
        return res;
        
        
    }
};