class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
      
        vector<int> res;
        int num1 = 0;
        int num2 = 0;
        int tmp = 0;
        int tmp1 = 0;
        
        for(int i = 0; i < nums.size(); i++)
        {
            tmp ^= nums[i];
        }
        
        tmp1 = tmp & (~(tmp-1));
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] & tmp1)
                num1 ^= nums[i];
            else
                num2 ^= nums[i];
        }
        
        res.push_back(num1);
        res.push_back(num2);
        
        return res;
    }
};