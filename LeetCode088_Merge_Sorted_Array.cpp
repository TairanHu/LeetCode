class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        
        vector<int> tmp_nums1 = nums1;
        
        nums1.clear();
        int i = 0;
        int j = 0;
        
        while(i < m && j < n)
        {
            if(tmp_nums1[i] <= nums2[j])
            {
                nums1.push_back(tmp_nums1[i++]);
            }
            else
            {
                nums1.push_back(nums2[j++]);
            }
        }
        
        while(i < m)
        {
            nums1.push_back(tmp_nums1[i++]);
        }
        
        while(j < n)
        {
            nums1.push_back(nums2[j++]);
        }
        
        
    }
};