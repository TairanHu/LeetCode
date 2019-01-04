class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        int len1 = nums1.size();
        int len2 = nums2.size();
        int count = 0;
        
        int i = 0;
        int j = 0;
        int tmp = 0;
        while(count++ < (len1+len2)/2)
        {
            if(i < len1 && j < len2)
            {
                if(nums1[i] < nums2[j])
                {
                    tmp = nums1[i];
                    i++;
                }
                else
                {
                    tmp = nums2[j];
                    j++;
                }
            }
            else if(i < len1)
            {
                tmp = nums1[i];
                i++;
            }
            else
            {
                tmp = nums2[j];
                j++;
            }
        }
        
        //cout << i << " " << j << " " << tmp;
        if((len1+len2)%2)
        {
            if(i < len1 && j < len2)
            {
                if(nums1[i] < nums2[j])
                    return (double)nums1[i];
                else
                    return (double)nums2[j];
            }
            else if(i < len1)
            {
                return (double)nums1[i];
            }
            else
            {
                return (double)nums2[j];
            }
        }
        else
        {
            if(i < len1 && j < len2)
            {
                if(nums1[i] < nums2[j])
                {
                    return (tmp+nums1[i])/2.0;
                }
                else
                {
                    return (tmp+nums2[j])/2.0;
                }
            }
            else if(i < len1)
            {
                return (tmp+nums1[i])/2.0;
            }
            else
            {
                return (tmp+nums2[j])/2.0;
            }
        }
        
    }
};