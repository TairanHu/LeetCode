class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        if(nums.size() == 0)
            return;
        
        vector<int> res;
        int size = nums.size();
        for(int i = 0; i < size; i++)
        {
            if(nums[i])
            {
                res.push_back(nums[i]);
            }            
        }
        
        for(int i = res.size(); i < size; i++)
        {
            res.push_back(0);
        }
        
        nums = res;
        
    }
};



class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        
        int size = nums.size();
        int left = 0;
        int right = 0;
        
        while(right < size)
        {
            if(nums[right])
                swap(nums[left++], nums[right]);
            
            right++;
        }
        
    }
};