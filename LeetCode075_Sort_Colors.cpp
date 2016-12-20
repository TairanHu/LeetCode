class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        int equal[3] = {0, 0, 0};
        int size = nums.size();
        
        if(size == 0)
        {
            return;
        }
        
        for(int i = 0; i < size; i++)
        {
            equal[nums[i]]++;
        }
        
        int i = 0;
        for(int j = 0; j < 3; j++)
        {
            while(equal[j]--)
            {
                nums[i++] = j;
            }
        }
    }
};