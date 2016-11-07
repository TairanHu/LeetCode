class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        //使用迭代器会超时
        /*for(vector<int>::iterator it = nums.begin(); it != nums.end(); it++)
        {
            if(it != nums.begin() && *it == *(--it))
            {
                ++it;
                nums.erase(it);
            }
        }*/
        
        //int count = nums.size();
        
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] == nums[i-1])
            {
                //count--;
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        
        return nums.size();
        
    }
};