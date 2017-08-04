class Solution {
public:
    int maxProduct(vector<int>& nums) {
        
        int min_num = nums[0];
        int max_num = nums[0];
        int max_g = nums[0];
        
        for(int i = 1; i < nums.size(); i++)
        {
            int n_max = max_num;
            max_num = max(max(max_num*nums[i], nums[i]), min_num*nums[i]);
            min_num = min(min(n_max*nums[i], nums[i]), min_num*nums[i]);
            max_g = max(max_g, max_num);
        }
        
        return max_g;
        
    }
};