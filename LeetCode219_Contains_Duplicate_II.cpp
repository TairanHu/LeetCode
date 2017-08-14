class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
        if(nums.size() == 0)
            return false;
        
        map<int, int> res;
        res[nums[0]] = 0;
        map<int, int>::iterator it = res.begin();
        
        for(int i = 1; i < nums.size(); i++)
        {
            it = res.find(nums[i]);
            if(it != res.end() && k >= i-it->second)
            {
                return true;
            }                
            
            res[nums[i]] = i;
        }
        
        return false;
        
    }
};