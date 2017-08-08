class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        if (nums.empty() || (k %= nums.size()) == 0) return;
        
        fun(nums, 0, nums.size()-k-1);
        fun(nums, nums.size()-k, nums.size()-1);
        
        fun(nums, 0, nums.size()-1);
        
    }
    void fun(vector<int>& nums, int from, int to)
    {
        while(from < to)
        {
            int tmp = nums[from];
            nums[from++] = nums[to];
            nums[to--] = tmp;
        }
    }
};