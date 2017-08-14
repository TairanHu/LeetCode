class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        
        if(nums.size() == 0)
            return false;
        
        map<int, int> res;
        res[nums[0]] = 1;
        map<int, int>::iterator it = res.begin();
        
        for(int i = 1; i < nums.size(); i++)
        {
            it = res.find(nums[i]);
            if(it != res.end())
                return true;
            
            res[nums[i]] = 1;
        }
        
        return false;
        
    }
};