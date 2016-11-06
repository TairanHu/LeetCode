class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        
        vector<vector<int>> sum;
        vector<int> tmp;
        
        if(nums.size() < 4)
        {
            return sum;
        }
        
        sort(nums.begin(), nums.end());
        
        for(int i = 0; i < nums.size()-3; i++)
        {
            //�жϵ�һ������֮ǰ�Ƿ�����ͬ��ֵ
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            
            for(int j = i+1; j < nums.size()-2; j++)
            {
                //�жϵڶ�������֮ǰ�Ƿ�����ͬ��ֵ
                if(j > i+1 && nums[j] == nums[j-1])
                {
                    continue;
                }
                
                int start = j+1;
                int end = nums.size()-1;
                
                while(start < end)
                {
                    //�жϵ���������֮ǰ�Ƿ�����ͬ��ֵ
                    if(start > j+1 && nums[start] == nums[start-1])
                    {
                        start++;
                        continue;
                    }
                    
                    if(nums[i]+nums[j]+nums[start]+nums[end] < target)
                    {
                        start++;
                    }
                    else if(nums[i]+nums[j]+nums[start]+nums[end] > target)
                    {
                        end--;
                    }
                    else
                    {
                        tmp.clear();
                        tmp.push_back(nums[i]);
                        tmp.push_back(nums[j]);
                        tmp.push_back(nums[start]);
                        tmp.push_back(nums[end]);
                        
                        sum.push_back(tmp);
                        start++;
                    }
                }
            }
        }
        return sum;
    }
};