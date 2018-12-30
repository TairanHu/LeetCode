class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        map<int, int> map_num;
        
        for(int i = 0; i < nums1.size(); i++)
        {
            map_num[nums1[i]] = 1;
        }
        
        map<int, int>::iterator iter;
        for(int i = 0; i < nums2.size(); i++)
        {
            iter = map_num.find(nums2[i]);
            if(iter != map_num.end() && iter->second == 1)
            {
                res.push_back(nums2[i]);
                iter->second = 0;
            }
        }
        return res;
    }
};