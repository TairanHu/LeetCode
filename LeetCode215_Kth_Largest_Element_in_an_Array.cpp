class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        int l = 0; 
        int r = nums.size()-1;

        return quick(nums, k, l, r);
        
    }
    
    int quick(vector<int>& nums, int k, int l, int r)
    {
        if(l < r)
        {
            int i = l;
            int j = r;
            int x = nums[i];
            
            while(i < j)
            {
                while(i < j && nums[j] > x)
                {
                    j--;
                }
                if(i < j)
                    nums[i++] = nums[j];
                
                while(i < j && nums[i] < x)
                    i++;
                if(i < j)
                    nums[j--] = nums[i];
            }
            nums[i] = x;
            if(i == nums.size()-k)
                return nums[j];
            if(i < nums.size()-k)
                return quick(nums, k, i+1, r);
            return quick(nums, k, l, i-1);
        }
        return nums[l];
               
    }
    
};