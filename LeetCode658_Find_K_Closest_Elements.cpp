class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        
        vector<int> res;
        if(x <= arr[k/2])
        {
            for(int i = 0; i < k; i++)
                res.push_back(arr[i]);
            
            return res;
        }
        
        if(x > arr[arr.size() - k/2])
        {
            for(int i = arr.size() - k; i < arr.size(); i++)
                res.push_back(arr[i]);
            
            return res;
        }
        
        int l = 0;
        int r = arr.size();
        int mid;
        
        while(l < r)
        {
            mid = (l+r)/2;
            if(arr[mid] == x)
            {
                break;
            }
            else if(arr[mid] < x)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }
        
        int l1 = mid-k/2;
        
        while(l1+k >= arr.size())
            l1--;
            
        while(l1 > 0 && x-arr[l1] <= arr[l1+k-1]-x )
            l1--;
        //cout << l1 << endl;
        while(l1+k < arr.size() && x-arr[l1] > arr[l1+k]-x)
            l1++;
        //cout << l1 << endl;
        
        
        for(int i = l1; i < l1+k; i++)
        {
            res.push_back(arr[i]);
        }
        
        return res;
        
        
        
    }
};