class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> res;
        int l = 0;
        int r = numbers.size()-1;
        while(l < r)
        {
            if(target == numbers[l] + numbers[r])
            {
                res.push_back(l+1);
                res.push_back(r+1);
                return res;
            }
            if(target > numbers[l] + numbers[r])
                l++;
            else
                r--;
        }
        
    }
};