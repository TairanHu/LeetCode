
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        map<int, int> tmp;
        for(int i = 0; i < nums1.size(); i++)
        {
            tmp[nums1[i]]++;
        }
        
        map<int, int>::iterator iter;
        for(int i = 0; i < nums2.size(); i++)
        {
            iter = tmp.find(nums2[i]);
            if(iter != tmp.end() && iter->second > 0)
            {
                res.push_back(nums2[i]);
                iter->second--;
            }
        }
        
        return res;
        
    }
};



class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        
        vector<int> res;
        map<int, int> tmp;
        
        for(int i = 0; i < nums1.size(); i++)
        {
            tmp[nums1[i]]++;
        }
        
        for(int i = 0; i < nums2.size(); i++)
        {
            if(tmp[nums2[i]])
            {
                res.push_back(nums2[i]);
                tmp[nums2[i]]--;
            }
        }
        return res;
        
    }
};