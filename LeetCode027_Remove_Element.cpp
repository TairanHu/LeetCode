class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        
	//可以先排序，然后按照二分法定位
        for(int i = 0; i < nums.size(); i++)
        {
            if(nums[i] == val)
            {
                nums.erase(nums.begin() + i);
                i--;
            }
        }
        return nums.size();
        
    }
};