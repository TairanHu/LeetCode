class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        
        vector<string> res;
        
        if(nums.size() == 0)
            return res;
        
        vector<int> tmp;
        tmp.push_back(nums[0]);
        tmp.push_back(nums[0]);
        
        nums.push_back(nums[nums.size()-1]);
        for(int i = 1; i < nums.size(); i++)
        {
            if(nums[i] - 1 != nums[i-1])
            {
                string t;
                if(tmp[1] == tmp[0])
                    t = to_string(tmp[0]); 
                else
                    t = to_string(tmp[0]) + "->" + to_string(tmp[1]);
                
                res.push_back(t);
                tmp[0] = nums[i];
                tmp[1] = nums[i];
            }
            else
            {
                tmp[1] = nums[i];
            }
        }
        
        return res;
    }
};