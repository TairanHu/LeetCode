class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        
        int count = nums.size();
        
        for(int i = 2; i < count; i++)
        {
            if(nums[i] == nums[i-2])
            {
                count--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        return count;
    }
};