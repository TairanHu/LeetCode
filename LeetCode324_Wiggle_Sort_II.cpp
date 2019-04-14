class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());
        vector<int> tmp(nums);
        
        int len = nums.size();
        int h_len = (len+1)/2;
        
        for (int i = h_len - 1, j = 0; i >= 0; i--, j += 2) 
        {
            nums[j] = tmp[i];
        }
        for (int i = len - 1, j = 1; i >= h_len; i--, j += 2) 
        {
            nums[j] = tmp[i];
        }
        
    }
};