class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> tmp;
        
        for(int i = 0; i < nums.size(); i++)
        {
            tmp.insert(nums[i]);
            if(tmp.size() > 3)
                tmp.erase(tmp.begin());
        }
        
        if(tmp.size() == 3)
            return *tmp.begin();
        
        return *tmp.rbegin();    
    }
};