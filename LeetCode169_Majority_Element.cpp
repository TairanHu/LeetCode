class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count = 0;
        int res;
        
        for(int i = 0; i < nums.size(); i++)
        {
            if(count == 0)
            {
                res = nums[i];
                count++;
            }                
            else
            {
                res == nums[i] ? count++ : count--;
            }                
        }
        
        return res;        
    }
};