
//未排序直接暴力搜索会超时




class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int pos = 0;
        vector<vector<int>> sum;
        vector<int> a;
        
        
        sort(nums.begin(), nums.end());
        
        if(nums.size() < 3)
        {
            return sum;
        }
        
        for(int i = 0; i < nums.size()-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }
            
            int start = i+1;
            int end = nums.size()-1;
            
            while(start < end)
            {
                if(start > i+1 && nums[start] == nums[start-1])
                {
                    start++;
                    continue;
                }
                
                if(nums[start] + nums[end] + nums[i] < 0)
                {
                    start++;
                }
                else if(nums[start] + nums[end] + nums[i] > 0)
                {
                    end--;
                }
                else
                {
                    a.clear();
                    a.push_back(nums[i]);
                    a.push_back(nums[start]);
                    a.push_back(nums[end]);
                    sum.push_back(a);
                    start++;
                }
            }
            
            
        }
        
        return sum;
    }
};







/*


class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int pos = 0;
        vector<vector<int>> sum;
        vector<int> a;
        
        
        sort(nums.begin(), nums.end());
        
        if(nums.size() < 3)
        {
            return sum;
        }
        
        for(int i = 0; i < nums.size()-2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1]) 
            {
                continue;
            }
            
            int start = i+1;
            int end = nums.size()-1;
            
            while(start < end)
            {
                if(start > i+1 && nums[start] == nums[start-1])
                {
                    start++;
                    continue;
                }
                
                if(nums[start] + nums[end] + nums[i] < 0)
                {
                    start++;
                }
                else if(nums[start] + nums[end] + nums[i] > 0)
                {
                    end--;
                }
                else
                {
                    a.clear();
                    a.push_back(nums[i]);
                    a.push_back(nums[start]);
                    a.push_back(nums[end]);
                    sum.push_back(a);
                    start++;
                }
            }
            
            
        }
        
        return sum;
    }
};


*/